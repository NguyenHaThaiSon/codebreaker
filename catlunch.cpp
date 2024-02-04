#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;

    vector<int> fishes(N);
    for (int i = 0; i < N; i++)
    {
        cin >> fishes[i];
    }

    int maxSatisfaction = 0;
    int currSatisfaction = 0;

    while (!fishes.empty())
    {
        int maxFish = *max_element(fishes.begin(), fishes.begin() + K);
        currSatisfaction += maxFish;
        maxSatisfaction = max(maxSatisfaction, currSatisfaction);

        auto it = find(fishes.begin(), fishes.end(), maxFish);
        fishes.erase(it);
    }

    cout << maxSatisfaction;
    return 0;
}