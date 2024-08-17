# ES215-COA-Assignment1
## Guntas Singh Saran (22110089)

### Q1. Implement a program(s) to list the first 50 fibonacci numbers preferably in C/C++ in the following manner: **(Total: 50 points)**
* Using recursion (10 points) <br>
* Using loop (10 points) <br>
* Using recursion and memoization (10 points) <br>
* Using loop and memoization (10 points) <br>
Find the speedup of all the programs on your machine by keeping program (1) as the baseline. (10 points). <br>

## Final Results

Final Results
Average CPU Time taken for Raw Recursion (a):  **111.91 s** <br>
Average CPU Time taken for Loop (b):    **11.20e-06** s <br>
Average CPU Time taken for Recursion + Memoization (c) : **07.00e-06 s** <br>
Average CPU Time taken for Loop + Memoization (d)         :   **05.00e-06 s** <br>
<br>
Speedup (AM) for Loop (b) wrt (a):  **17.26 x 10^6** <br>
Speedup (GM) for Loop (b) wrt (a):  **12.83 x 10^6** <br>

Speedup (AM) for Recursion + Memoization (c) wrt (a):  **25.80 x 10^6** <br>
Speedup (GM) for Recursion + Memoization (c) wrt (a):  **19.95 x 10^6** <br>
<br>
Speedup (AM) for Loop + Memoization (d) wrt (a):  **61.07 x 10^6** <br>
Speedup (GM) for Loop + Memoization (d) wrt (a):  **40.91 x 10^6** <br>

![](https://github.com/guntas-13/ES215-COA-Assignment1/blob/main/Q1Results.png)


### Q2. Write a simple Matrix Multiplication program for a given NxN matrix in any two of your preferred Languages from the following listed buckets, where N is iterated through the set of values 64, 128, 256, 512, and 1024. N can either be hardcoded or specified as input. Consider two cases 
### (a) Elements of the matrix are of data type **Integer**
### (b) **Double** In each case, (i.e. Bucket 1 for (a) and (b) + Bucket 2 for (a) and( b)) (Total: 100 points)
### Bucket1: C++ Bucket2: Python

To know the split between **User CPU** and **System CPU** Time: <br>
For **C++**
```bash
g++ -std=c++17 Program.cpp
```

```bash
(time ./a.out) &>> output.txt
```

For **Python**
```bash
(time python3 Program.py) &>> output.txt
```
This will append and dump console log into ```output.txt```

```
CPU Time taken by the Meat Portion function: 0.005390s
./a.out  0.01s user 0.00s system 2% cpu 0.521 total
```

To Find the CPU time of a portion of a program: <br>
In **C++**
```cpp
struct timespec tmStart, tmEnd;

clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &tmStart);
/*
CODE HERE
*/
clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &tmEnd);

double time_taken = ((tmEnd.tv_sec - tmStart.tv_sec) * 1e9 + (tmEnd.tv_nsec - tmStart.tv_nsec)) / 1e9;
```

In **Python**
```python
start_time = time.process_time()
## Some Code
end_time = time.process_time()

time_taken = end_time - start_time

```

## (a.) Finding USER CPU and SYSTEM CPU Time
### C++ INTEGER
<div align = "center">
    <img src = "https://github.com/guntas-13/ES215-COA-Assignment1/blob/main/Q2Media/CPPIntegerUser.png" style="float: left; width: 45%">
    <img src = "https://github.com/guntas-13/ES215-COA-Assignment1/blob/main/Q2Media/CPPIntegerSys.png" style="width: 45%">
</div>

### C++ DOUBLE
<div align = "center">
    <img src = "https://github.com/guntas-13/ES215-COA-Assignment1/blob/main/Q2Media/CPPFloatUser.png" style="float: left; width: 45%">
    <img src = "https://github.com/guntas-13/ES215-COA-Assignment1/blob/main/Q2Media/CPPFloatSys.png" style="width: 45%">
</div>

### Python INTEGER
<div align = "center">
    <img src = "https://github.com/guntas-13/ES215-COA-Assignment1/blob/main/Q2Media/PythonIntUser.png" style="float: left; width: 45%">
    <img src = "https://github.com/guntas-13/ES215-COA-Assignment1/blob/main/Q2Media/PythonIntSys.png" style="width: 45%">
</div>

### Python FLOAT
<div align = "center">
    <img src = "https://github.com/guntas-13/ES215-COA-Assignment1/blob/main/Q2Media/PythonFloatUser.png" style="float: left; width: 45%">
    <img src = "https://github.com/guntas-13/ES215-COA-Assignment1/blob/main/Q2Media/PythonFloatSys.png" style="width: 45%">
</div>

## (b.) Execution Time for Meat Portion and Total Execution Time of the Program
**Total Execution Time = User CPU Time + System CPU Time**

### C++ INTEGER
<div align = "center">
    <img src = "https://github.com/guntas-13/ES215-COA-Assignment1/blob/main/Q2Media/CPPIntegerMeat.png" style="float: left; width: 45%">
    <img src = "https://github.com/guntas-13/ES215-COA-Assignment1/blob/main/Q2Media/CPPIntegerExecution.png" style="width: 45%">
</div>

<div align = "center">
<img src = "https://github.com/guntas-13/ES215-COA-Assignment1/blob/main/Q2Media/CPPIntegerProportion.png" style="width: 50%">
<img src = "https://github.com/guntas-13/ES215-COA-Assignment1/blob/main/Q2Media/CPPIntegerAll.png" style="width: 50%">
</div>

### C++ DOUBLE
<div align = "center">
    <img src = "https://github.com/guntas-13/ES215-COA-Assignment1/blob/main/Q2Media/CPPFloatMeat.png" style="float: left; width: 45%">
    <img src = "https://github.com/guntas-13/ES215-COA-Assignment1/blob/main/Q2Media/CPPFloatExecution.png" style="width: 45%">
</div>

<div align = "center">
<img src = "https://github.com/guntas-13/ES215-COA-Assignment1/blob/main/Q2Media/CPPFloatProportion.png" style="width: 50%">
<img src = "https://github.com/guntas-13/ES215-COA-Assignment1/blob/main/Q2Media/CPPFloatAll.png" style="width: 50%">
</div>

### PYTHON INTEGER
<div align = "center">
    <img src = "https://github.com/guntas-13/ES215-COA-Assignment1/blob/main/Q2Media/PythonIntMeat.png" style="float: left; width: 45%">
    <img src = "https://github.com/guntas-13/ES215-COA-Assignment1/blob/main/Q2Media/PythonIntExecution.png" style="width: 45%">
</div>

<div align = "center">
<img src = "https://github.com/guntas-13/ES215-COA-Assignment1/blob/main/Q2Media/PythonIntProportion.png" style="width: 50%">
<img src = "https://github.com/guntas-13/ES215-COA-Assignment1/blob/main/Q2Media/PythonIntAll.png" style="width: 50%">
</div>

### PYTHON FLOAT
<div align = "center">
    <img src = "https://github.com/guntas-13/ES215-COA-Assignment1/blob/main/Q2Media/PythonFloatMeat.png" style="float: left; width: 45%">
    <img src = "https://github.com/guntas-13/ES215-COA-Assignment1/blob/main/Q2Media/PythonFloatExecution.png" style="width: 45%">
</div>

<div align = "center">
<img src = "https://github.com/guntas-13/ES215-COA-Assignment1/blob/main/Q2Media/PythonFloatProportion.png" style="width: 50%">
<img src = "https://github.com/guntas-13/ES215-COA-Assignment1/blob/main/Q2Media/PythonFloatAll.png" style="width: 50%">
</div>


## (c.) Plot the (a) and (b) execution times for each of the iterations. And compare the performance of the programs for given value of N for the languages in both the buckets

### Total Execution Time PYTHON vs. C++ for INTEGER
<div align = "center">
<img src = "https://github.com/guntas-13/ES215-COA-Assignment1/blob/main/Q2Media/ExecuteInt.png" style="width: 50%">
</div>

### Total Execution Time PYTHON vs. C++ for FLOATING
<div align = "center">
<img src = "https://github.com/guntas-13/ES215-COA-Assignment1/blob/main/Q2Media/ExecuteFloat.png" style="width: 50%">
</div>

# C++ BEATS PYTHON IN THIS PERFORMANCE ASPECT

## Observations
- CPU Time = User CPU Time + System CPU Time
- The System CPU time is nearly constant since it is the amount of time the CPU was busy executing code in kernel space. This does not include the meat portion of the program.
- CPU time for C++ code is much less than that of the Python code
- Definitely, with increasing N values, the CPU time increases since the algorithm runs in $O(N^3)$ time
- With increasing N, the meat portion time's proportion wrt the total execution time (CPU Time) increases and limits to 1 since this part (matrix multiplication) starts holding the major computation of the entire program with increasing N as user CPU time increases with N owing to the time complexity mentioned above.
- For C++, the integer operations are faster than double/floating point operations, this is because integers operations have system level implementations that use lower number of clock cycles to execute owing to their easier conversions and limited size to binary.
