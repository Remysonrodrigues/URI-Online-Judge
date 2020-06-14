N = int(input())

print(N)

while N != 0:
    
    print('%d nota(s) de R$ 100,00' %(N // 100))
    N = N % 100

    print('%d nota(s) de R$ 50,00' %(N // 50))
    N = N % 50    
    
    print('%d nota(s) de R$ 20,00' %(N // 20))
    N = N % 20
    
    print('%d nota(s) de R$ 10,00' %(N // 10))
    N = N % 10
    
    print('%d nota(s) de R$ 5,00' %(N // 5))
    N = N % 5
    
    print('%d nota(s) de R$ 2,00' %(N // 2))
    N = N % 2
    
    print('%d nota(s) de R$ 1,00' %(N // 1))
    N = N % 1
    
