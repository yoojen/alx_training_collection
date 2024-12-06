#!/usr/bin/python3
""" concanates two tables and print their contents"""

import sys
import MySQLdb


if __name__ == '__main__':
    conn = MySQLdb.connect(host="localhost", port=3306, user=sys.argv[1],
                           passwd=sys.argv[2], db=sys.argv[3], charset="utf8")
    cur = conn.cursor()
    cur.execute("SELECT cities.id, cities.name, states.name from cities, \
            states where cities.state_id = states.id")
    query_rows = cur.fetchall()
    [print(row) for row in query_rows]
    cur.close()
    conn.close()
