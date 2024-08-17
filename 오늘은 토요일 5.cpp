//##n을 입력받고 그 수 내에서 6의 배수가 몇개있고 그 수들의 합은 무엇인지 출력한는 프로그램 
//#inlcude <stdio.h>
//int main( )
//{
//	int n;
//	scanf("%d", &n);
//	for(int a = 1;i<=n;i++){
//		if(i % 6 == 0){
//			cnt++;
//			sum+= i;
//		}
//	}
//	printf("갯수 : %d",count);
//	printf("합:%d", sum);
//}
//##증감식은 아무데나 써도 상관 없음 결과는 달라질수 있다 
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	while(i<=10){
//		printf("%d",i);
//		i++;
//	}
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int i = 10;
//	int count = 0;
//	int sum = 0
//	while (n<=17)
//	{
//		count++;
//		sum+=i;
//		printf(" %d", i);
//		i++;
//	}
//	printf("반복 횟수 : %d\n", count);
//	printf("합:%d", sum)
//	return 0;
// } 
//##do while 조건식을 나중에 판별함 54줄에서 i를 출력하라고 했기 때문에 입력을 시키고 i++로 12로 만든다음 while문으로 가니 거짓이므로 11로 출력한다. 
//#include <stdio.h>
//
//int main()
//{
//	int i;
//	
//	i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	}	while (i<=10);
//	
//
//	return 0;
//}
//##break:코드를 언제 멈출지 정할수 있음. 
//#include <stdio.h>
//int main()
//{
//	int i  = 0;
//	while(i<10)
//	{
//		printf("i의 값 : %d\n", i);
//		i++;
//		if(i==5)
//		{
//			break; 
//		}
//		return 0;
//	 } 

#include <stdio.h>
int main( )
{
	int n;
	int count = 0;
	int sum = 0

	scanf("%d");
	
	while(n>0){
		count++;
		sum+=n		
		n/=10;
	}
    scanf("%d ", n);
    printf("합:%d", sum);
	
}
