#include <iostream>
#include <deque>

using namespace std;

int main()
{
    int N;
    cin >> N;

    deque<int> arr;

    for (int i = 0; i < N; ++i)
    {
        int num;
        cin >> num;
        if (i == 0)
        {
            arr.push_back(num);
        }
        else if ((i % 2 != 0 && N % 2 == 0) || (i % 2 == 0 && N % 2 != 0))
        {
            arr.push_front(num);
        }
        else
        {
            arr.push_back(num);
        }
    }

    for (int i = 0; i < N; ++i)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
