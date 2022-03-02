#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

////算术操作符
//int main()
//{
//	int a = 5 / 2;//商2余1
//	int b = 5 % 2;
//	double c = 5 / 2.0;
//	printf("a = %d\n", a);
//	printf("b = %d\n", b);
//	printf("c = %lf\n", c);
//	return 0;
//}

//移位操作符
//int main()
//{
//	int a = 16;
//	//>> -- 右移操作符，移动的是二进制位
//	//0000000000000000000000000000010000
//	//0000000000000000000000000000001000
//	//算术右移---右边最后一位丢弃，左边补原符号位
//	//逻辑移位---右边最后一位丢弃，左边补0；
//	int b = a >> 2;
//	printf("b = %d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = -1;
//	//整数的二进制表示有：原码、反码、补码
//	//存储到内存的是补码
//	//10000000000000000000000000000001 - 原码
//	//11111111111111111111111111111110 - 反码
//	//11111111111111111111111111111111 - 补码
//	int b = a >> 1;
//	printf("%d\n", b);
//	return 0;
//}

////位操作符
//int main()
//{
//	// & -按2进制位与
//	int a = 3;
//	int b = 5;
//	int c = a & b;
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101
//	//00000000000000000000000000000001
//	printf("%d\n", c);
//	// | -按2进制位或
//	int d = a | b;
//	//00000000000000000000000000000111
//	printf("%d\n", d);
//	//   -按2进制位异或
//	int e = a ^ b;
//	//00000000000000000000000000000110
//	printf("%d\n", e);
//	return 0;
//}

////不创建临时变量，交换两个int的整型值
////加减法 - 可能会溢出
//int main()
//{
//	int a = 3;
//	int b = 5;
//	/*a = a + b;
//	b = a - b;
//	a = a - b;*///可能会溢出
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;//异或的方法
//	printf("%d,%d", a, b);
//	return 0;
//}

////求一个整数存储在内存中1的个数
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);//-1
//	/*while (num)
//	{
//		if (num % 2 == 1)
//			count++;
//		num = num / 2;
//	}*/
//	//32bit
//	//num&1 ==1
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//		{
//			count++;
//		}
//			
//	}
//	printf("%d\n", count);
//	return 0;
//}

////复合赋值符
//int mian()
//{
//	int a = 10;
//	a = a + 2;
//	a += 2;//复合赋值符
//	a = a >> 1;
//	a >>= 1;
// }

////单目操作符
//int main()
//{
//	int a = 0;
//	if (!a)//为假
//	{
//		printf("呵呵\n");
//	}
//	if (a)//为真
//	{
//		printf("哈哈\n")；
//	}
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;//取地址操作符
//	*p = 20;//解引用操作符
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	char c = 'r';
//	char* p = &c;
//	int arr[10] = { 0 };
//	//sizeof 计算的变量所占空间的大小，单位是字节
//	printf("%d\n", sizeof(a));//4
//	printf("%d\n", sizeof(int));
//
//	printf("%d\n", sizeof(c));//1
//	printf("%d\n", sizeof(char));
//
//	printf("%d\n", sizeof(p));//8
//	printf("%d\n", sizeof(char*));
//
//	printf("%d\n", sizeof(arr));//40
//	printf("%d\n", sizeof(int [10]));
//
//	return 0;
//}