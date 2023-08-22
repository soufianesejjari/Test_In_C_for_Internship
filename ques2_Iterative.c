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
    int n = 5; // Change n to the desired value
    printf("F(%d) = %d\n", n, iterativeF(n));
    return 0;
}
