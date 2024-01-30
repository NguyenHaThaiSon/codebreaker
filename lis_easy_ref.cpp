#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int lisLength(const vector<int> &arr)
{
    int n = arr.size(); // Get the size (number of elements) of the input array.

    // Create a dynamic programming (DP) array 'dp' of size 'n' and initialize each element to 1.
    vector<int> dp(n, 1);

    // Iterate through each element in the array starting from the second element (index 1).
    for (int i = 1; i < n; ++i)
    {
        // For each element at index 'i', compare it with elements before it (up to index 'j').
        for (int j = 0; j < i; ++j)
        {
            // If the element at index 'i' is greater than the element at index 'j'
            // and the length of the LIS ending at 'i' is less than or equal to the length
            // of the LIS ending at 'j' plus 1, update the length of LIS ending at 'i'.
            if (arr[i] > arr[j] && dp[i] <= dp[j])
            {
                dp[i] = dp[j] + 1;
            }
        }
    }

    // Find the maximum value in the 'dp' array, which represents the length of the longest increasing subsequence.
    int result = 0;
    for (int i = 0; i < n; ++i)
    {
        result = max(result, dp[i]);
    }

    // Return the final result, which is the length of the longest increasing subsequence.
    return result;
}

int main()
{
    int N;
    cin >> N;

    vector<int> sequence(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> sequence[i];
    }

    int answer = lisLength(sequence);
    cout << answer << endl;

    return 0;
}
