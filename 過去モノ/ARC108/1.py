import sys

def make_divisors(n):
    lower_divisors , upper_divisors = [], []
    i = 1
    while i*i <= n:
        if n % i == 0:
            lower_divisors.append(i)
            if i != n // i:
                upper_divisors.append(n//i)
        i += 1
    return lower_divisors + upper_divisors[::-1]

if __name__ == "__main__":

    x = list(map(int, input().split()))

    div_list = make_divisors(x[1])
    print(div_list)

    if 1 == len(div_list):
        if x[0] == 2 * div_list[0]:
            print("Yes")
            sys.exit()
        else:
            print("No")
            sys.exit()

    for i in range(int(len(div_list)/2) + 1):
        print(div_list[i])
        print(div_list[len(div_list)-i-1])
        if x[0] == div_list[i] + div_list[len(div_list)-i-1]:
            print("Yes")
            sys.exit()

    print("No")