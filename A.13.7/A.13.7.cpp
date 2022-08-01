#include <stdio.h>

struct time
	{
		int h;
		int m;
		int s;
	};
	
struct time td(struct time *t1,struct time *t2);
	
int main()
{
	
	struct time t1,t2,temp;
	
	
	printf("Give first time (hh:mm::ss)");
	scanf("%i:%i:%i",&t1.h,&t1.m,&t1.s);
	
	printf("Give second time (hh:mm::ss)");
	scanf("%i:%i:%i",&t2.h,&t2.m,&t2.s);
	
	temp=td( &t1, &t2);
	
	printf("Elapsed time : %02d:%02d:%02d\n",temp.h,temp.m,temp.s);
	return 0;
}

struct time td(struct time *t1,struct time *t2)
{
	struct time temp;
	int s1,s2,sd;
	
	s1=3600*t1->h+60*t1->m+t1->s;
	s2=3600*t2->h+60*t2->m+t2->s;
	sd=s2-s1;
	
	temp.h=sd/3600;
	temp.m=(sd%3600)/60;
	temp.s=sd%60;
	
	return temp;
}
