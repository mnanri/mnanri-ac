from sys import stdin
import numpy as np
import math
from decimal import Decimal

x = int(input())
a = False

for i in range(1,x+1):
  if 100*i<=x and x<=105*i:
    a = True
    break

if a:
  print(1)
else:
  print(0)
