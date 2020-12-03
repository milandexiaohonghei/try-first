#include<stdio.h>
#include<windows.h>
#include <time.h>
#include <string.h>
#include <math.h>
#pragma warning(disable:4996)


//int main()
//{
//
//
//	int aa[2][5] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
//	int *ptr1 = (int *)(&aa + 1);
//	int *ptr2 = (int *)(aa + 1);
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	int a = 10;
//	int *b = &a;
//	int c = *b;
//	printf("%d", c);
//	system("pause");
//	return 0;
//
//}




//int compint(const void *a,const *b)
//{
//	int *_a = (int*)a;
//	int *_b = (int*)b;
//	if (*_a > *_b)
//	{
//		return 1;
//	}
//	else if (*_a < *_b)
//	{
//		return -1;
//	}
//	else
//	{
//		return 0;
//	}
//
//}
//void print(int arr[], int num)
//{
//	for (int i = 0; i < num; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[] = { 123, 245, 45, 59, 67, 58, 214, 657, 541, 221, 15, 57 };
//	int num = sizeof(arr) / sizeof(arr[0]);
//	int size = sizeof(int);
//
//	qsort(arr,num,size,compint);
//	
//	print(arr, num);
//	system("pause");
//	return 0;
//
//
//}


//void swap(char *a,char *b, int size)
//{
//	while (size)
//	{
//		char temp = *b;
//		*b = *a;
//		*a = temp;
//		size--;
//		a++;
//		b++;
//	}
//
//}
//
//int comp(const void *a,const *b)
//{
//	int *_a = (int*)a;
//	int *_b = (int*)b;
//	if (*_a > *_b)
//	{
//		return 1;
//	}
//	else if (*_a < *_b)
//	{
//		return -1;
//	}
//	else
//	{
//		return 0;
//	}
//
//}
//
//void my_qsort(void *arr, int num, int size, int(*comp)())
//{
//	/*assert(arr != NULL);
//	assert(comp != NULL);*/
//	char *e = (char*)arr;
//	for (int i = 0; i < num - 1; i++)
//	{
//		for (int j = 0; j < num - 1-i; j++)
//		{
//			if (comp(e + size*j, e + size*(j + 1))>0)
//			{
//				swap(e + size*j, e + size*(j + 1),size);
//			}
//		}
//	}
//
//
//}


//int main()
//{
//	int arr[] = { 123, 245, 45, 59, 67, 58, 214, 657, 541, 221, 15, 57 };
//	int num = sizeof(arr) / sizeof(arr[0]);
//	int size = sizeof(int);
//
//	my_qsort(arr,num,size,comp);
//	
//	print(arr, num);
//	system("pause");
//	return 0;
//
//
//}
//int comp(const void *a, const void *b)
//{
//	char *a = *(char**)a;
//	char *b = *(char**)b;
//	scrmp(a, b);
//
//}

//int main()
//{
//	char *arr[] = { "abcd22", "abcd23", "abcd24", "abcd25" };
//	int num = sizeof(arr) / sizeof(*arr);
//	int size = sizeof(char*);
//	qsort(arr, num, size, comp);
//	system("pause");
//	return 0;
//
//}



//int roundfind(char *arr0,char *arr1)
//{
//	char tmp[256] = { 0 };
//	strcpy(tmp, arr0);
//	strcat(tmp, arr0);
//	return strstr(tmp, arr1) != NULL;
//
//}

//int main()
//{
//	char arr0[] = "abcdefgh";
//	char arr1[] = "cdab";
//	int num = roundfind(arr0, arr1);
//	printf("%d", num);
//
//	system("pause");
//	return 0;
//
//}


