from sys import stdin
import numpy as np
import math
from decimal import Decimal

n,k = map(int, input().split())

x = n%k
print(min(x,abs(k-x)))
