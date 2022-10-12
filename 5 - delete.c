
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

    // Delete data.
    PGresult *res = PQexec(conn, "DELETE FROM example");    
    
    if (PQresultStatus(res) != PGRES_COMMAND_OK) {
        fprintf(stderr, "Delete error, %s\n", PQerrorMessage(conn));    
        PQclear(res);
        PQfinish(conn);
        exit(0);
    }

    PQclear(res);
    printf("Records deleted successfully.\n");

    // Close connection.
    PQfinish(conn);
    printf("Disconnected!\n");

    return 0;
}


