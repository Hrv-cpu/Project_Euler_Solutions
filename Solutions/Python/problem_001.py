Sum = 0

for num in range(1000):
    if num % 3 != 0 and num % 5 != 0:
        continue
    else:
        Sum += num

print(f"Sum: {Sum}")