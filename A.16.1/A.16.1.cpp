include <stdio.h>

#define IN(x,a,b) ((x)>(a) && (x)<(b) ? 'y' : 'n')

int main()
{
	int i,j,k;
	scanf(%d%d%d,&i,&j,&k);
	printf("%c",IN(i,j,k));
	return 0;
}
