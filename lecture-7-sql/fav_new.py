import csv
from cs50 import SQL

db = SQL("sqlite:///favourites.db")

language = input("Language: ").strip()

rows = db.execute("SELECT COUNT(*) AS counter FROM favourites WHERE language LIKE ?", language)

row = rows[0]

print(row["counter"])