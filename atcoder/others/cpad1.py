import sys

args = sys.argv
x = int(args[1])
y = str(args[2])

cnt = 0
for i in range(2**x):
  s = ''
  for j in range(x):
    if((i >> j) & 1):
      s += 'M'
    else:
      s += 'V'
  if y in s:
    cnt += 1

print(cnt)
