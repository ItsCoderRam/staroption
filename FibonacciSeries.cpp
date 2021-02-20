// WAP to print fibonacci series using recursion.
#include <iostream>
using namespace std;
int Fib(int x)
{
    if ((x == 1) || (x == 0))
    {
        return (x);
    }
    else
    {
        return (Fib(x - 1) + Fib(x - 2));
    }
}
int main()
{
    int x, i = 0;
    cout << "Enter the number of terms of series : "<<endl;
    cin >> x;
    cout << "Fibonnaci Series : "<<endl;
    while (i < x)
    {
        cout << " " << Fib(i);
        i++;
    }
    return 0;
}