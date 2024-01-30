#include<iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int arr[N];
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    int tracker = 0;
    for (int i = 0; i < N; ++i) {
        if (i != 0 || i != N) {
            if (arr[i + 1] >= arr[i]) {
                tracker++;
            } else {
                tracker = 0;
            }
        }
    }

    cout << tracker;
    return 0;
}