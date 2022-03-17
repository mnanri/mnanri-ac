from sys import stdin
import math
import numpy as np

H, W = [int(x) for x in stdin.readline().rstrip().split()]

if H==1 or W==1:
  print(1)
elif (H*W)%2 == 0 :
  print(int(H*W/2))
else:
  print(int(np.floor(H*W/2))+1)
