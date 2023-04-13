# Problem 3:
'''What is the largest prime factor of the number 600851475143 ?'''
import math
number = 600851475143

while number % 2 == 0:
    print("2")
    number = number / 2

for i in range(3, int(math.sqrt(number)) + 1, 2):
    while number % i == 0:
        print(i)
        number = number / i


if number > 2:
    print(number)
