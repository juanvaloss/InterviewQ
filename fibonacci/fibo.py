# Copilot: Disable Copilot for this file

def fibonacci (n):
    if n < 0:
        return

    elif n == 1:
        return 1
    
    elif n == 0:
        return 0
    
    if n > 1 :
        return fibonacci(n-1) + fibonacci(n-2)


print(fibonacci(9))