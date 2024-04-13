#include <iostream> 

using namespace std;

int main() {
	double a, b;
	cout << "Enter a: ";
	cin >> a;
	cout << "Enter b: ";
	cin >> b;
	double* ptrA = &a;
	double* ptrB = &b;
	double temp = *ptrA;
	*ptrA = *ptrB;
	*ptrB = temp;
	cout << "After swapping, the values of a and b are: " << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	return 0;
}


#include <iostream> 
using namespace std;
int main() {
	int* ptr1, * ptr2;
	ptr1 = new int;
	ptr2 = new int;
	*ptr1 = 10;
	*ptr2 = 20;
	cout << "Initial values:" << endl;
	cout << "ptr1 = " << *ptr1 << endl;
	cout << "ptr2 = " << *ptr2 << endl;
	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
	cout << "\nAfter swapping:" << endl;
	cout << "ptr1 = " << *ptr1 << endl;
	cout << "ptr2 = " << *ptr2 << endl;
	delete ptr1;
	delete ptr2;

	return 0;
}


#include <iostream> 
#include <cstdlib>  
#include <ctime> 

using namespace std;

int main() {
	int n;
	cout << "Enter the size of arrays: ";
	cin >> n;

	srand(time(0));

	int* r = new int[n];
	int* q = new int[n];

	cout << "Array r: ";
	for (int i = 0; i < n; ++i) {
		r[i] = rand() % 21 - 10;
		cout << r[i] << " ";
	}
	cout << endl;

	cout << "Array q: ";
	for (int i = 0; i < n; ++i) {
		q[i] = rand() % 21 - 10;
		cout << q[i] << " ";
	}
	cout << endl;

	int countR = 0, countQ = 0;
	for (int i = 0; i < n; ++i) {
		if (r[i] == 0)
			++countR;
		if (q[i] == 0)
			++countQ;
	}
	cout << "Number of zero elements in array r: " << countR << endl;
	cout << "Number of zero elements in array q: " << countQ << endl;

	if (countR > countQ)
		cout << "Array r has more zero elements." << endl;
	else if (countQ > countR)
		cout << "Array q has more zero elements." << endl;
	else
		cout << "Both arrays have the same number of zero elements." << endl;

	delete[] r;
	delete[] q;

	return 0;
}
