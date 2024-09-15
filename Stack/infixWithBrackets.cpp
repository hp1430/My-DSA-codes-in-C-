#include <iostream>
#include <stack>
using namespace std;
int prio(char ch)
{
    if (ch == '+' || ch == '-')
        return 1;
    else
        return 2;
}
int solve(int val1, int val2, int op)
{
    if (op == '+')
        return val1 + val2;
    else if (op == '-')
        return val1 - val2;
    else if (op == '*')
        return val1 * val2;
    else
        return val1 / val2;
}
int main()
{
    string s = "(7+9)*4/8-3";
    stack<int> val;
    stack<char> op;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 48 && s[i] <= 57)
            val.push(s[i] - 48);
        else
        {
            if (op.size() == 0 || prio(op.top()) < prio(s[i]))
                op.push(s[i]);
            else if (s[i] == '(')
                op.push(s[i]);
            else if (op.top() == '(')
                op.push(s[i]);
            else if (s[i] == ')')
            {
                while (op.top() != '(')
                {
                    char c = op.top();
                    op.pop();
                    int val1 = val.top();
                    val.pop();
                    int val2 = val.top();
                    val.pop();
                    int ans = solve(val1, val2, c);
                    val.push(ans);
                }
                op.pop();
            }

            else if (prio(op.top()) < prio(s[i]))
                op.push(s[i]);
            else
            {
                while (op.size() > 0 && prio(op.top()) >= prio(s[i]))
                {
                    char c = op.top();
                    op.pop();
                    int val1 = val.top();
                    val.pop();
                    int val2 = val.top();
                    val.pop();
                    int ans = solve(val1, val2, c);
                    val.push(ans);
                }
                op.push(s[i]);
            }
        }
    }
    while (op.size() > 0)
    {
        char c = op.top();
        op.pop();
        int val1 = val.top();
        val.pop();
        int val2 = val.top();
        val.pop();
        int ans = solve(val1, val2, c);
        val.push(ans);
    }
    cout << "Answer is: " << val.top() << endl;
    cout<<(7+9)*4/8-3<<endl;
}