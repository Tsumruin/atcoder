N = input()
x = input()
tmp = ""
for st in x:
    tmp += st
    print(tmp)
    if tmp[-3:] == "fox":
        tmp = tmp[:-3]
    print(tmp)
print(len(tmp))
