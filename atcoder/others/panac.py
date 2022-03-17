from sys import stdin
import numpy as np
import math

a,b,c = [int(x) for x in stdin.readline().rstrip().split()]

d = c-a-b

if d>0 and 4*a*b < d*d:
  print("Yes")
else:
  print("No")
