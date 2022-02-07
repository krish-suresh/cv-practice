import numpy as np
from  math import sqrt
# A = np.asmatrix([
#     [5,3,5,4], 
#     [3,7,12,1], 
#     [5,12,9,2],
#     [4,1,2,10]])
A = np.asmatrix([
    [2,-1,0], 
    [-1,2,-1], 
    [0,-1,2]])
print("A matrix:")
print(A)
print("numpy cholesky:")
print(np.linalg.cholesky(A))
L = np.zeros(A.shape)

for i in range(L.shape[0]):
    for j in range(i+1):
        # print(f"i: {i} j: {j}")
        if i==j:
            Sum = sum([L[i, k]**2 for k in range(i)])
            L[i,j] = sqrt(A[i,i] - Sum)
        else:
            Sum = sum([L[i, k]*L[j, k] for k in range(j)])
            L[i,j] = (A[i,j]-Sum)/L[j,j]
print("L matrix:")
print(L)
print("LL' matrix:")
print(np.matmul(L,L.transpose()))