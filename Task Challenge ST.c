#include<stdio.h>
int main()
{
	int choice;
	printf("Enter Number:\n.0 Zero \n.1 one");
	printf("\n Enter Choice:");
	scanf("%d",&choice);
	switch(choice)
	{
	
	case 0:
		printf("value is =%d",choice);
		break;
	case 1:
		printf("value is =%d",choice);
		break;
	default :
		printf("Number isnt in the list");
	}
		return 0;
		
}
