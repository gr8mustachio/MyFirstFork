#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;
using namespace std;
int main()
{
    cout<<"Hi, please enter two whole numbers: ";

    int x,y;

    cin >> x >> y;
    cout << "Addition: " << x + y << endl;
    cout << "Subtraction: " << x - y << endl;
    cout << "Multiplication: " <<x * y << endl;
    if(y != 0)
        cout << "Division: " << x / y << endl;
    else
        cout << "Dividing by zero is not a number." << endl;
    cout << "Remainder: " <<x % y << endl;
    cout << "Square root: " << sqrt(x) << endl;
    cout << "Exponent: " << pow(x, y) << endl;
    return 0;
}
