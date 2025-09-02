grade = int(input())
letter = 'E'

if grade == 0:
    letter = letter
elif 1 <= grade <= 35:
    letter = 'D'
elif 36 <= grade <= 60:
    letter = 'C'
elif 61 <= grade <= 85:
    letter = 'B'
elif 86 <= grade <= 100:
    letter = 'A'

print(letter)
