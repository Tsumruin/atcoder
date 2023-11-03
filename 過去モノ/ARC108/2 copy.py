import re

d = input()
x = input()
fox = re.compile(r'fox')
while len(x) > 0:
    tmp = fox.sub("", x)
    if len(x) == len(tmp):
        break
    else:
        x = tmp
print(len(x))