from cs50 import get_string

people = {
    "Carter": "123456789",
    "David": "987654321"
}

name = get_string("Name: ")

if name in people:
    number = people[name]
    print(f"Number: {number}")