#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//int main()
//{
//	float a, b, c, derta, _2a, x1, x2;
//	printf("请输入一元二次方程的参数(a，b，c)\n");
//	n:
//	scanf("%f,%f,%f", &a, &b, &c);
//	if (a == 0)
//	{
//		printf("input date error! please try again.\n");
//		goto n;
//	} 
//	else
//	{
//		derta = b * b - 4 * a * c;
//		_2a = 2 * a;
//		x1 = -b / _2a;
//		printf("derta=%.2f,2a=%.2f,x1=%.2f\n",derta,_2a,x1);//用于调试而额外加入的内容
//		if (derta > 0)
//		{
//			x2 = sqrt(derta) / _2a;
//			printf("root1=%.2f,root2=%.2f\n", x1 + x2, x1 - x2);
//		}
//		else if (derta == 0)
//			printf("root1=root2=%.2f\n", x1);
//		else
//		{
//			x2 = sqrt(-derta) / _2a;
//			printf("实数域无解，复数根为:\nroot1=%.2f+%.2fi,root2=%.2f-%.2fi\n",x1,x2,x1,x2);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int x = 0, i = 1, sum = 0;
//	double aver;
//	while (i <= 10)
//	{
//	n:
//		scanf("%d", &x);
//		if (x >= 50)
//		{
//			printf("data error\n");
//			goto n;
//		}
//		sum += x;
//		i++;
//	}
//	aver = sum / 10.0;
//	printf("aver=%.2f\n", aver);
//	return 0;
//}

//int main()
//{
//	int i = 1, a;
//	char c;
//	while (i <= 5)
//	{
//		scanf("%d", &a);
//		switch (a / 10)
//		{
//		    case 10:
//			case 9:c = 'A'; break;
//			case 8:
//			case 7:c = 'B'; break;
//			case 6:c = 'C'; break;
//			default:c = 'D'; break;
//		}
//		printf("Gread is %c\n", c);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int num = 1;
//	while (num <= 100)
//	{
//		if (num % 2 == 1)
//			printf("%d ", num);
//		num++;
//	}
//	return 0;
//}

//int main()
//{
//	double pi = 3.1415926;
//	float r = 0.0;
//	scanf("%f",&r);
//	double v = (4.0 / 3) * pi * (r * r * r); 
//	printf("% .3f\n",v);
//	return 0;
//}


int main()
{
	int n = 2;
	switch (1)
	{
	case (1):
		printf("1\n");
		break;
	case 2:
		printf("2\n");
		break;
	default:
		printf("3\n");
	}
	return 0;
}