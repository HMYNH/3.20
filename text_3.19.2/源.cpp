#include<stdio.h>
////int H(int n)
////{
////	int a = 0;
////	int b = 1;
////	for (a = 1; a <= n; a++)
////	{
////		b *= a;
////	}
////	return b;
////}
//int H(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//	{
//	return	 n * H(n - 1);
//	}
//
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	scanf("%d",& i);
//	j = H(i);
//	printf("%d", j);
//	return 0;
//}
   
//int H(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//	{
//		return H(n - 1) + H(n - 2);
//	}
//}
//int H(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	scanf("%d", &i);
//	j = H(i);
//	printf("%d\n", j);
//	return 0;
//}
//void H(int n)
//{
//	if (n < 10000)
//	{
//	 	H(n+1)
//	}
//}
//int main()
//{
//	H();
//	return 0;
//}