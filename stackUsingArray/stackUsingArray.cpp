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

	void pop() {
		if (empty()) { //step 1
			cout << "\nStack is empty. Cannot pop." << endl; //1.a
			return; //1.b
		}

		cout << "\nThe popped element is : " << stack_array[top] << endl; //step 3
		top--; //step 3 decrement
	}

	//method for check is data is empty
	bool empty() {
		return (top == -1);
	}

	void display() {
		if (empty()) {
			cout << "\nStack is empty." << endl;
		}
		else {
			for (int tmp = top; tmp >= 0; tmp--) {
				cout << stack_array[tmp] << endl;
			}
		}
	}
};

int main() {
	StackArray obj;
	while (true) {
		cout << "\nMenu" << endl;
		cout << "1. Push" << endl;
		cout << "2. Pop" << endl;
		cout << "3. Display" << endl;
		cout << "4. Exit" << endl;
		cout << "\nEnter your choice (1-4): ";
		char ch;
		cin >> ch;
		switch (ch) {
		case '1': {
			int element;
			cout << "enter the element : ";
			cin >> element;
			obj.push(element);
			break;
		}
		case '2': {
			obj.pop();
			break;
		}
		case '3': {
			obj.display();
			break;
		}
		case '4': {
			return 0;
		}
		default: {
			cout << "Invalid option" << endl;
			break;
		}
		}
	}
	return 0;
}