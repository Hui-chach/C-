//#include <stdio.h>
//int main()
//{
//	int num;
//	
//	printf("10000 미만 정수 입력:");
//	scanf("%d", &num);
//	
//	if(num < 10)
//	{
//	   printf("한 자리수\n");	
//	}
//	else if(num < 100)
//	{
//		printf("두 자리수\n");	
//	}
//	else if(num < 1000) 
//	{
//		printf("세 자리수\n"); 
//    }
//    else if (num < 10000); 	
//	{
//		printf("네 자리수\n");
//    }
//    return 0;
//	
//}
//
//#include <stdio.h>
//int main()
//{
//	int a;
//	printf("정수를 입력하세요.");
//	scanf("%d", &a) ;
//	if (0 < a)
//	{
//		printf("양수입니다.");
//	}
//	else if (0>a)
//	{
//		printf("음수입니다."); 
//	} 
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a;
//	printf("정수를 입력하세요.");
//	scanf("%d", &a);
//	if (a%2 == 0)
//	printf("짝수입니다.");
//	
//	if (a%2 == 1)
//	printf("홀수입니다.");
//	return 0; 
//	
//}
#include <stdio.h>
int main()
{
	int a;
	printf("정수를 입력하세요.");
	scanf("%d", &a);
	if (a%3 == 0){
		printf("3의 배수입니다.");
	}

	else{
		printf("3의 배수가 아닙니다.");		
	}

	return 0; 
	
}
