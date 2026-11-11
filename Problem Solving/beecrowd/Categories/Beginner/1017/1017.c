#include <stdio.h>

void solve()
{
    int time, speed;
    scanf("%d %d",&time, &speed);

    double dist = time * speed;

    double fuel = dist / 12.0;
    printf("%.3f\n", fuel);
}

int main()
{
    int test_cases = 1;

    while (test_cases--)
    {
        solve();
    }

      return 0;
}
