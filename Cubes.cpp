#include<iostream>
using namespace std;
int main()
{
	int num, i, cube;
	cout << "Enter a number:	";
	cin >> num;
	for (i=1;i<=num;i++)
	{
		cube = i*i*i;
		cout<<"Number is: " << i << " and it's cube is: " << cube <<endl;
	}
	return 0;
}
