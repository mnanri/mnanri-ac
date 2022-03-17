from sys import stdin

s = stdin.readline().rstrip()
target = 'ZONe'
index = -1
count = 0
while True:
    index = s.find(target, index + 1)
    if index == -1:
        break
    count += 1
print(count)
