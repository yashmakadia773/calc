#include<stdio.h>

void calc()
{
	int n,n1,n2;

		do
		{
			printf("enter your choice = ");
			scanf("%d",&n);
			
			if(n==6)
			{
				printf("exit");
			}
			if(n>6)
			{
				printf("enter valid value");
			}
			if(n<6 )
			{
				printf("enter your first num = ");
				scanf("%d",&n1);
				printf("enter your second num = ");
				scanf("%d",&n2);
				
				switch(n)
				{
					case 1:
						printf("addition = %d+%d=%d \n",n1,n2,n1+n2);
						break;
					case 2:
						printf("substraction = %d-%d=%d \n",n1,n2,n1-n2);
						break;
					case 3:
						printf("multiplication = d*%d=%d \n",n1,n2,n1*n2);
						break;
					case 4:
						printf("division = %d/%d=%d \n",n1,n2,n1/n2);
						break;
					case 5:
						printf("modulas = %d%%%d=%d \n",n1,n2,n1%n2);
						break;
					case 6:
						printf("exit");
						break;
				}
				
			}
		}while(n<6);
}



main()
	{
		printf("1 for addition \n");
		printf("2 for substraction \n");
		printf("3 for multiplication \n");
		printf("4 for division \n");
		printf("5 for modulas \n");
		printf("6 for exit \n");
		
		calc();	
	
	}