//1 2 3 4 
//1 2 3 4
//1 2 3 4
//1 2 3 4
//
//#include<iostream>
//using namespace std;
//int main()
//{
//	int i,j,n;
//	cout<<"Enter the last number";
//	cin>>n;
//	for(i=1;i<=n;i++)
//	{
//		for(j=1;j<=n;j++)
//		{
//			cout<<j<<"	";
//		}
//		cout<<endl;
//	}
//}
//
//


//3 2 1
//3 2 1
//3 2 1

#include<iostream>
using namespace std;
int main()
{
	int i,j,n;
	cout<<"Enter the value of n"<<endl;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			cout<<(n-j+1)<<"  ";
			
		}
		cout<<endl;
	}
	
}

