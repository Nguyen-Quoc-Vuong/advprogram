#include <iostream>
using namespace std;
int main(int argc, char* argv[])
{
    int a, b;
    char op;
    cin >> a >> op >> b;
    switch (op)
    {
    case '+':
        cout << a + b << '\n';
        break;
    case '-':
        cout << a - b << '\n';
        break;
    case '*':
        cout << a * b << '\n';
        break;
    case '/':
        if (b == 0) {
            cout << "Error" << '\n';
            break;
        }
        else {
            cout << a / b << '\n';
            break;
        }
    case '%':
        if (b == 0) {
            cout << "Error" << '\n';
            break;
        }
        else {
            cout << a % b << '\n';
            break;
        }
    }
}
