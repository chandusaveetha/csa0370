#include<stdio.h>

int qsort(int a[10],int first,int last)
{
	int i,j,p,t;
	
	if(first<last)
	{
		i=first;
		j=last;
		p=i;
	}
	while(i<j)
	{
		while(a[i]<=a[p])
		{
			i++;
		}
		while(a[j]>a[p])
		{
			j--;
		}
		if(i<j)
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
	t=a[p];
	a[p]=a[j];
	a[j]=t;
	
	qsort(a,first,j-1);
	qsort(a,j+1,last);
		
}

int main()
{
	int i,n,a[100];
	printf("enter the no.of elements");
	scanf("%d",&n);
	printf("enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	
	qsort(a,0,n-1);

	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	
	return 0;
}
