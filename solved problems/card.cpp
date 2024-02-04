#include <iostream>
#include <deque>
using namespace std;

int main()
{
    int m, k;
    string order;

    cin >> m >> k >> order;

    // Initialize the deque with initial positions
    deque<int> position;
    for (int i = 0; i < m; ++i)
    {
        position.push_back(i);
    }

    // Simulate the moves and update positions
    for (char letter : order)
    {
        if (letter == 'A')
        {
            // Move the top card to the bottom
            int temp = position.front();
            position.pop_front();
            position.push_back(temp);
        }
        else if (letter == 'B')
        {
            // Move the second card to the bottom
            int temp = position[1];
            position.erase(position.begin() + 1);
            position.push_back(temp);
        }
    }

    // Output the results
    cout << position[k - 1] << ' ' << position[k] << ' ' << position[k + 1];

    return 0;
}
