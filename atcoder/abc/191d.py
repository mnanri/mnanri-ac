import math
from decimal import Decimal
a, b, r = map(Decimal, input().split())

x=math.ceil(a-r)
y=math.floor(a+r)

cnt=0
for num in range(x,y+1):
    p=(r**2+(a-num)**2).sqrt()
    u=math.floor(b+p)
    d=math.ceil(b-p)
    cnt+=(u-d+1)

print(cnt)    

"""
import math
from decimal import Decimal

cx, cy, r = map(Decimal, input().split())

ans = 0
r2 = r ** 2
for x in range(math.ceil(cx - r), math.floor(cx + r) + 1):
    p = (r2 - (x - cx) ** 2).sqrt()

    ymin = math.ceil(cy - p)
    ymax = math.floor(cy + p)

    ans += ymax - ymin + 1

print(ans)
"""