# Problem 7:
'''By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13,
 we can see that the 6th prime is 13. What is the 10 001st prime number? '''

from math import log, ceil
import time


def find_primes(limit): # Crivo de Eratosthenes
#Produz um generator object
    primes = [True] * (limit + 1)
    primes[0] = primes[1] = False

    for (i, is_prime) in enumerate(primes):
        if is_prime:
            yield i  # "segura" o valor de i
            for n in range(i * i, limit + 1, i):
                primes[n] = False


def upper_bound_for_p_n(n):
    if n < 6:
        return 100
    return ceil(n * (log(n) + log(log(n))))


def find_n_prime(n):
    primes = list(find_primes(upper_bound_for_p_n(n)))
    return primes[n - 1]


print(find_n_prime(10001))
