list = []
sum = 0;
positives = 0;
for i in range(6):
    list.append(float(input()))
    if list[i] > 0:
        sum += list[i]
        positives += 1

print(f'{positives} valores positivos')
print(f'{(sum / positives):.1f}')
