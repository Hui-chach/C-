//#include <stdio.h>
//
//int main()
//{
//	int n;
//	
//	n = 2;
//	switch (3)
//	{
//		case 0:
//			printf("영입니다");
//			break;
//		case 1:
//			printf("일입니다");
//			break;
//		case 2:
//			printf("이입니다");
//			break;
//		case 3:
//			printf("삼입니다"); 
//			break;
//	}
//	return 0; 
//}
//
//
//#include <stdio.h>
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	
//	switch(n%3)
//	{
//		case 0:
//			printf("3의 배수이다.");
//			break;
//		default:
//			printf("3의 배수가 아니다.");
//			break; 
//	}
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	
//	switch(n/10)
//	{
//		case 0:
//			printf("유소년입니다.")
//		case 1:
//			printf("청소년입니다.")
//		case 2:
//			printf("청년입니다.")
//		case 3:
//			printf("청년입니다.")
//		case 4:
//			printf("중년입니다.") 
//	}
//}

//
//#include <stdio.h> 
//int main()
//{
//	int a,b,c,d;
//	scanf("%d %d %d %d", &a, &b, &c, &d);
//	int sum = a+b+c+d;
//	int avg = sum/4;
//	printf("sum : %d\n", sum);
//	printf("avg : %d\n", avg);
//	switch(n/10):
//	{
//		case 10:
//			printf("참 잘했어요.");
//			break;
//			
//		case 9:
//			printf("너무 잘했어요")
//		default:
//			printf("노력요함이야 공부 좀 열심히 해");
//			break; 
//	}
//	return 0;
//}

#include <stdio.h>
int main()
{
	int a;
	int sum = 0;
	int cnt = 0;
	scanf("%d", &a);
	for(int i = 1; i<=10; i++)
	if (i%2==0)
	sum +=i;
	else if (i%2==1)
	cnt +=i;
	printf("sum+cnt", &i);
}
return 0;
