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
    int n = 5; // Change n to the desired value
    int memo[100]; // Adjust the size based on the maximum n value
    for (int i = 0; i < 100; i++) memo[i] = -1;
    
    printf("F(%d) = %d\n", n, dpF(n, memo));
    return 0;
}
