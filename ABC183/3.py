import numpy as np
import itertools

N, K = map(int, input().split())
T = [list(map(int, input().split())) for i in range(N)]

count = 0

for c in list(itertools.permutations([i for i in range(1, N)])):

    c = list(c)
    c.insert(0, 0)
    # print(c)

    sum = 0

    for k in range(N):
        sum += T[c[k]][c[(k+1)%N]]
        # print(sum)
    if sum == K:
        count = count + 1
        
    
            
print(count)