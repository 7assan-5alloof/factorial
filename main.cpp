#include <iostream>

using namespace std;

int factorial(int);
int main()
{
    cout << "Press Ctrl-C to exit immediately" << endl;
    cout << "While using, please enter one letter character for confirmation wether to finish or not" << endl;
    int number;
    char stop;
    while(true)
    {
        cout << "Enter a number: ";
        cin >> number;
        cout << number << "'s factorial is " << factorial(number) << endl;
        cout << "Finish? ([y] for yes, any other letter for no) ";
        cin >> stop;
    }
    cout << "If you got a " << 0 << " while giving numbers, it means that you gave a number that caused an overflow (number is too big) and the factorial of it couldn't be calculated" << endl;
    cout << "Thank you!" << endl;

    return 0;
}
int factorial(int number)
{
    int fact = 1;
    for (; number > 0; number--)
    {
        fact *= number;
    }

    return fact;
}
