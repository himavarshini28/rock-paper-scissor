#include <stdlib.h>
#include <stdio.h>
int a,b;
int work(int);
int work(int a)
{
	if(a==1)
	{
		printf("rock\n");
	}
	else if(a==2)
	{
		printf("paper\n");
	}
	else if(a==3)
	{
		printf("scissor\n");
	}
}
int main()
{	printf("\"rock paper scissor\"\n\n\n");
	printf("-there are 10 attempts for each round of the game\n");
	printf("->enter your option\n");
	printf("1.rock\n2.paper\n3.scissor\n");
	int i,count1=0,count2=0;
	for(i=1;i<=10;i++)
	{
		scanf("%d",&a);
		label:
		b=rand()%4;
		if(b==0)
		{
			goto label;
		}
		printf("you     :");
		
		 work(a);
		printf("computer:");
		 work(b);
		
		if(a==1)
		{
			if(b==2)
			{
				count2++;
			}
			else if(b==3)
			{
				count1++;
			}
			
		}
		else if(a==2)
		{
			if(b==1)
			{
				count1++;
			}
			else if(b==3)
			{
				count2++;
			}
		
		}
		else if(a==3)
		{
			if(b==1)
			{
				count2++;
			}
			else if(b==2)
			{
				count1++;
			}
		
		}
		else
		{
			printf("invalid input......enter again\n");
		}
		if(count1==10 || count2==10)
		{
			break;
		}
		if(i<10)
		printf("\nenter your option:");
	}
	printf("\nscores:\n");
	printf("you     :%d\n",count1);
	printf("computer:%d\n",count2);
	if(count1>count2)
	{
		printf("you won the game :)");
	}
	else if(count2>count1)
	{
		printf("you lost the game :( ....");
	}
	else
	{
		printf("its a tie :|...");
	}
	return 0;
}
