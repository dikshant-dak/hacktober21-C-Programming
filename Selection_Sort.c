#include<stdio.h>
int main()
{
	int a[10]={5,14,7,34,26,11},n=6,i,j,temp,res;
	for(i=0;i<n-1;i++)
	{
		res = i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[res])
			{
				res = j;
			}
		}
		temp = a[res];
		a[res] = a[i];
		a[i] = temp;
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
