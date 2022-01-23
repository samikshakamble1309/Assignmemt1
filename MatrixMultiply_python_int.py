import random 
import time
t0 = time.time_ns()

n=int(input()) 
A=[[None]*n]*n  
B=[[None]*n]*n 
C=[]
for i in range(n):
    for j in range(n):
        A[i][j] = random.randint(100, 1000) 
        B[i][j] = random.randint(100, 1000)



for i in range(n):  
    row = [0]*n 
    C.append(row)
t1 = time.time_ns()  
print(t1-t0)
                                                                 
for i in range(n): 
   for j in range(n): 
      for k in range(n): 
         C[i][j] += A[i][k] * B[k][j]
for i in C: 
   print(i)
t2 = time.time_ns() 

print(t2-t1) 
print(t2-t0)