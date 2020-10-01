#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	int n,t,i,j,flag,count,p;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		count=0;flag=0;
		scanf("%d %d",&n,&p);
		int a[n];
		for(j=0;j<n;j++)
		{	
		 scanf("%lld",&a[j]);
		 if(a[j]>=p/2)
		  count++;                        //easy one
		if(a[j]<=p/10)
		  flag++;                        //hard one
	   }
	   if(count==1&&flag==2)
	    printf("Yes\n");
	   else
	    printf("No\n");
	}
	return 0;
}
