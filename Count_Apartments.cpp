#include <bits/stdc++.h>
using namespace std;
int n, m;
vector<vector<char>> building;
const int cons = 1001;
bool visited[cons][cons];
int count_apartment = 0;

void dfs(int x, int y)
{

    int dx[] = {-1, 1, 0, 0};
    int dy[] = {0, 0, -1, 1};

    visited[x][y] = true;

    for (int i = 0; i < 4; i++)
    {
        int nr = x + dx[i];
        int nc = y + dy[i];

        if ((nr >= 0 && nr < n) && (nc >= 0 && nc < m) && building[nr][nc] == '.' && !visited[nr][nc])
        {
            dfs(nr, nc);
        }
    }
}

int main()
{
   
    memset(visited, false, sizeof(visited));
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        vector<char> a;
        for (int j = 0; j < m; j++)
        {
            char b;
            cin >> b;
            a.push_back(b);
        }
        building.push_back(a);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (building[i][j] == '.' && !visited[i][j])
            {
                dfs(i, j);
                count_apartment++;
            }
        }
    }

    cout << count_apartment << endl;
    return 0;
}