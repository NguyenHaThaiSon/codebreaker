#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string array[n];
    vector<int> order(n);
    string word;
    for (int i = 0; i < n; ++i)
    {
        cin >> word;
        array[i] = word;
        order[i] = word.length();
    }
    return 0;
}