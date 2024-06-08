#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n < 0)
    {
        cout << "invalid input";
        return 0;
    }
    else if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "factorial of " << n <<" is: "<< factorial(n) << endl;

return 0;

}