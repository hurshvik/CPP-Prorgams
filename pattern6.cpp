#include<iostream>
using namespace std;
int main()
{
	int i,j,k=1,n;
	cout<<"Enter the value of n";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<k<<"	";
			k++;
		}
		cout<<endl;
	}
}
