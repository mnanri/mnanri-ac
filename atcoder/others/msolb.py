from sys import stdin
import numpy as np
import math

a,b,c = [int(x) for x in stdin.readline().rstrip().split()]
k = int(stdin.readline().rstrip())

cnt = 0
while a>=b:
  b*=2
  cnt+=1
while b>=c:
  c*=2
  cnt+=1

if cnt<=k:
  print("Yes")
else:
  print("No")
