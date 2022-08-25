#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//int main()
//{
//	int arr[] = { 1,2,(3,4),5 };
//	printf("%d\n", sizeof(arr));
//	return 0;
//}

//int main()
//{
//	char arr[] = "hello bit"; // h e l l o   b i t \0
//	//							 1 2 3 4 5 6 7 8 9 10 
//	printf("%d %d", sizeof(arr), strlen(arr));
//	  //		10元素*char 1=10	遇\0停止
//	return 0;
//}

//void Init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//void Reserve(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right )
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//Init(arr, sz);//  初始化为0
//	Print(arr, sz);//  打印函数
//	printf("\n");
//	Reserve(arr, sz);
//	Print(arr, sz);//  打印函数
//
//	return 0;
//}

//   设计函数，交换两个数组里的内容，数组一样大

//int main()
//{
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,0 };
//	//int tmp[] = { 0 };// 元素个数为0个，上面都有5个，直接err
//	//int tmp[5] = { 0 };//  形式对，依然错
//	//int tmp =  arr1;//  arr1 数组名 是首元素地址
//	//int arr1 = arr2;
//	//int arr2 = tmp;
//
//	int tmp = 0;
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz; i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	short* p = (short*)arr;
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;
//		// i=0，解引用把arr[0]=1所占空间的前2个字节空间改为0
//		// i=1，解引用把arr[0]=1所占空间的后2个字节空间改为0
//		//   i=2,i=3解引用把arr[1]=2改为0，后面循环结束，3，4，5不变
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	//  倒着存在内存块中，且4个字节 44|33|22|11
//	char* pc = (char*)&a;
//	//   char* 类型的 pc
//	*pc = 0;
//	//   此时*pc只能操作 a 的一个字节
//	//					00|33|22|11
//	printf("%x\n", a);
//	//		正序打印
//	return 0;
//}

//int i;	//全局变量不初始化，默认为0
//int main()
//{
//	i--;
//	if (i > sizeof(i))
//	{	//  sizeof（）计算变量/类型所占内存的大小，返回值 >= 0 ，是个无符号数
//		printf(">");
//		//  而有符号数与无符号数比较，先转化为无符号数，-1 转化后非常大
//	}
//	// 10000000000000000000000000000000000000000000000001 原码
//	// 11111111111111111111111111111111111111111111111110 反码-符号位不变，其他取反
//	// 11111111111111111111111111111111111111111111111111 补码-反码+1
//	// 无符号数，符号位有效，相当于011111111111111...超大
//	else
//	{
//		printf("<");
//	}
//	return 0;
//}

int main()
{
	int a, b, c;
	a = 5;
	c = ++a;
	//  先++,a=6,c=6
	b = ++c, c++, ++a, a++;
	// c=7  c=8   a=7  先赋值,b=a=7,再++,a=8
	b += a++ + c;
	// 先赋值,a=8 + c=8 + b=7 = 23,再++,a=9
	printf("a = %d,b = %d, c = %d\n", a, b, c);
	return 0;
}