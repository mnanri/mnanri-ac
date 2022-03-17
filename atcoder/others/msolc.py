from sys import stdin
import numpy as np
import math

n,k = [int(x) for x in stdin.readline().rstrip().split()]
a = [int(x) for x in stdin.readline().rstrip().split()]

for i in range(k,n):
  if a[i]>a[i-k]:
    print("Yes")
  else:
    print("No")
