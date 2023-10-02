//1	2	3
//4	5	6
//7	8	9


#include<iostream>
using namespace std;
int main()
{
	int i,j,k=1;
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			cout<<k<< "    ";
			k++;
		}
		cout<<endl;
	}
}
