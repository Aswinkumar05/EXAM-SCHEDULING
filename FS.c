#include<stdio.h>
#include<string.h>

void findandshift(char a[][20],int n)
{
	
	char b[n][20],c[n][20];
	int i,m,j,x=0;
	for(i=0;i<n;i++)
	{	
		{	printf("for");
			char s=a[i][0];
			if(s=="A")
			{
				printf("Enters");
				b[x][20]=a[i][20];
				x++;
			}
			else
			{
				printf("else");
			}
	}
	}
	x=0;
	for(i=0;i<n;i++)
	{
		if(strlen(b[i])>=5)
		{
			c[x][20]=b[i][20];
		}
	}
	printf("Enter the shift  value:");
	scanf("%d",&m);
	if(strlen(c[0])==0)
	{
		printf("No such name found");
	}
	else
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<10;j++)
			{
				c[i][j]=c[i][j+m];
			}
		}
		for(i=0;i<n;i++)
		{
			printf("%s",c[i]);
		}
	}
	
	
}
int main()
{
	int n,i,j;
	printf("Enter the number of students:");
	scanf("%d",&n);
	char a[n][20];
	printf("Enter the name of the students:");
	for( i=0;i<n;i++)
	{
		scanf("%s",&a[i]);
	}
	for( i=0;i<n;i++)
	{
		printf("%s\n",a[i]);
	}
	/*for(i=0;i<n;i++)
	{
		for(j=0;j<10;j++)
		{
			if(a[i][j]>=65 && a[i][j]<=90)
				continue;
			else
			{
				printf("The names are not in capital letter.");
				exit(0);
			}
		}
	}*/
	findandshift(a[n][20],n);
	
}

