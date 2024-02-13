#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long N;
    cin >> N;

    long long currency[13] = {1, 5, 10, 50, 100, 500, 1000, 5000, 10000, 50000, 100000, 500000, 1000000};

    long long count = 0;
    for (int i = 12; i >= 0; --i)
    {
        long long numNotes = N / currency[i];
        count += numNotes;
        N %= currency[i];
    }

    cout << count;
    return 0;
}
