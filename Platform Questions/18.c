#include <stdio.h>

int findDigits(int n) {
    int temp = n;
    int count = 0;
    
    while (temp > 0) {
        int digit = temp % 10;
        
        // Check if digit is not zero to prevent division by zero
        if (digit != 0 && n % digit == 0) {
            count++;
        }
        
        temp /= 10;
    }
    
    return count;
}

int main() {
    int t;
    if (scanf("%d", &t) == 1) {
        while (t--) {
            int n;
            scanf("%d", &n);
            printf("%d\n", findDigits(n));
        }
    }
    return 0;
}
