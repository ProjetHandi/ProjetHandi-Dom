#!/usr/bin/env python
# -*- coding: utf-8 -*-

import MySQLdb

class sql:

    connection = ''

    def __init__(self, host, user, passwd, db):
        self.host = host
        self.user = user
        self.passwd = passwd
        self.db = db

    def connect(self):
        global connection
        connection = MySQLdb.connect(self.host, self.user, self.passwd, self.db)
        return connection

    def execute(self, query):
        cursor = connection.cursor()
        cursor.execute(query)
        row = cursor.fetchone()
	cursor.close()
        return row[0]

    def close(self):
        connection.close()
