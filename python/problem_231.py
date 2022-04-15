def factorial(x):
    
    fac = 1
    
    for i in range(1, x+1):
        fac *= i
    
    return fac

def get_binomial_coef(n, k):
    return int(int(factorial(n))//(int(factorial(k))*int(factorial(n-k))))

def is_prime_num(x):
    
    prime = True
    
    for i in range(2, int(x**(1/2))):
        if x % i == 0:
            prime = False
            break
            
    return prime

def prime_fac(binomial_coef):
    
    prime_fac_list = []
    
    i = 2
    while i < binomial_coef:
        if is_prime_num(i) == True and binomial_coef % i == 0:
            binomial_coef = binomial_coef // i
            prime_fac_list.append(i)
            i = 2
            if is_prime_num(binomial_coef) == True:
                prime_fac_list.append(int(binomial_coef))
                break
        else:
            i += 1
    
    prime_fac_sum = 0
    for fac in prime_fac_list:
        prime_fac_sum += fac
    return prime_fac_sum

print (prime_fac(get_binomial_coef(20000000, 15000000)))
