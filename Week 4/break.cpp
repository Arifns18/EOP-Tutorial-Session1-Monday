#include <iostream>

using namespace std;

int main(){
	int sum = 0;
	int num;
	bool isNegative = false;
	
	cin >> num;
	
	//while (cin && !isNegative)
	//{
	//if (num < 0) //if num is negative, terminate the loop
	////after this iteration
	//{
	//cout << "Negative number found in the data." << endl;
	//cout << "Sum: "<< sum << endl;
	//isNegative = true;
	//}
	//else
	//{
	//sum = sum + num;
	//cin >> num;
	//}
	//}
	
	
	/*withiout variable isNegative*/
	sum = 0;
	cin >> num;
	while (cin)
	{
	if (num < 0) //if num is negative, terminate the loop
	{
	cout << "Negative number found in the data." << endl;
	cout << "Sum: "<< sum << endl;
	break;
	}
	sum = sum + num;
	cin >> num;
	}
		return 0;
}




