import json
import sys

def search(arg, cond):
    res =[]
    sum = 0
    if cond(arg):
        res.append(str(arg))
    elif isinstance(arg, list):
        for item in arg:
            res += search(item, cond)
    elif isinstance(arg, dict):
        for value in arg.values():
            res += search(value, cond)
    return res

def has_int(arg):
    return isinstance(arg, int)

def get_recipes(arg):
    return search(arg, has_int)

json_open = open('categories.json', 'r')
json_load = json.load(json_open)

args = sys.argv
arg = str(args[1])

print(get_recipes(arg))
