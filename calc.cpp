#include <bits/stdc++.h>
#define ll long long 
#define el '\n'
using namespace std;

ll sub(ll x, ll y)
{
    return (x - y);
}

double sub(double x, double y)
{
    return (x - y);
}

double divide(ll x, ll y)
{
    if (y == 0)
    {
        cout << "Can't divide by Zero\n";
        return 0;
    }

    return (x / y);
}

int main()
{
    ll x, y;
    cout << "X: ";
    cin >> x;

    cout << "Y: ";
    cin >> y;

    cout << "Enter Operation (+, -, /, *, ^): ";
    char c;
    cin >> c;
    switch (c)
    {
        case '+':
            cout << add(x, y);
            break;
        case '-':
            cout << sub(x, y);
            break;
        case '/':
            cout << divide(x, y);
            break;
        case '^':
            cout << power(x, y);
            break;
        case '*':
            cout << mul(x, y);
            break;
        default:
            cout << "Invalid Operation";
    }
    return 0;
}