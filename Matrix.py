import random
import time

N = [64, 128, 256, 512, 1024]

def matmul(A, B, C):
    for i in range(len(A)):
        for j in range(len(B[0])):
            for k in range(len(B)):
                C[i][j] += A[i][k] * B[k][j]

def createRandomMatrix(N, dType = "int"):
    """
    dType: "int" or "float"
    """
    if dType == "int":
        A = [[random.randint(0, 255) for _ in range(N)] for _ in range(N)]
    else:
        A = [[random.uniform(0, 1e6) for _ in range(N)] for _ in range(N)]
    return A

def printMat(A):
    for i in range(len(A)):
        print(A[i])

A = createRandomMatrix(N[4], dType = "int")
B = createRandomMatrix(N[4], dType = "int")


C = [[0] * len(B[0]) for _ in range(len(A))]
start_time = time.process_time()
matmul(A, B, C)
end_time = time.process_time()

print(f"CPU Time taken by the Meat Portion function: {end_time - start_time}s")