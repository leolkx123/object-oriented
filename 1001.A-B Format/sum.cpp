
#include<stdio.h>
#include<math.h> 
int main()
{
  int a,b,sum,thousand,million,billion,r;
  scanf("%d%d",&a,&b); 
  sum = a+b;
  if(abs(sum)>=1000000)
	{
		thousand=sum/1000;
		million=thousand/1000;
		thousand=thousand-million*1000;
		r=sum%1000;
		printf("%d,%03d,%03d\n",million,abs(thousand),abs(r));
	}
	if(abs(sum)>=1000&&abs(sum)<1000000)
	{
		thousand=sum/1000;
		r=sum%1000;
		printf("%d,%03d\n",thousand,abs(r));
	}
	if(abs(sum)<1000)printf("%d\n",sum);
	return 0;
}
