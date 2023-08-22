# Question 1 and 2 (Backend)
 Developing Apache AGE requires a lot of logical thinking that backend development often requires. 

**Table of Contents**
- [QUES 1 Expression Evaluation with Dynamic Programming](#ques-1-expression-evaluation-with-dynamic-programming)
- [Backend Coding Test - Different Approaches](#backend-coding-test-different-approaches)


# QUES 1 Expression Evaluation with Dynamic Programming

**Table of Contents**
- [Development Environment](#development-environment)
- [How to Compile and Run](#how-to-compile-and-run)
- [Code Logic  Step by Step](#code-logic-step-by-step)
- [Sample Output](#sample-output)

  ## Development Environment

This C program was developed in a standard C development environment. To compile and run the code, you will need a C compiler, such as GCC (GNU Compiler Collection), installed on your system.

## How to Compile and Run

1. Open your terminal or command prompt.

2. Navigate to the directory containing the source code file (`ques1.c`).

3. Compile the code using GCC:

   ```bash
   gcc ques1.c 
You can also try this code online by clicking the "Run" button below:

[Run the code online](https://onlinegdb.com/IiOMNlid2)

Simply click the link, and you'll be directed to an online compiler where you can execute and test the code without needing to set up a development environment.


## Code Logic Step by Step

### Node Structure and Enum

The code defines a structure `Node` and an enum `TypeTag` to represent nodes in the binary expression tree. The `TypeTag` enum specifies the type of operation or literal value that a node represents.

### Node Creation Functions

- `makeFunc`: This function creates a new node with the specified `TypeTag` and initializes its left and right children to `NULL`.

- `makeValue`: This function creates a new leaf node with a literal integer value.

### Fibonacci Function

- `fibonacci`: This function calculates the nth Fibonacci number using dynamic programming. It uses an array to store intermediate Fibonacci values and calculates the Fibonacci number iteratively.

### Expression Evaluation Function

- `calc`: This function recursively evaluates the value of a node in the expression tree. It handles different operation types (ADD, SUB, MUL, DIV, ABS, FIB, LIT) and performs the corresponding calculations.

### Main Function

In the `main` function:

- An array `fib` is initialized to store Fibonacci values.

- Expression tree nodes are created to represent mathematical expressions, and values are assigned to leaf nodes.

- The results of the expressions are calculated and printed using the `calc` function.
## Sample Output

The program will display the results of the expressions in the following format:

```c
add : 16
mul : 20
sub : -4
fibo : 2   
```

# Backend Coding Test Different Approaches

This document explains and compares three different approaches to solving the recurrence relation F(n) = F(n-3) + F(n-2), where F(0) = 0, F(1) = 1, and F(2) = 2.

## Table of Contents
- [Recursive Function](#recursive-function)
- [Dynamic Programming (Memoization)](#dynamic-programming-memoization)
- [Iterative Approach](#iterative-approach)
- [Time Complexity Analysis](#time-complexity-analysis)
- [Conclusion](#conclusion)

## Recursive Function
```c
#include <stdio.h>

int recursiveF(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (n == 2) return 2;
    return recursiveF(n - 3) + recursiveF(n - 2);
}

int main() {
    int n = 17; // Change n to the desired value
    printf("F(%d) = %d\n", n, recursiveF(n));
    return 0;
}

```
The program will display the results of the expressions in the following format:

```c
F(17) = 93
```
[Run the code online](https://onlinegdb.com/YR6fuoBrr)
### Advantages:
- Simple to implement, directly reflects the recurrence relation.
- Easy to understand and straightforward.

### Disadvantages:
- Inefficient for larger values of n due to repetitive computations.
- Time complexity: O(2^n) - exponential time complexity.

## Dynamic Programming (Memoization)
```c
#include <stdio.h>

int dpF(int n, int* memo) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (n == 2) return 2;
    
    if (memo[n] != -1) return memo[n];
    memo[n] = dpF(n - 3, memo) + dpF(n - 2, memo);
    return memo[n];
}

int main() {
    int n = 17; // Change n to the desired value
    int memo[100]; // Adjust the size based on the maximum n value
    for (int i = 0; i < 100; i++) memo[i] = -1;
    
    printf("F(%d) = %d\n", n, dpF(n, memo));
    return 0;
}

```
The program will display the results of the expressions in the following format:

```c
F(17) = 93
```
[Run the code online](https://onlinegdb.com/z95PS7J8m)
### Advantages:
- Avoids repetitive computations, making it efficient for larger n.
- Better time complexity than the recursive approach.

### Disadvantages:
- Requires additional memory for memoization (cache) array.
- Space complexity: O(n) - linear space complexity.

## Iterative Approach
```c
#include <stdio.h>

int iterativeF(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (n == 2) return 2;
    
    int prev3 = 0, prev2 = 1, prev1 = 2;
    int current = 0;
    
    for (int i = 3; i <= n; i++) {
        current = prev3 + prev2;
        prev3 = prev2;
        prev2 = prev1;
        prev1 = current;
    }
    
    return current;
}

int main() {
    int n = 17; // Change n to the desired value
    printf("F(%d) = %d\n", n, iterativeF(n));
    return 0;
}


```
The program will display the results of the expressions in the following format:

```c
F(17) = 93
```
[Run the code online](https://onlinegdb.com/cyGxmWphr)
### Advantages:
- Efficient, no extra memory usage compared to memoization.
- Faster and more scalable for large values of n.

### Disadvantages:
- More complex to implement than the recursive approach.
- Less intuitive for some programmers.

## Time Complexity Analysis

- The recursive approach has exponential time complexity, making it impractical for large n.
- The dynamic programming approach (with memoization) has a time complexity of O(n), which is a significant improvement.
- The iterative approach also has a time complexity of O(n), making it the most efficient choice for large n.

## Conclusion
Choose the approach that best suits your requirements based on the trade-offs between simplicity and efficiency. In most cases, the dynamic programming or iterative approach is preferred due to their better time complexity.


Choose the approach that best suits your requirements based on the trade-offs between simplicity and efficiency. In most cases, the dynamic programming or iterative approach is preferred due to their better time complexity.
