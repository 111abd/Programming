#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		float x;
		scanf("%f", &x);

		int cnt = 0;
		float left;

		for (float i = x; i > 1;)
		{
			left = i / 2;
			cnt++;
			i = left;
		}

		printf("%d dias\n", cnt);
	}

	return 0;
}
