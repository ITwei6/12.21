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
	//�����ҳ��Ƚ�С�ķ�ǰ���ķź���//ע���������iҪ���¸�ֵΪ0��
	int j = 0;//��j������arr2
	i = 0;//��i�ڱ���arr1
	int k = 0;//k��������arr3
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
//	}//��������/
//	//ȥ��--�������飬���Ƿ�����ͬ��
//	for (i = 0;i < n;i++)
//	{
//		int j;
//		for (j = i + 1;j < n;j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				//Ҫ��ǰ���ǡ���ô�����أ����ǽ�j �Ժ��������ǰ����
//				int k = j;
//				arr[k] = arr[k + 1];//�Ѻ���ĸ��ǵ�ǰ�棻
//				n--;//���Ǻ�ͼ�1�����ˣ�
//					j--;  //ԭ�ȵ�j+1���j������������û����i���бȽ�������Ҫj--��Ȼ��j++���j
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
			scanf("%lf", &score[i]);//������ųɼ�
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