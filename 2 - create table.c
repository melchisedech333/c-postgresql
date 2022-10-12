
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

    // Delete table if exists.
    PGresult *res = PQexec(conn, "DROP TABLE IF EXISTS example");
    
    if (PQresultStatus(res) != PGRES_COMMAND_OK) {
        fprintf(stderr, "Drop error, %s\n", PQerrorMessage(conn));    
        PQclear(res);
        PQfinish(conn);
        exit(0);
    }
    
    PQclear(res);
    printf("Drop table OK!\n");
    
    // Create new table.
    res = PQexec(conn, 
        " CREATE TABLE example (  "
        "      id   INT,          "
        "      name VARCHAR(100)  "
        " );                    ");
        
    if (PQresultStatus(res) != PGRES_COMMAND_OK) {
        fprintf(stderr, "Create error, %s\n", PQerrorMessage(conn));    
        PQclear(res);
        PQfinish(conn);
        exit(0);
    }
    
    PQclear(res);
    printf("Create table OK!\n");

    // Close connection.
    PQfinish(conn);
    printf("Disconnected!\n");

    return 0;
}


