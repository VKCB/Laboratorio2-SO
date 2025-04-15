import time

def factorial(n):
    if n <= 1:
        return 1
    else:
        return n * factorial(n - 1)

num = int(input("Introduce un número: "))
print(f"Factorial de {num} es {factorial(num)}")
