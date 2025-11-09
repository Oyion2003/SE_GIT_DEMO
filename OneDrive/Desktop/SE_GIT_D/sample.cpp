#include <iostream>
using namespace std;

// Function to add two numbers
int addNumbers(int a, int b) {
    return a + b;
}

int main() {
    // Variable declaration
    int num1, num2,num3 ;




    // Input
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    // Function call
    int sum = addNumbers(num1, num2);

    // Output
    cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << endl;

    // Conditional check
    if (sum % 2 == 0) {
        cout << "The result is even." << endl;
    } else {
        cout << "The result is odd." << endl;
    }

    // Loop example
    cout << "Counting from 1 to " << sum << ":" << endl;
    for (int i = 1; i <= sum; i++) {
        cout << i << " ";
    }
    cout << endl;

    return 0;

    //This is modified code for branch
    //GOOD

}
