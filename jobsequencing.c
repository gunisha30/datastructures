Q:
Given n jobs with their deadlines and profit. Find the sequence of jobs which will give maximum profit.
Solu:
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<graphics.h>
#include<dos.h>
#define NULL 0
struct job
{
int id,dl,pro;
}j1[10];

void dec();
void allot();
void display();
int i,j,n,max,m;
int a[10],l;
void main()
{
int gdriver = DETECT,gmode,i;
clrscr();
initgraph(&gdriver,&gmode,"C:\\Turboc3\\BGI");
for (j=7; j<8; j++)
	{
	setcolor(WHITE);
	settextstyle(j,0,j);
	outtextxy(70,0*j,"JOB SEQUENCING");
	delay(500);
	}
printf("\n\n\n\n\nenter no of jobs");
scanf("%d",&n);
printf("\nenter id, deadline and profit of jobs.\n");
for(i=1;i<=n;i++)
{
printf("\nid:");
scanf("%d",&j1[i].id);

printf("\ndeadline:");
scanf("%d",&j1[i].dl);

printf("\nprofit:");
scanf("%d",&j1[i].pro);
}
dec();
allot();
display();
getch();
}
void dec()
{
int t,te,tem;
for(i=1;i<=n;i++)
{
for(j=i+1;j<=n;j++)
	{
	 if(j1[i].pro<j1[j].pro)
	    {
		t=j1[i].pro;
		j1[i].pro=j1[j].pro;
		j1[j].pro=t;

		te=j1[i].dl;
		j1[i].dl=j1[j].dl;
		j1[j].dl=te;

		tem=j1[i].id;
		j1[i].id=j1[j].id;
		j1[j].id=tem;


	    }
	  }
}
}
void allot()
{
int f;
max=j1[1].dl;
for(i=2;i<=n;i++)
{
if(j1[i].dl>max)
max=j1[i].dl;
}
for(l=1;l<=max;l++)
{
a[l]=NULL;
}
for(l=1;l<=n;l++)
{
	if(a[j1[l].dl]==NULL)
	a[j1[l].dl]=j1[l].id;
	else
	{
	for(m=j1[l].dl-1;m>0;m--)
	{
	if(a[m]==NULL)
	{
	f=1;
	break;
	}
	}
	if(f==1)
	a[m]=j1[l].id;
	}

}
}
void display()
{
int sum=0,k;
printf("\n\njob id\tdeadline  profit");
for(i=1;i<=n;i++)
{
printf("\n%d \t%d \t  %d",j1[i].id,j1[i].dl,j1[i].pro);
}
printf("\n\nthe order of jobs is:");
for(l=1;l<=max;l++)
{
printf("\n%d",a[l]);
}
for(l=1;l<=max;l++)
{
if(a[l]!=NULL)
sum=sum+j1[a[l]].pro;
}
printf("\nmaximum profit is:%d",sum);
}
