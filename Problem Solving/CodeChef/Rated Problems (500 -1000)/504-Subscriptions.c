#include <stdio.h>
#include <math.h>

int main()
{
    int t; scanf("%d", & t);
    while (t--)
    {
        int n, x;
        scanf("%d %d", &n, &x);

        int cst = 0;
        if (n <= 6)
        {
            cst = x;
        }
        else
        {
            float p = n / 6.0;
            cst = ceil(p) * x;
            //printf("%f %f-c %f-f\n", p, ceil(p), floor(p));
        }
        printf("%d\n", cst);
    }
    
    return 0;
}
//https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SUBSCRIBE_?tab=statement
