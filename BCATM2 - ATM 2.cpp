#include <iostream>
using namespace std;

void sort(int a[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=i;j<n;j++)
		{
			if(a[i]<a[j]){
				int tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}		
		}
	}
}
int main()
{	int dem=0,i=0;
	int n,s,a[100];
	cin>>n>>s;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,n);

	while(s>0)
	{
		dem=dem+s/a[i];
		s=s%a[i];
		i++;
	}
	cout<<dem;
}
