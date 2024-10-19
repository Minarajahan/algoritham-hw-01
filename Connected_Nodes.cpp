#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    vector<int> mat[a + 1];
    for (int i = 0; i < b; i++)
    {
        int left, right;
        cin >> left >> right;
        mat[left].push_back(right);
        mat[right].push_back(left);
    }
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        if (mat[x].empty())
        {
            cout << -1 << endl;
        }
        else
        {
            sort(mat[x].rbegin(), mat[x].rend());
            for (int data : mat[x])
            {
                cout << data << " ";
            }
            cout << endl;
        }
    }
    return 0;
}