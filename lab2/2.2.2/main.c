#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int oper_counter = 0;
    int sin_counter = 0;
    int cos_counter = 0;

    printf("Enter n: ");
    scanf("%d", &n);
    double sum = 0.0;
    double mult = 1.0;

    oper_counter +=4;

    for (int i = 1; i <= n; i++) {
        sum += sin(i);
        double result = (cos(i) + 1) / sum;
        mult *= result;
        oper_counter +=8;
        sin_counter += 1;
        cos_counter += 1;
    }
    int oper_result = oper_counter + sin_counter + cos_counter;
    printf("the number of operations: %u\n", oper_result);
    printf("%.7lf\n", mult);
}

