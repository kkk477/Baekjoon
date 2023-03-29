#include <iostream>
#include <queue>
using namespace std;

int tdata[1001][1001];
int visited[1001];
int point, line, start;
queue<int> q;
void DFS(int num);
void BFS(int num);

int main(int argc, char **argv)
{
    cin >> point >> line >> start;

    for (int i = 1; i <= line; i++)
    {
        int x, y;
        cin >> x >> y;
        tdata[x][y] = 1;
        tdata[y][x] = 1;
    }
    
    DFS(start);
    cout << endl;
    for (int i = 1; i <= point; i++)
        visited[i] = 0;

    BFS(start);
    return 0;
}

void DFS(int num)
{
    visited[num] = 1;
    cout << num << " ";
    
    for (int i = 1; i <= point; i++)
    {
        if ((tdata[num][i] == 1) && (visited[i] == 0))
            DFS(i);
    }
}

void BFS(int num)
{
    q.push(num);
    visited[num] = 1;
    cout << num << " ";

    while (!q.empty())
    {
        num = q.front();
        q.pop();

        for (int i = 1; i <= point; i++)
        {
            if ((tdata[num][i] == 1) && (visited[i] == 0))
            {
                visited[i] = 1;
                q.push(i);
                cout<< i << " ";
            }
        }
    }
}