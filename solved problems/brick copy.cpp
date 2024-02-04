#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int arr[N];
    for (int i = 0; i < N; ++i)
    {
        cin >> arr[i];
    }

    vector<int> stack;

    for (int i = 0; i < N; ++i)
    {
        while (!stack.empty() && arr[i] >= stack.back())
        {
            stack.pop_back();
        }
        stack.push_back(arr[i]);
    }

    for (int i = stack.size() - 1; i >= 0; i--)
    {
        cout << stack[i] << '\n';
    }

    return 0;
}
