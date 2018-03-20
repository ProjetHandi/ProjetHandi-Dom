from sql import sql
import sys

conn = sql("localhost", "root", "btsir123", "HandiDom")
conn.connect()
print conn.execute(sys.argv[1])
conn.close()
