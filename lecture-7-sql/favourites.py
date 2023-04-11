import csv


# languages = []
# languages = set()
languages = {}

with open("favorites.csv", "r") as file:
    reader = csv.DictReader(file)
    next(reader)
    for row in reader:
        language = row["language"].strip().lower()
        # if language not in languages:
        #     languages.append(language)
        # languages.add(language)
        if language in languages:
            languages[language] += 1
        else:
            languages[language] = 1

# def get_dict_value(language):
#     return languages[language]

for language in sorted(languages, key=lambda language: languages[language], reverse=True):
    print(f"{language}: {languages[language]}")
