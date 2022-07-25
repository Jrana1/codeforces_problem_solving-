// problem: https://codeforces.com/problemset/problem/546/A
#include <iostream>
using namespace std;
long long fun(int k, long long n, int w)
{
    long long sum = 0;
    for (int i = 1; i <= w; i++)
    {
        sum += k * i;
    }
    return sum - n;
}
int main()
{
    int k, w;
    long long n;
    cin >> k >> n >> w;
    cout << fun(k, n, w) << endl;

    return 0;
}