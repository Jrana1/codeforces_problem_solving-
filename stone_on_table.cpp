#include <iostream>
#include <string>
using namespace std;
// problem link:https://codeforces.com/problemset/problem/266/A
int fun(string str)
{
    int count = 0;
    for (int i = 0; i < str.size() - 1; i++)
    {
        if (str.at(i) == str.at(i + 1))
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    cout << fun(str) << endl;

    return 0;
}