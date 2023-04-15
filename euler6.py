# Problem 6:
''' The sum of the squares of the first ten natural numbers is 385.
The square of the sum of the first ten natural numbers is 3025.
Hence the difference between the sum of the squares of the first ten natural
numbers and the square of the sum is 2640.
Find the difference between the sum of the squares of the first one hundred 
natural numbers and the square of the sum.    
    '''


def squares(num):
    soma = 0
    for i in range(num+1):
        soma = soma + (i*i)
    return soma


def sum_squares(num):
    soma = 0
    for i in range(num + 1):
        soma = soma + i
    return soma * soma


print(sum_squares(100) - squares(100))
