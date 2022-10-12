
#include <stdio.h>
#include <stdlib.h>
#include <libpq-fe.h>
#include "settings.h"

int main (int argc, char *argv[])
{
    // Connect to the database.
    PGconn *conn = PQconnectdb("host=" HOSTNAME " dbname=" DATABASE " user=" USERNAME " password=" PASSWORD);

    if (PQstatus(conn) == CONNECTION_BAD) {
        fprintf(stderr, "Connection to database failed: %s\n", PQerrorMessage(conn));
        PQfinish(conn);
        exit(0);
    }

    printf("Connected!\n");

    PGresult *res = PQexec(conn, "SELECT * FROM example");    
    
    if (PQresultStatus(res) != PGRES_TUPLES_OK) {
        printf("No data retrieved.\n");        
        PQclear(res);
        PQfinish(conn);
        exit(0);
    }    
    
    int ncols = PQnfields(res);
    int nrows = PQntuples(res);

    printf("Total columns: %d\n",   ncols);    
    printf("Total rows...: %d\n\n", nrows);    

    // Displays table field names.
    printf("%s | %s\n", PQfname(res, 0), PQfname(res, 1));
    printf("---------------------------\n");

    // Retrieve records from the table.
    for (int a=0; a<nrows; a++) {
        printf("%s  | %s\n", 
            PQgetvalue(res, a, 0), 
            PQgetvalue(res, a, 1));
    }

    PQclear(res);

    // Close connection.
    PQfinish(conn);
    printf("Disconnected!\n");

    return 0;
}


