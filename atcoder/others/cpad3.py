import sys

args = sys.argv
x = int(args[1])

x = x//500

sum = 0
while x >= 5:
  x -= 5
  sum += 290*25

if x == 4:
  sum += 5500
elif x == 3:
  sum += 275*15
elif x == 2:
  sum += 2750
elif x == 1:
  tmp = 275*30-290*25
  sum += tmp

print(sum)
