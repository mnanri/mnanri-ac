from sys import stdin
import numpy as np
import math
from decimal import Decimal

x = int(input())

y = 1
z = 1
for i in range(x-11,x):
  y *= i
for i in range(1,12):
  z *= i

print(y//z)
