#include <iostream>
#include <stack>
using namespace std;

bool checkValid(int L, string brackets)
{
    stack<char> s;
    for (char bracket : brackets)
    {
        if (bracket == '(' || bracket == '[' || bracket == '{')
        {
            s.push(bracket);
        }
        else
        {
            if (s.empty())
            {
                return false;
            }

            char openBracket = s.top();
            s.pop();

            if ((bracket == ')' && openBracket != '(') || (bracket == ']' && openBracket != '[') || (bracket == '}' && openBracket != '{'))
            {
                return false;
            }
        }
    }
    return s.empty(); // ((())
}

int main()
{
    int L;
    string brackets;

    cin >> L >> brackets;

    if (checkValid(L, brackets))
    {
        cout << "Valid";
    }
    else
    {
        cout << "Invalid";
    }
    return 0;
}