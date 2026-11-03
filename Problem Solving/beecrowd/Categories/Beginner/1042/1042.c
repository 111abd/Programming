#include <stdio.h>

int main()
{
	int a,b,c;

	scanf("%d %d %d",&a,&b,&c);

	int max,min,mid;

	if (a!=b && b!=c && c!=a)
	{
		if (a>b && a>c) max= a;
		else if (b>a && b>c) max = b;
		else max = c;

		if (a<b && a<c) min= a;
		else if (b<a && b<c) min = b;
		else min = c;

		if (max==a&&min==b || max==b&&min==a) mid=c;
		else if (max==b&&min==c || max==c&&min==b) mid=a;
		else if (max==c&&min==a || max==a&&min==c) mid=b;


		printf("%d\n%d\n%d\n\n",min,mid,max);
	}


	if (a==b && b==c && c==a)
	{
		max = a;
		min = c;
		mid = b;

		printf("%d\n%d\n%d\n\n",min,mid,max);
	}

	else if (a==b)
	{
		if (a>c)
		{
			max = a;
			min = c;
			mid = b;
		}

		else if (a<c)
		{
			max = c;
			mid = a;
			min = a;
		}

		printf("%d\n%d\n%d\n\n",min,mid,max);
	}

	else if (a==c)
	{
		if (a>b)
		{
			max = a;
			min = b;
			mid = c;
		}

		else if (a<b)
		{
			max = b;
			mid = a;
			min = a;
		}

		printf("%d\n%d\n%d\n\n",min,mid,max);
	}

	else if (b==c)
	{
		if (a>c)
		{
			max = a;
			min = c;
			mid = b;
		}

		else if (a<c)
		{
			max = c;
			mid = b;
			min = a;
		}

		printf("%d\n%d\n%d\n\n",min,mid,max);
	}

	printf("%d\n%d\n%d\n",a,b,c);

	return 0;
}

