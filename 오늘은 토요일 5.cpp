//##n�� �Է¹ް� �� �� ������ 6�� ����� ��ְ� �� ������ ���� �������� ����Ѵ� ���α׷� 
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
//	printf("���� : %d",count);
//	printf("��:%d", sum);
//}
//##�������� �ƹ����� �ᵵ ��� ���� ����� �޶����� �ִ� 
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
//	printf("�ݺ� Ƚ�� : %d\n", count);
//	printf("��:%d", sum)
//	return 0;
// } 
//##do while ���ǽ��� ���߿� �Ǻ��� 54�ٿ��� i�� ����϶�� �߱� ������ �Է��� ��Ű�� i++�� 12�� ������� while������ ���� �����̹Ƿ� 11�� ����Ѵ�. 
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
//##break:�ڵ带 ���� ������ ���Ҽ� ����. 
//#include <stdio.h>
//int main()
//{
//	int i  = 0;
//	while(i<10)
//	{
//		printf("i�� �� : %d\n", i);
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
    printf("��:%d", sum);
	
}
