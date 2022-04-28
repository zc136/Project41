//119-120  126-142
//小乐乐算多少人被请家长
//#include<stdio.h>
//int fun(int x, int y, int z)
//{
//	if ((x + y + z) / 3 < 60)
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	int a, b, c, n = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d %d %d", &a, &b, &c);
//		if (fun(a,b,c)==1)
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
////	return 0;
////}
////小乐乐算最高分
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i, a = 0;
//	int max = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a);
//		if (a > max)
//		{
//			max = a;
//		}
//	}
////	printf("%d", max);
////	return 0;
////}
////小乐乐计算求和
//#include<stdio.h>
//int cal(int i)
//{
//	return i == 1 ? 1 :i*cal(i - 1);//递归
//	//但是int型只能达到1到12
//	
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int sum = 0;
//	for (i = 1; i <=n; i++)
//	{
//		sum+= cal(i);
//	}
//	printf("%d", sum);
//	return 0;
////}
////小乐乐计算函数
////定义一个函数
//
//#include <stdio.h>
//int Max3(int a, int b, int c)
//{
//    int max = a > b ? a : b;
//    return max > c ? max : c;
//}
//
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    scanf("%d %d %d", &a, &b, &c);
//    float m = (float)Max3(a + b, b, c) / (Max3(a, b + c, c) + Max3(a, b, b + c));
//
//    printf("%.2f\n", m);
//
//    return 0;
//}
//小乐乐查找数字o
////  解决方法：桶排解决问题
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int arr[100] = { 0 };//设置桶
//	int tmp = 0;//标记桶号
//	int i = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &tmp);
//		arr[tmp]++;
//
//	}
//	int j = 0;
//	scanf("%d", &j);
//	printf("%d", arr[j]);//打印
//
//	return 0;
////}
////x学习程序设计基础
//#include<stdio.h>
//int main()
//{
//	printf("printf(\"hello world!\\n\");\n");
//	printf("cout<<\"hello world!\"<<end1;");
//	return 0;
//}
////kiki期末成绩
//#include<stdio.h>
//int main()
//{
//	int a, b, c, d = 0;
//	float sum;
//	scanf("%d %d %d %d", &a, &b, &c, &d);
//	sum = a * 0.2 + b * 0.1 + c * 0.2 + d * 0.5;
//	printf("%.1f", sum);
//	return 0;
//}
//kiki说祝福语
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		printf("happy new year! good luck!\n");
//	}
//	return 0;
//}
////最高分
//#include<stdio.h>
//MAX3(int x, int y, int z)
//{
//	int mac = x > y ? x : y;
//	return mac > z ? mac : z;//构造一个函数
//}
//int main()
//{
//	int a, b, c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	int max = MAX3(a, b, c);
//	printf("%d", max);
//	return 0;
////}
////求质数的个数
//#include<stdio.h>
//int main()
//{
//	int i,j = 0;
//	int count = 0;
//	//int n = 0;
//	for (i = 100; i <=999; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//
//			{
//				count++;
//				break;
//			}
//		}
//	}
//	printf("%d", 900-count);
//	return 0;
//}
//去重 并排序
//去重，然后冒泡排序
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    int arr[100000] = { 0 };
//    scanf("%d", &n);
//    int i = 0;
//    int tmp = 0;
//    for (i = 1; i <= n; i++)
//    {
//        scanf("%d", &tmp);
//        arr[tmp] = tmp;//去重
//    }
//    for (i = 0; i < n; i++)
//    {
//        if (arr[i] != 0)
//        {
//            printf("%d ", arr[i]);//按照顺序输出排序后的数
//        }
//    }
//
//    return 0;
//}
// //判断上三角矩阵
// 行数>>列数
//#include<stdio.h>
//int main()
//{
//	int i, j = 0;
//	int n = 0;
//	scanf("%d", &n);
//	int arr[10][10] = { 0 };
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if (i>j&&arr[i][j] != 0)
//			{
//				printf("no\n");
//				return 0;
//
//			}
//			
//		}
//	}
//	
//	printf("yes\n");
//	
//	return 0;
//}
//kiki定义电子日历
//#include<stdio.h>
//typedef struct 
//{
//	int year;
//	int month;
//	int day;
//}DATE;
//int main()
//{
//	DATE D;
//	scanf("%d %d %d", &D.year, &D.month, &D.day);
//	printf("%d/%d/%d", D.day, D.month, D.year);
//
//	return 0;
//}
//kiki结构体和指针
//KIKI设计类继承
//#include<stdio.h>
//#define PI 3.14
//int main()
//{
//	int l, h, r, t = 0;
//	int s1, s3 = 0;
//	double s2 = 0.0;
//	scanf("%d %d", &l, &h);
//	scanf("%d", &r);
//	scanf("%d", &t);
//	s1 = l * h;
//	s2 = PI * r * r;
//	s3 = t * t;
//	printf("%d\n%1.lf\n%d\n", s1, s2, s3);
//	return 0;
//}
//119-120 142
//***************************** ***************************************圣诞树****************************************************************
