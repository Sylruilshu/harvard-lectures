words = set()

def check(word: str) -> bool:
    if word.lower() in words:
        return True
    else:
        return False

def load(dict: str) -> bool:
    file = open(dict, "r")

    for line in file:
        word = line.rstrip()
        words.add(word)
        
        return True

def size() -> int:
    return len(words)

def unload() -> bool:
    return True