#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    double mult = 1.0;
    int oper_counter = 0;
    int sin_counter = 0;
    int cos_counter = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    oper_counter += 3;

    for (int i = 1; i <= n; i++)
    {
        double sum = 0.0;
        for (int j = 1; j <= i; j++)
        {
            sum += sin(j);
            oper_counter +=4;
            sin_counter += 1;
        }
        mult *= (cos(i) + 1) / sum;
        oper_counter +=8;
        cos_counter += 1;
    }
    int oper_result = oper_counter + sin_counter + cos_counter;
    printf("the number of operations: %u\n", oper_result);
    printf("%.7lf\n", mult);
}
