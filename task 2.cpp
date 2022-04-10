#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"enter your age"<<endl;
	cin>>age;
	if(age>=100){
		cout<<"you are old"<<endl;
	}
	else if(age<=100){
		cout<<"you are young"<<endl;
	}
	else{
		cout<<"you are very old,cannot be displayed"<<endl;
	}
	return 0;
}
