
import math


def CrivoDeErastotenes(limiteSuperior):
    primos = [True for i in range(limiteSuperior + 1)]
    p = 2

    while(p * p <= limiteSuperior):
        if(primos[p] == True):

            for j in range(p * p, limiteSuperior + 1, p):
                primos[j] = False

        p = p + 1

    for p in range(2, limiteSuperior + 1):
        if primos[p]:
            print(p)


if __name__ == '__main__':
    num = 30
    print("Following are the prime numbers smaller"),
    print("than or equal to", num)
    CrivoDeErastotenes(num)
