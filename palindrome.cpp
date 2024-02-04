#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(int num)
{
    string strNum = to_string(num);
    int len = strNum.length();
    for (int i = 0; i < len / 2; ++i)
    {
        if (strNum[i] != strNum[len - i - 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    long long S, E;
    cin >> S >> E;

    for (int i = S; i <= E; ++i)
    {
        if (isPalindrome(i))
        {
            cout << "Palindrome!" << endl;
        }
        else
        {
            cout << i << endl;
        }
    }

    return 0;
}