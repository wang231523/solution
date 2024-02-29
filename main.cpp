#include <iostream>
using namespace std;

int main()
{
	double a[5]={0.8,2,3,4,5},b;//a为实际药液容量，b为单次注射剂量
	int i,j,c[5]={1,3,3,5,5};//c为注射器容量
	for(i=0;i<5;i++)
	{
		cout<<"注射剂量选择"<<a[i]<<"/"<<c[i]<<"ml"<<endl;
		for(j=10;j<=180;j+=10)
		{
			b=a[i]/j;
			cout<<"注射"<<j<<"次，单次"<<b<<"ml"<<endl;
		}
		cout<<endl;
	}
   return 0;
}
