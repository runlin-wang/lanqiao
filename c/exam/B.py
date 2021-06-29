n = 2020
cnt = 0
for i in range(2, n+1):
    tmp = i
    while tmp > 1:
        if tmp % 10 == 2:
            cnt += 1
        tmp /= 10

print(cnt)
