//include <stido.h>
//int main( )
//{
//	int a;
//	int b;
//	scanf("%d %d", &a, &b);
//	printf("%d + %d =%d",a,b,a+b);
//	printf("%d - %d =%d",a,b,a-b;)
//	printf("%d * %d =%d",a,b,a*b);
//	printf("%d / %d =%d",a,b,a/b);
//	printf("%d %% %d =%d",a,b,a%b);
//	return  0;
//}
//include <stido.h>
//int main( )
//{
//	float a;
//	float b;
//	scanf("%f %f", &a, &b);
//	printf("%f + %f =%f",a,b,a+b);
//	printf("%f - %f =%f",a,b,a-b;)
//	printf("%f * %f =%f",a,b,a*b);
//	printf("%f / %f =%f",a,b,a/b);
//	printf("%f %% %f =%f",a,b,a%b);
//	return  0;
//}
//#include <stdio.h>
//
//int main()
//{
//	printf("%d\n", 10/3);
//	printf("%d\n", 10/3.0);
//	printf("%f\n", 10/3.0);
//			
//}
//#include <stido.h>
//
//int main()
//{
//	int a, b, c;
//	
//	printf("정수 입력:");
//	scanf("%d", &a);
//	printf("정수입력:");
//	scanf("%d", &b);
//	printf("%d\n", 10%3);
//	printf("%d\n", a%10);
//	c = a%b;
//	printf("%d\n", c);
//}
//#include <stido.h>
//
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	printf("%d", a%10 + a/10);
//	return 0;
//}
#include <stdio.h>

int main()
{
	int a;
	scanf("%d", &a);
	printf("%d\n", a%10 + a/10, a%100 + a/100);
	printf("%d", a%10 * a/10, a%100 * a/100);
	return 0;
}
