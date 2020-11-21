import numpy as np
import itertools

N, K = map(int, input().split())
T = [list(map(int, input().split())) for i in range(N)]

count = 0

C = [i for i in range(1, N)]
C = list(itertools.permutations(C))
for c in C:
    c = list(c)
    c.append(0)
    print(c)

    sum = 0

    k=0
    for i in c:
        U = np.roll(T[k], i)
        print(U)
        sum += U[0]
        k += 1
    if sum == K:
        count = count + 1
    print("\n")
        
    
            
print(count)