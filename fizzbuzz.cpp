#include <iostream>
using namespace std;

int main()
{
    int N, A, B;
    cin >> N >> A >> B;

    for (int i = 1; i <= N; i++)
    {
        cout << (i % A == 0 ? "Fizz" : "")
             << (i % B == 0 ? "Buzz" : "")
             << (i % A != 0 && i % B != 0 ? to_string(i) : "") << '\n';
    }
    return 0;
}