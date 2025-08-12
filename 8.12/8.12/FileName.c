#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n;
	int m;
	scanf("%d %d", &n, &m);
	int arr[1000] = {0};
	int arr1[1000] = {0};
	int i;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < m; i++)
	{
		scanf("%d", &arr1[i]);
	}
	int x = 0;
	int y = 0;

	while (x < n || y < m)
	{
		if ((arr[x] < arr1[y]) )
		{
			if (x <= n - 1)
			{
				printf("%d ", arr[x]);
				x++;
			}
			else
			{
				printf("%d ", arr1[y]);
				y++;
			}
			
		}
		else if ((arr[x] > arr1[y]) )
		{
			if (y <= m - 1)
			{
				printf("%d ", arr1[y]);
				y++;
			}
			else
			{
				printf("%d ", arr[x]);
				x++;

			}
			
		}
		else
		{
			if (x <= n - 1)
			{
				printf("%d ", arr[x]);
				x++;
			}
			else
			{
				printf("%d ", arr1[y]);
				y++;
			}
		}
			

	}
	return 0;
}

