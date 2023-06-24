#include<iostream>
using namespace std;
int main()
{
	int a[10];
	int i;
	cout<<"enter 10 integer as input"<<endl;
	for(i=0;i<10;i++)
	{
		cin>>a[i];
	}
	cout<<"the given input are:"<<endl;
	for(i=9;i>=0;i--)
	{
		cout<<a[i]<<" ";
	}
	
	return 0;
}
