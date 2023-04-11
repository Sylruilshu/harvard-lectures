try:
    x = int(input("x: "))
    y = int(input("y: "))
except ValueError:
    print("that is not an int")
    exit()

print(x + y)