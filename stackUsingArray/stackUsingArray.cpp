#include <iostream>
#include <string>

using namespace std;

class StackArray {
private:
	int stack_array[5];
	int top;

public:
	//constructor
	StackArray() {
		top = -1;
	}

	int push(int element) {
		if (top == 4) { //step 1
			cout << "Number of data excedeed the list." << endl;
			return 0;
		}

		top++; //step 2
		stack_array[top] = element; //step 3
		cout << endl;
		cout << element << " ditambahkan(pushed)" << endl;

		return element;
	}
};