//#include <stdio.h>
//int main()
//{
//	for(int i = 1 ; i<=6; i++)
//	{
//		printf("%d ÇÐ³â ", i);
//		 for(int j = 7 ; j>= 1; j--)
//		 {
//		 		printf("%d¹Ý ", j);
//		 }
//		 printf("\n");
//		
//	
//	}
//}
//
//#include <stdio.h>
//int main()
//{
//	for(int i = 5; i>=1; i--)
//	{
//		for(int j = i; j>=1; j--)
//		
//	{
//		printf("%d", j);
//	}
//	
//	printf("\n")
//}

			 #include <stdio.h>
			 int main()
			 {
			 	int cnt=0,max=0,final=0;
			 	for(int i = 1; i<=1000; i++)
			 	{
			 		cnt  = 0;
			 		printf("%d :", i);
			 		for(int j = 1; j<=i; j++)
			 		{
			 			if(i%j==0)
			 			{
			 				printf("%d ", j);
			 				cnt++;
						 }
					 }
					
				 
				 if(max < cnt);
				 {
				 	max = cnt;
				 	final = i;
				 }
				  printf("\n");
			}
			 
			 printf("\n final : %d", final);
			 printf("\n max : %d\n", max);
			 for(int i = 1; i<=final; i++)
			 {
			 	if(final % i == 0)
				{
					printf("%d", i);
				}
				 }
			 }
			 
		
		
			
			 
			 
			 
		 
