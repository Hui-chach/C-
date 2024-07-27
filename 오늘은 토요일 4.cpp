#include <stdio.h>

int main( )
{
	int a;
	scanf("%d", &a);
	if (a%7 == 0 && a%9 == 0){
		printf("%d", a);
	}
	
	return 0;
}
