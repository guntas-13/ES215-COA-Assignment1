# ES215-COA-Assignment1

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

To know the split between User CPU and System CPU Time: <br>
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


