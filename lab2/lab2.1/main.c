#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    double mult = 1.0;
    printf("Enter n: ");
    scanf("%d", &n);

        for (int i = 1; i <= n; i++)
        {
            double sum = 0.0;
            for (int j = 1; j <= i; j++)
            {
                sum += sin(j);
            }
        mult *= (cos(i) + 1) / sum;
        }
    printf("%.7lf\n", mult);
}

