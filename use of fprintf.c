#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
	char ch[20]={"my name is khan"};
        int n;
	clrscr();
	FILE *fp;
	fp=fopen("F1.txt","w");
	fprintf(fp,"%s",ch);
	n=ftell(fp);
	printf("%d",n);
	fclose(fp);
	getch();
}
