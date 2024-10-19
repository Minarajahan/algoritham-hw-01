#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int mat[a][a];
    memset(mat, 0, sizeof(mat));
    for (int i = 0; i < b; i++)
    {
        int left, right;
        cin >> left >> right;
        mat[left][right] = 1;
    }
    int q;
    cin >> q;
    while (q--)
    {
        int x, y;
        cin >> x >> y;
        if (x == y or mat[x][y] == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}