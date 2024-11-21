#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    double sum = 0.0;
    double mult = 1.0;

    for (int i = 1; i <= n; i++) {
        sum += sin(i);
        double result = (cos(i) + 1) / sum;
        mult *= result;
    }
    printf("%.7lf\n", mult);
}