# Expression Evaluation with Dynamic Programming

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
