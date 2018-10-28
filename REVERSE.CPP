#include<stdio.h>
#include<string.h>
#include<conio.h>
void reverse(char ch[], int start, int end)
{	char temp;
	while(start<=end)
	{	temp=ch[start];
		ch[start]=ch[end];
		ch[end]=temp;
		start++;
		end--;
	}
}
void reverseletter(char ch[], int start, int end)
{	int i, j;
	for(i=j=start;j<=end;j++)
	{	if(ch[j]==' ')
		continue;
		while(ch[j]!=' '&& j<=end)
		j++;
		j--;
		reverse(ch, i, j);
	}
}
void main()
{       clrscr();
	char ch[1000];
	printf("Enter The String \n");
	gets(ch);
	reverseletter(ch, 0, strlen(ch)-1);
	printf("%s", ch);
	getch();
}