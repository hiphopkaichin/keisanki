#include <stdio.h>

int main()
{
	int i,n,xmin,xmax,ymin,ymax,d,mukix,mukiy;
	char muki;
	int x[200],y[200];
	
	scanf("%d",&n);
	if(n==0)
		return 0;
	
	x[0]=0;
	
	y[0]=0;
	
	xmin=0;
	
	xmax=0;
	
	ymin=0;
	
	ymax=0;
	
	for(i=1;i<=n-1;i++)
	{
		
		scanf("%d ",&d);
		
		muki = getchar();
		
		
		if(muki == 'W')
		{
			
			mukix = -1;
			
			mukiy = 0;
		}
		else if(muki == 'S')
		{
			
			mukix = 0;
			mukiy = -1;
			
		}
		else if(muki == 'E')
		{
			
			mukix = 1;
			mukiy = 0;
			
		}
		else if(muki == 'N')
		{
			
			mukix = 0;
			mukiy = 1;
			
		}
		
		x[i] = x[d] + mukix;
		y[i] = y[d] + mukiy;
		
		if(x[i]<xmin)
			xmin = x[i];
		
		if(x[i]>xmax)
			xmax = x[i];
		
		if(y[i]<ymin)
			ymin = y[i];
		
		if(y[i]>ymax)
			ymax = y[i];
	}
	
	
	printf("%d %d\n",xmax-xmin+1,ymax-ymin+1);
	
		
	
	
	return 0;
	
}
