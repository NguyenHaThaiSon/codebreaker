#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;

    // Initialize adjacency matrix with zeros
    vector<vector<int>> adjMatrix(n, vector<int>(n, 0));

    for (int i = 0; i < e; i++)
    {
        int ea, eb;
        cin >> ea >> eb;

        // Mark the connection in the adjacency matrix
        adjMatrix[ea - 1][eb - 1] = 1;
        adjMatrix[eb - 1][ea - 1] = 1;
    }

    // Print the adjacency matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << adjMatrix[i][j];
        }
        cout << '\n';
    }

    return 0;
}
