from sys import stdin
import numpy as np
import math
from decimal import Decimal

x = int(input())

sum = 0
for i in range(1,x+1):
  for j in range(1,x+1):
    tmp = math.gcd(i,j)
    for k in range(1,x+1):
      sum += math.gcd(tmp,k)

print(sum)
