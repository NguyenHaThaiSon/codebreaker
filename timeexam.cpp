#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int h = (N / 60) % 24;
    int m = N % 60;

    cout << (h < 10 ? "0" : "") << h
         << (m < 10 ? "0" : "") << m;
    return 0;
}