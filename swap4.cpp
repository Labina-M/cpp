#include <iostream>
#include <stack>

using namespace std;

//swapping two numbers using stack

void swapUsingStack(int &a, int &b) {
    stack<int> s;

    // Push both numbers onto the stack
    s.push(a);
    s.push(b);

    // Pop them back in swapped order
    a = s.top();
    s.pop();
    b = s.top();
    s.pop();
}

int main() {
    int num1 = 5;
    int num2 = 10;

    cout << "Before swapping:" << endl;
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;

    swapUsingStack(num1, num2);

    cout << "After swapping:" << endl;
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;

    return 0;
}
