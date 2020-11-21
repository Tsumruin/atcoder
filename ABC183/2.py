x = list(map(int, input().split()))
r = x[2] - x[3] * (x[2] - x[0])/(x[1]+x[3])
print(r)