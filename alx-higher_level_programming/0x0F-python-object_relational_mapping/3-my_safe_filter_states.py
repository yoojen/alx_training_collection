#!/usr/bin/python3
"""select from database | aware of injections"""


import MySQLdb
import sys


if __name__ == "__main__":
    conn = MySQLdb.connect(host="localhost", port=3306, user=sys.argv[1],
                           passwd=sys.argv[2], db=sys.argv[3], charset="utf8")
    cur = conn.cursor()
    cur.execute("SELECT * FROM states")
    query_rows = cur.fetchall()
    [print(row) for row in query_rows if row[1] == '{}'.format(sys.argv[4])]
    cur.close()
    conn.close()
