import mysql.connector

def login(username, password):
    db = mysql.connector.connect(user='user', password='password', host='localhost', database='database')
    cursor = db.cursor()

    query = f"SELECT * FROM users WHERE username = '{username}' AND password = '{password}'"
    cursor.execute(query)

    result = cursor.fetchone()
    if result:
        return True
    else:
        return False
