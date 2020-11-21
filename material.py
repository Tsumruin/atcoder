import math
import numpy as np

# 入力1つ
x = int(input())
print(x)

# 横複数
# x = list(map(int, input().split()))
# print(x)

# 縦入力複数
rows = int(input())
x = [int(input()) for i in range(rows)]
print(x)

# 縦よこ横入力複数
rows = int(input())
x = [list(map(int, input().split())) for i in range(rows)]
print(x)