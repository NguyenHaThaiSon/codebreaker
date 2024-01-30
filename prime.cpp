#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    string check = "Prime";
    if (n < 2)
    {
        check = "Not Prime";
    }
    else
    {
        for (int i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                check = "Not Prime";
                break;
            }
        }
    }

    cout << check;
}