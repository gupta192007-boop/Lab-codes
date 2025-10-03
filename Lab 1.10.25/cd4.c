 //3(b). Pattern Printing 2 (Pascal’s Triangle)
 #include <stdio.h>
 int fact(int n) {
    int f = 1, i;
    for (i = 1; i <= n; i++)
        f *= i;
    return f;
 }
 int main() {
    int n = 5, i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i - 1; j++)
            printf(" ");
        for (j = 0; j <= i; j++) {
            printf("%d ", fact(i) / (fact(j) * fact(i - j)));
        }
        printf("\n");
    }
    return 0;
 }