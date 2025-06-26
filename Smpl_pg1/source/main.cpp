#include <iostream>
using namespace std;

// Function to add two numbers
int add(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;

    // Get input from the user
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Call the add function and display the result
    int sum = add(num1, num2);
    cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << endl;

    return 0;
}
