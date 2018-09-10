import numpy as np

num = 2 #first prime number to check
prime = 1 #number of prime numbers calculated

while (prime <= 20):
    val = 0 #amount of factors
    #checks to see how many factors each number has
    for i in range(1,num):
        if(num % i == 0): val = val+1
        if (val >= 2): break #loop breaks if number has 2 or more factors
    #numbers with one factor are prime
    if (val == 1):
        print(num)
        prime = prime+1
    num = num+1
