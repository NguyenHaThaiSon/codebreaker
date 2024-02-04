#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;

    int row1[e];
    int row2[e];

    for (int i = 0; i < e; i++)
    {
        cin >> row1[i];
        cin >> row2[i];
    }

    for (int i = 1; i <= n; i++)
    {
        vector<int> arr;
        for (int j = 0; j < e; ++j)
        {
            if (i == row1[j])
            {
                arr.push_back(row2[j]);
            }
            if (i == row2[j])
            {
                arr.push_back(row1[j]);
            }
        }

        for (int num : arr)
        {
            cout << num << " ";
        }
        cout << '\n';
    }
}