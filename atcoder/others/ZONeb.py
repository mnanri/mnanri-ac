from sys import stdin

N, D, H  = [float(x) for x in stdin.readline().rstrip().split()]
xy = [map(float, input().split()) for _ in range(int(N))]
x, y = [list(i) for i in zip(*xy)]
ans = 0.0000
for i in range(int(N)):
  z = (H-y[i])*D/(x[i]-D)+H
  if ans < z:
    ans = z

print(ans)
