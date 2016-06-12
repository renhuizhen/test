#include<stdio.h>
#include <iostream.h>
int n=0;
void swap(int &a,int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}
int perm(int list[],int k,int m)
{
	if(k==m)
	{
		for(int i=0;i<=m;i++)
			cout<<list[i];
			cout<<endl;
			n++;
	}
	else
		for(int i=k;i<=m;i++)
		{
			swap(list[k],list[i]);
			perm(list,k+1,m);
	        swap(list[k],list[i]);
		}
		return 0;
}
 void main()
 {
	 int list[]={1,2,3};
	 perm(list,0,2);
     cout<<n;
	 cout<<endl;
 }
