#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	/*const char* cp = "asdf";
//	printf("%s", cp);*/
//
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";
//
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//
//	if (p1==p2)
//	{
//		printf("p1==p2\n");
//	}
//	else
//	{
//		printf("p1!=p2\n");
//	}
//	if (arr1==arr2)
//	{
//		printf("arr1==arr2\n");
//	}
//	else
//	{
//		printf("arr1!=arr2\n");
//
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6 ,7};
//
//	int* arrp[] = { arr1,arr2,arr3 };
//
//	int i = 0;
//	for ( i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for ( j = 0; j < 5; j++)
//		{
//			//*(p+i)-->p[i]
//
//			//printf("%d", *(arrp[i]+j));
//			printf("%d", arrp[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

int main()
{

	int arr[10] = { 0 };
	int* p = arr;
	int (*p)[10] = &arr;
	printf("%p\n", arr);
	printf("%p\n", arr+1);

	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[0]+1);


	printf("%p\n", &arr);
	printf("%p\n", &arr+1);









	return 0;
}





