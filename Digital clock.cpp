#include<stdio.h>
#include<stdlib.h>

int main()
{
	int h=0,m=0,s=0,h1=0,m1=0,s1=0;
	printf("\nPlease set the clock time(format in HH:MM:SS)\n");
	scanf("%d%d%d",&h,&m,&s);
	printf("\nPlease set the alarm time(format in HH:MM:SS)\n");
	scanf("%d%d%d",&h1,&m1,&s1);
	start:
	for(h;h<24;h++)
	{
		for(m;m<60;m++)
		{
			for(s;s<60;s++)
			{
				system("CLS");
				printf("\n\n\t\t\tTIME",h,m,s);
				printf("\t\t\t\t\t\talarm %d:%d:%d",h1,m1,s1);
				printf("\n\t\t\t%d:%d:%d",h,m,s);
				if(h<12)
				{
					printf(" AM");
				}
				else
				{
					printf(" PM");
				}
				if(h==h1 && m==m1 && s==s1)
				{
					printf("\a");
				}
				for(double i=0;i<99999999;i++)
				{
				i++;
				i--;
			    }
			}
			s=0;
		}
		m=0;
	}
	h=0;
	goto start;
	return 0;
}
