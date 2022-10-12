
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

    // Update data.
    PGresult *res = PQexec(conn, "UPDATE example SET name = 'New name' WHERE id = 1");    

    if (PQresultStatus(res) != PGRES_COMMAND_OK) {
        fprintf(stderr, "Update error, %s\n", PQerrorMessage(conn));    
        PQclear(res);
        PQfinish(conn);
        exit(0);
    }

    printf("Items successfully updated.\n");
    printf("Total: %d\n", atoi(PQcmdTuples(res)));
    PQclear(res);

    // Close connection.
    PQfinish(conn);
    printf("Disconnected!\n");

    return 0;
}


