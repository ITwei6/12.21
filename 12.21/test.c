#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n, m;
	scanf("%d%d", &n, &m);
	int arr1[1000];
	int arr2[1000];
	int arr3[2000];
	int i;
	for (i = 0;i < n;i++)
	{
		scanf("%d", &arr1[i]);
	}
	for (i = 0;i < m;i++)
	{
		scanf("%d", &arr2[i]);
	}
	//遍历找出比较小的放前面大的放后面//注意这里面的i要重新赋值为0；
	int j = 0;//用j来遍历arr2
	i = 0;//用i在遍历arr1
	int k = 0;//k用来遍历arr3
	while (i < n && j < m)
	{
		if (arr1[i] < arr2[j])
		{
			arr3[k++] = arr1[i++];
		}
		else
		{
			arr3[k++] = arr2[j++];
		}
	}
	if (i == n)
	{
		for (;j < m;j++)
		{
			arr3[k++] = arr2[j];
		}
	
	}
	else
	{
		for (;i < n;i++)
		{
			arr3[k++] = arr1[i];
		}
	}
	for (i = 0;i < n + m;i++)
	{
		printf("%d ", arr3[i]);
	}
	return 0;
}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int arr[1000];
//	int i;
//	for (i = 0;i < n;i++)
//	{
//		scanf("%d", &arr[i]);
//	}//输入数据/
//	//去重--遍历数组，看是否有相同的
//	for (i = 0;i < n;i++)
//	{
//		int j;
//		for (j = i + 1;j < n;j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				//要向前覆盖。怎么覆盖呢？就是将j 以后的数据向前覆盖
//				int k = j;
//				arr[k] = arr[k + 1];//把后面的覆盖到前面；
//				n--;//覆盖后就减1个数了；
//					j--;  //原先的j+1变成j本身而这个数还没有与i进行比较所以需要j--，然后j++变成j
//
//			}
//		}
//	}
//	for (i = 0;i < n;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int arr[1000];
//	int i;
//	for (i = 0;i < n;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int del;
//	int j = 0;
//	scanf("%d", &del);
//	for (i = 0;i < n;i++)
//	{
//		if (arr[i] != del)
//		{
//			arr[j++] = arr[i];
//		}
//	}
//	for (i = 0;i < j;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	double score1,score2,score3,score4,score5;
//	int i;
//	for (i = 0;i < 5;i++)
//	{
//		scanf("%lf%lf%lf%lf%lf", &score1, &score2, &score3, &score4, &score5);
//	}
//	for (i = 0;i < 5;i++)
//	{
//		printf("%.1lf %.1lf %.1lf %.1lf %.1lf %.1lf", score1, score2, score3, score4, score5, (score1 + score2 + score3 + score4 + score5) / 5.0);
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int n, m;
//	scanf("%d%d", &n, &m);
//	int i, j;
//	int arr[5][5];
//	for (i = 0;i < n;i++)
//	{
//		for (j = 0;j < m;j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	int x, y;
//	scanf("%d%d", &x, &y);
//	printf("%d", arr[x - 1][y - 1]);
//	return 0;
//}
//int main()
//{
//	int n, m;
//	scanf("%d%d", &n, &m);
//	int arr1[100];
//	int arr[100][100];
//	int i;
//	int k = 0;
//	for (i = 0;i < n * m;i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	for (i = 0;i < n;i++)
//	{
//		for (int j = 0;j < m;j++)
//		{
//			
//			arr[i][j] = arr1[k];
//			k++;
//		}
//	}
//	for (i = 0;i < n;i++)
//	{
//		for (int j = 0;j < m;j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int n, m;
//	scanf("%d%d", &n, &m);
//	int i, j;
//	int arr[100][100];
//	for (i = 0;i < n;i++)
//	{
//		for (j = 0;j < m;j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	int max = 0;
//	int x, y;
//	for (i = 0;i < n;i++)
//	{
//		for (j = 0;j < m;j++)
//		{
//			if (arr[i][j] > max)
//			{
//				max = arr[i][j];
//				 x = i + 1;
//				 y = j + 1;
//			}
//		}
//	}
//	printf("%d %d", x, y);
//	return 0;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int i, j;
//	int arr[100][100];
//	int count = 0;
//	for (i = 0;i < n;i++)
//	{
//		for (j = 0;j < n;j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 0;i < n;i++)
//	{
//		for (j = 0;j < n;j++)
//		{
//			if (j < i)
//			{
//				if (arr[i][j] != 0)
//				{
//					count++;
//				}
//			}
//		}
//	}
//	if (count == 0)
//	{
//		printf("YES\n");
//	}
//	else
//	{
//		printf("NO\n");
//	}
//	return 0;
//}
//int main()
//{
//	int n, m;
//	scanf("%d%d", &n, &m);
//	int arr1[100][100];
//	int arr2[100][100];
//	int i, j;
//	for (i = 0;i < n;i++)
//	{
//		for (j = 0;j < m;j++)
//		{
//			scanf("%d", &arr1[i][j]);
//		}
//	}
//	for (j = 0;j < m;j++)
//	{
//		for (i = 0;i < n;i++)
//		{
//			printf("%d ", arr1[i][j]);
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}
int main()
{
	double score[5];
	int i, j;
	double sum = 0;
	for (i = 0;i < 5;i++)
	{
		
		for (j = 0;j < 5;j++)
		{
			scanf("%lf", &score[i]);//输入五颗成绩
			sum += score[i];
		}

		for (j = 0;j < 5;j++)
		{
			printf("%lf ", score[i]);
		}
		for (i = 0;i < 5;i++)
		{
			printf("%.1lf", sum);
		}
	}
	return 0;
}