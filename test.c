#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//    int a = 8, b = 061, c = 0x31;
//    float d = 3.5;
//    char e = 'a';
//    printf("%d\n", a);
//    printf("%.1f\n", d);
//    printf("%c\n", e);
//    printf("%o\n", b);
//    printf("%d\n", b);
//    printf("%x\n", c);
//    printf("153计算机3233陈旺\n");
//    return 0;
//}
// 
// 
// 
//int main()
//{
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	printf("陈旺153");
//	return 0;
//}
//int main()
//{
//	char _c = 'c';
//    printf("%c\n", _c);
//	printf("%d\n", _c);
//	printf("%o\n", _c);
//	printf("%x\n", _c);
//	printf("153陈旺\n");
//	return 0;
//}
// 
// 
// 
//int main()
//{
//	int line = 0;
//	printf("加入比特\n");
//	while (line < 20000)
//	{
//		printf("写代码%d\n", line);
//		line = line + 1; //或者可以用"line++;"
//	}
//	if (line >= 20000)
//	{
//		printf("好offer\n");
//	}
//	else
//	{
//		printf("继续加油\n");
//	}
//	return 0;
//}


//int main()
//{
//	char a, b;
//	int c;
//	a = 'x';
//	b = '\171';
//	c = 122;
//	printf("%c %c %c\n%d %d %d\n", a, b, c, a, b, c);
//	printf("计算机3233 陈旺154\n");
//	return 0;
//}


//int main()
//{
//	printf("%c\n", 'n');
//	printf("%c\n", '\156');
//	printf("%c\n", '\x6e');
//	return 0;
//}


//int main()
//{
//	int a = 1;
//	int b = 2;
//	printf("\'%d\'\n\t%d %d\n", a, a, b);
//	a = 6 + 2;
//	printf("\\\141=6+2=\t\b%d\n", a);
//	return 0;
//}


//int main()
//{
//	int a = 'a';
//	int b = 'B';
//	int c, d;
//	c = a - ('a' - 'A');
//	d = b + 32;
//	printf("%c--->%c\n%c--->%c\n", a, c, b, d);
//	return 0;
//}

//
//int main()
//{
//	printf("%d\n", sizeof("china\b\n\101\t\\"));
//	printf("%d\n", strlen("china\b\n\101\t\\"));
//	printf("%d\n", sizeof("china"));
//	printf("%d\n", strlen("china"));
//	printf("%d\n", sizeof("ch\0ina"));
//	printf("%d\n", strlen("ch\0ina"));
//	return 0;
//}


//int main()
//{
//	float x = 5;
//	x += x -= x *= x;
//	printf("x=%f", x);
//	return 0;
//}



//c上机指导第二章练习：
//1.
//int main()
//{
//	char i1 = 'A', i2 = 'B';
//	printf("%d,%d\n", i1, i2);
//	printf("%c,%c\n", i1, i2);
//	return 0;
//}

//2.
//(1)
//int main()
//{
//	char c1 = 'a', c2 = 'b', c3 = 'c', c4 = '\101', c5 = '\x42';
//	printf("\"%c\",b=%c\tabc=%d\n", c1, c2, c3);
//	printf("\t\b%c %c\n", c4,c5);
//	return 0;
//}
//(2)
//int main()
//{
//	int i = 3, j = 5, m = 0, n = 0;
//	m += i++;
//	n -= --j;
//	printf("i=%d,j=%d,m=%d,n=%d\n",i,j,m,n);
//	return 0;
//}
//3.
//(1)
//int main()
//{
//	char c = 'A';
//	int a = 2, b;
//	float x = 3.5f, y = 3.2f, z;
//	z = (x + 1) / 3 + (int)x / a;
//	b = x + c % 3 * (int)(x + y) % 5 / 3;
//	printf("%d,%f\n", b, z);
//	return 0;
//}
//(2)
//int main()
//{
//	int a = 7,x;
//	printf("%d\n", a % 2 + (a + 1) % 2);
//	printf("%d\n", ((a = 4 * 5, a * 2), a + 6));
//	printf("%d\n", x = (a = 4, 6 * 2));
//	printf("%d\n", (x = a = 4, 6 * 2));
//	printf("%d\n", x = a %= (a /= 2));
//	printf("%d\n",a+ a % 3 * (int)(2.3 * a)%5/4);
//	return 0;
//}
//int main()
//{
//	float x = 0.5;
//	/*x = x * 10 + 0.5 / 10.0;
//	printf("%f\n", x);*///5.05
//	/*x = (x * 10 + 0.5) / 10.0;
//    printf("%f\n", x*///0.55
//	/*x = (x / 10 + 0.5) / 10.0;
//	printf("%f\n", x);*///0.055
//	/*x = (int)(x * 10 + 0.5) / 10.0;
//	printf("%f\n", x);*///0.5
//	return 0;
//}
//int main()
//{
//	int a = 13, b = 19;
//	printf("a=%d b=%d\n", a, b);
//	a = a + b, b = a - b, a = a - b;
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int a=3, b=478, c=-56;
//	long int u=51274, n=123456;
//	float x=67.5678, y=2.4, z=-189.134;
//	char c1='a', c2;
//	printf("\n");
//	printf("a=%2d b=%2d c=%2d\n", a, b, c);
//	printf("x=%8.6f,y=%8.6f,z=%9.6f\n", x, y, z);
//	printf("x+y=%5.2f,y+z=%5.2f,z+x=%5.2f\n", x + y, y + z, z + x);
//	printf("x=%-10f,y=%4f,z=%3f\n", x, y, z);
//	printf("x=%e,y=%10.2e\n", x, y);
//	printf("u=%6ld,n=%x\n", u, n);
//	printf("c1=%c c1=%d\n", c1, c1);
//	printf("%s,%5.3s\n", "COMPUTER", "COMPUTER");
//	return 0;
//}

//int main()
//{
//	int a, b;
//	scanf("%d,%d", &a, &b);
//	if (a > b)
//	{
//		printf("较大的数是%d", a);
//	}
//	else
//	{
//		printf("较大的数是%d", b);
//	}
//	return 0;
//}

//int add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a, b;
//	scanf("%d,%d", &a, &b);
//	int c = add(a, b);
//	printf("它们的和是%d\n", c);
//	return 0;
//}

//int max(int x, int y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//}
//int main()
//{
//	int a, b;
//	scanf("%d,%d", &a, &b);
//	int c = max(a, b);
//	printf("较大的数是%d\n", c);
//	return 0;
//}
//int main()
//{
//	int a = printf("Hello world!\n");//printf函数的返回值为格式控制字符串的长度，注意：包括转义字符，如\n
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//    printf("\073,\032,\99,\97,\110,\32,\100,\111,\032,\105,\116,\33");
//    return 0;
//}
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    scanf("%4d%2d%2d", &a, &b, &c);
//    printf("year=%d\n", a);
//    printf("mouth=%02d\n", b);
//    printf("date=%2d\n", c);
//    return 0;
//}
//int main()
//{
//	int x = 1, y = 2;
//	printf("%d\n", (x > y) && (--x > 0));
//	printf("x=%d\n", x);
//	return 0;
//}
//int main()
//{
//	int x = 0, y = 0;
//	printf("输入x\n");
//	scanf("%d", &x);
//	if (x > 15)
//		y = x - 5;
//	else if (x > 0 && x <= 15)
//		y = 5 + 2*x;
//	else
//		y = 0;
//	printf("对应的y=%d\n", y);
//	return 0;
//}
//int main()
//{
//	double a = 67.5678;
//	printf("%-10f\n", a);
//	return 0;
//} 
//int main()
//{
//	int a, b, c, d, e;
//	printf("Please input five numbers\n");
//	scanf("%d,%d,%d,%d,%d", &a, &b, &c, &d, &e);
//	if (a < b)
//	{
//		a = a + b;
//		b = a - b;
//		a = a - b;
//	}
//	if (a < c)
//	{
//		a = a + c;
//		c = a - c;
//		a = a - c;
//	}
//	if (b < c)
//	{
//		b = b + c;
//		c = b - c;
//		b = b - c;
//	}
//	if (a < d)
//	{
//		a = a + d;
//		d = a - d;
//		a = a - d;
//	}
//	if (b < d)
//	{
//		b = b + d;
//		d = b - d;
//		b = b - d;
//	}
//	if (c < d)
//	{
//		c = c + d;
//		d = c - d;
//		c = c - d;
//	}
//	if (a < e)
//	{
//		a = a + e;
//		e = a - e;
//		a = a - e;
//	}
//	if (b < e)
//	{
//		b = b + e;
//		e = b - e;
//		b = b - e;
//	}
//	if (c < e)
//	{
//		c = c + e;
//		e = c - e;
//		c = c - e;
//	}
//	if (d < e)
//	{
//		d = d + e;
//		e = d - e;
//		d = d - e;
//	}
//	//最终结果使得a>b>c>d>e
//	printf("这五个数从小到大排序为%d %d %d %d %d\n", e, d, c, b, a);
//	return 0;
//}

//int main()
//{
//	int b = 0;
//	float a = 0;
//	a = -4.4;
//	b = (int)a;
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a, b;
//	n:
//	scanf("%d", &a);
//	if (a >= 10000 || a <= 0)
//	{
//		printf("data error!\n");
//		goto n;
//	}
//	else if (a >= 1000)
//		b = (a / 1000 + 2) % 10 * 1000 + (a % 1000 / 100 + 2) % 10 * 100 + (a % 100 / 10 + 2) % 10 * 10 + (a % 10 + 2) % 10;
//	else if (a >= 100)
//		b = (a / 100 + 2) % 10 * 100 + (a % 100 / 10 + 2) % 10 * 10 + (a % 10 + 2) % 10;
//	else if (a >= 10)
//		b = (a / 10 + 2) % 10 * 10 + (a % 10 + 2) % 10;
//	else
//		b = (a + 2) % 10;
//	printf("加密后为%d\n", b);
//	return 0;
//}

//int main()
//{
//	char _char;
//	_char = getchar();
//	_char = (_char >= 'A' && _char <= 'Z') ? _char + 32 : _char;
//	printf("%c\n", _char);
//	return 0;
//}

//int main()
//{
//	float a = 0, b = 0, s = 0;
//	char c;
//	printf("please input expression:a+(-,*,/)b\n");
//	scanf("%f%c%f", &a, &c, &b);
//	switch (c)
//	{
//	    case '+':s = a + b; break;
//		case '-':s = a - b; break;
//		case '*':s = a * b; break;
//		case '/':s = a / b; break;
//	}
//	printf("%.2f%c%.2f=%.2f\n", a, c, b, s);
//	return 0;
//}

//int main()
//{
//	int num = 1, count = 0;
//	float data = 0;
//    n:
//	printf("please input data%d\n", num);
//	scanf("%f", &data);
//	if (data < 0)
//		count++;
//	num++;
//	if(num<=5)
//		goto n;
//	printf("count=%d\n", count);
//	return 0;
//}

//int main()
//{
//	int a = 0, b = 0, c = 0;
//	printf("please input data(a,b,c)\n");
//	scanf("%d,%d,%d", &a, &b, &c);
//	if (a < b)
//	{
//		a = a + b;
//		b = a - b;
//		a = a - b;
//	}
//	if (a < c)
//	{
//		a = a + c;
//		c = a - c;
//		a = a - c;
//	}
//	if (b < c)
//	{
//		b = b + c;
//		c = b - c;
//		b = b - c;
//	}
//	printf("从大到小依次为%d,%d,%d\n", a, b, c);
//	return 0;
//}

//int main()
//{
//	int a = 0, b = 0;
//	a = b ? (a=a+1) : a + 2;
//	printf("%d\n", a);
//	return 0;
//}

//一百以内偶数的和
//int main()
//{
//	int sum = 0, i = 0;
//	scanf("%d", &i);
//	do
//	{
//		sum += i;
//		i += 2;
//	} while (i <= 100);
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	for (int i = 1; i <= 3; i++)
//	{
//		printf("%d\n", i);
//	}
//	return 0;
//}

//int main()//自定义边长的正方形
//{
//	int a;
//	printf("输入边长\n");
//	scanf("%d", &a);
//	for (int j = 1; j <= a; j++)
//	{
//		for (int i = 1; i <= a; i++)
//		{
//			printf("* ");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int main()
//{
//	int i;
//	for (i = 100; i <= 200; i++)
//		if (i % 16 == 0)
//			break;
//	printf("%d\n",i);
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(float*));
//	return 0;
//}


//int main()
//{
//	int i, n;
//	for (n = 3; n <= 100; n++)
//	{
//		for (i = 2; i < n; i++)
//			if (n % i == 0)
//				goto there;
//		printf("%d ", n);
//	    there:if (0);
//	}
//	return 0;
//能求出3-100之间的素数

//int main()
//{
//	int i, n;
//	for (n = 3; n <= 100; n++)
//	{
//		for (i = 2; i < n; i++)
//		{
//			if (n % i == 0)
//				break;
//		}
//		if (n==i)
//		    printf("%d ", n);
//	}
//	return 0;
//}//改进之后`

//int main()
//{
//	int x = 0, y = 0, z = 0;
//	for (x = 0; x <= 33; x++)
//		for (y = 0; y < 50; y++)
//			for (z = 0; z < 100; z += 2)
//				if (x + y + z == 100 && 3 * x + 2 * y + z / 2 == 100)
//					printf("x=%2d,y=%2d,z=%2d\n", x, y, z);
//	return 0;
//}//三种马驼瓦

//int main()
//{
//	int num = 1, i = 0;
//	for (i = 0; i < 9; i++)
//		num = 2 * (num + 1);
//	printf("第一天的马匹数为%d\n", num);
//	return 0;
//}//猴子吃桃
//#include<math.h>
//int main()
//{
//	double a = 0, x0 = 0, x1 = 0;
//	printf("please input data\n");
//	scanf("%lf", &a);
//	x0 = a / 2.0;
//	x1 = (x0 + a / x0) / 2;
//	do {
//		x0 = x1;
//		x1 = (x0 + a / x0) / 2;
//	} while (fabs(x1 - x0) >= 1e-6);
//	printf("%.3f的平方根是%.3f\n", a, x1);
//	return 0;
//}
//int main()
//{
//	int s, i;
//	for (s = 0, i = 1; i < 3; i++, s += i);
//	printf("%d\n", s);
//  return 0;
//}

//int main()
//{
//	int arr[3] = { '1','\0','2' };
//	printf("%c%c%c\n", arr[0], arr[1], arr[2]);
//	return 0;
//}

//int main()
//{
//	int x = 0, max = 0, min = 0, T = 0;
//	for (;;)
//	{
//		printf("please input data:\n");
//		scanf("%d", &x);
//		if (0 == x)
//			break;
//		if (x >= max)
//			max = x;
//		else if (x >= min && x < max);
//		else
//			min = x;
//	}
//	printf("max=%d,min=%d\n", max, min);
//	return 0;
//}

//int main()
//{
//	int a = 0, b = 0, c = 0, d = 0;
//	char ch;
//	while ((ch = getchar()) != '\n')
//	{
//		if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
//			a++;
//		else if (32 == ch)
//			b++;
//		else if (ch >= '0' && ch <= '9')
//			c++;
//		else
//			d++;
//	}
//	printf("字母数")
//	return 0;
//
//}

//int main()
//{
//	int i = 0;
//	char arr[5] = { 0 };
//	for (i = 0; i < 5; i++)
//		scanf("%c", &arr[i]);
//	for (i = 0; i < 5; i++)
//		printf("%c", arr[i]);
//
//	return 0;
//}

//int main()
//{
//	char b[8], c[] = "BASIC\ndBASE";
//	scanf("%s", b);
//	printf("%s\n", b);
//	printf("%s\n", c);
//	printf("%s\n", &c[2]);
//
//	return 0;
//}

//int main()
//{
//	int i = 0, num = 0;
//	char str1[80] = { 0 }, str2[80] = { 0 };
//	printf("please input string str1:\n");
//	gets(str1);
//	for (i = 0; str1[i] != '\0'; i++)
//	{
//		num++;
//		str2[i] = str1[i];
//	}
//	str2[i] = '\0';
//	printf("num=%d\n", num);
//	puts(str2);
//
//	return 0;
//}

//int main()
//{
//	int sum = 0, i = 0, arr[10] = { 0 };
//	float ave = 0.0f;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (arr[i] >= 50)
//		{
//			printf("please input again\n");
//			continue;
//		}
//		sum += arr[i];
//	}
//	ave = sum / 10.0;
//	printf("ave=%.3f\n", ave);
//	return 0;//求10个50以内数的平均值
//}


//int main()
//{
//	int a = 0, b = 0, c = 0, d = 0;
//	for (a = 2, b = 1; a >= 1, b <= 5; a--, b += 2)
//	{
//		for (c = 1; c <= a; c++)
//			printf(" ");
//		for (d = 1; d <= b; d++)
//			printf("*");
//		printf("\n");
//	}
//	for (a = 1, b = 3; a <= 2, b >= 1; a++, b -= 2)
//	{
//		for (c = 1; c <= a; c++)
//			printf(" ");
//		for (d = 1; d <= b; d++)
//			printf("*");
//		printf("\n");
//	}
//	return 0;
//}//打印实心菱形


//int main()
//{
//	int ret = 1, n = 0, i = 0;
//	scanf("%d", &n);
//	for(i=1;i<=n;i++)
//	    ret *= i;
//	printf("%d!=%d\n",n, ret);
//	return 0;
//}//n的阶乘
//

//int main()
//{
//	int ret = 0, i = 0, n = 0, sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//			ret *= i;
//		sum += ret;
//	}
//	printf("sum=%d\n", sum);
//
//	return 0;
//}//1到10的阶乘之和

//二分查找（折半查找）--只能用于有序数列。
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("请输入要找的数：\n");
//	int key = 0;
//	scanf("%d", &key);
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("找不到，没有这个数\n");
//
//	return 0;
//}


//先写一个简单的单行字符靠拢动画
int main()
{
	char arr1[] = "welcome to the game";
	char arr2[] = "###################";
	int left = 0;
	int right = sizeof(arr1) / sizeof(arr1[0]) - 2;
	printf("%s\n",arr2);
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		left++;
		right--;
	}
	return 0;
}