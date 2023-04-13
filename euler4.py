# Problem 4:
'''A palindromic number reads the same both ways. 
The largest palindrome made from the product of two 2-digit numbers 
is 9009 = 91 × 99. 
Find the largest palindrome made from the product of two 3-digit numbers'''


def isPalindromic(number):
    reverse = 0
    n = number
    while(number != 0):
        reverse = reverse * 10 + number % 10
        number = number // 10
    if(n == reverse):
        return 1
    return 0


max = 0
for i in range(100, 1000):
    for j in range(100, 1000):
        if (isPalindromic(i * j)):
            if(i * j) > max:
                max = i * j

print(max)
