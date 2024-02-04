#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> array[N];
    for (int i = 0; i < N; ++i)
    {
        int num;
        cin >> num;
        array->push_back(num);
        for (int j = 0; j < sizeof(array); ++j)
        {
            swap(array.begin() + j; array.end() + j);
        }
    }
    return 0;
}