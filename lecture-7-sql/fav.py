import csv


language = input("Lnaguage: ").strip().lower()

counter = 0

with open("favorites.csv", "r") as file:
    reader = csv.DictReader(file)
    next(reader)
    for row in reader:
        if row["language"].strip().lower() == language:
            counter += 1

print(counter)