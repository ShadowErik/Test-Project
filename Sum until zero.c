#include <stdio.h>

int main(void) {
    int x;
    printf("Enter the values, then 0\n");
    long long sum = 0; // What's the difference between 'long long' and 'long long int'???

while (scanf("%d", &x) == 1 && x != 0) {
        sum += x;
    }
    printf("%lld\n", sum);
return 0;
}
