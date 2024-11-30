//#include <stdio.h>
//#include <conio.h>
//
//int main()
//{
//	int ch1, ch2;
//	
//	ch1 = getch();
//	ch2 = getch();
//	printf("%d %d\n", ch1, ch2);
//	printf("%x %x\n", ch1, ch2);
//	
//	return 0;
//}
//

#include <stdio.h>
#include <conio.h>

int main()
{
	unsigned char ch;
	
	do
	{
	
	ch = getch();
	printf("%d %x:%c\n", ch , ch, ch);
} while (ch != 13);

return 0;

}
