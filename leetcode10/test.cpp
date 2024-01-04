#include <iostream>
#include <stack>
#include <string>

using namespace std;

class Solution
{
public:
    bool isValid(string str)
    {
        stack<char> stack;
        for (char c : str)
        {
            if (c == '{' || c == '[' || c == '(')
            {
                stack.push(c);
            }
            else if (c == '}' && !stack.empty() && stack.top() == '{')
            {
                stack.pop();
            }
            else if (c == ']' && !stack.empty() && stack.top() == '[')
            {
                stack.pop();
            }
            else if (c == ')' && !stack.empty() && stack.top() == '(')
            {
                stack.pop();
            }
            else
            {
                return false;
            }
        }
        if (!stack.empty())
        {
            return false;
        }
        return true;
    }
};

int main(int argc, char const *argv[])
{
    string mystring = "{(((((()})))))}";

    Solution solution;
    int ret = solution.isValid(mystring);
    cout << "ret = " << ret << endl;

    return 0;
}
