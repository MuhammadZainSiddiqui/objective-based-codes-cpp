#include<iostream>
using namespace std;
int main()
{
	int km;
	float m;
	m=km*1000;
	cout<<"please enter kilometer"<<endl;
	cin>>km;
	cout<<"the result in meters is\n"<<km*1000<<endl;
	km=m*0.0001;
	cout<<"please enter meter"<<endl;
	cin>>m;
	cout<<"the result in kilometers is\n"<<m*0.0001<<endl;
	
	return 0;
}
