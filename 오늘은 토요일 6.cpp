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
//			printf("���Դϴ�");
//			break;
//		case 1:
//			printf("���Դϴ�");
//			break;
//		case 2:
//			printf("���Դϴ�");
//			break;
//		case 3:
//			printf("���Դϴ�"); 
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
//			printf("3�� ����̴�.");
//			break;
//		default:
//			printf("3�� ����� �ƴϴ�.");
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
//			printf("���ҳ��Դϴ�.")
//		case 1:
//			printf("û�ҳ��Դϴ�.")
//		case 2:
//			printf("û���Դϴ�.")
//		case 3:
//			printf("û���Դϴ�.")
//		case 4:
//			printf("�߳��Դϴ�.") 
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
//			printf("�� ���߾��.");
//			break;
//			
//		case 9:
//			printf("�ʹ� ���߾��")
//		default:
//			printf("��¿����̾� ���� �� ������ ��");
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
