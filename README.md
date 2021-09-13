# PrimeNumbers
***Codes to Find Prime Number***


Code1.cpp | A Code That find and print all prime numbers 2 to N
          | O(N * log(N))
          | optimal maximum input size 10^7
          |
          | 2 3 4 5 6 7 8 9 . . . N 
          | 2 2 2 2 2 2 2 2 . . . 
          |   3   3   3   3
          |       4   4
          |       5   5
          |           6
          |           7
          
Code2.cpp | NOT READY YET
          | it will store all before prime numbers and will try only them
          | for example when we are looking for 23 there must be a array that store primes before 23 
          | N=23 arr=[2,3,5,7,11,13,17,19] and instead of searching 23%2 - 23%3 - 23%4 . . . 23%sqrt(23)+1 we will only search for 23%2 - 23%3 - 23%5 - 23%7 . . . etc
