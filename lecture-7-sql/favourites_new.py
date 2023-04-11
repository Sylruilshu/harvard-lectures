import csv


counter = 0

with open("favorites.csv", "r") as file:
    reader = csv.DictReader(file)
    next(reader)
    for row in reader:
        language = row["language"].strip().lower()
        if "python" in language:
            counter += 1

print(f"Number of python users: {counter}")