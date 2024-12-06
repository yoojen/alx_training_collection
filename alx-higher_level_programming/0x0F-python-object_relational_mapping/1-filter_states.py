#!/usr/bin/python3
"""This module contains a script that lists start with N from hbtn_0e_0_usa"""


import MySQLdb
import sys


if __name__ == "__main__":
    conn = MySQLdb.connect(
                      host="localhost",
                      port=3306,
                      user=sys.argv[1],
                      passwd=sys.argv[2],
                      db=sys.argv[3],
                      charset="utf8"
                          )
    cur = conn.cursor()
    cur.execute("SELECT * FROM states WHERE name LIKE 'N%' ORDER BY id ASC")
    query_rows = cur.fetchall()
    [print(state) for state in query_rows if state[1][0] == "N"]
    cur.close()
    conn.close()
