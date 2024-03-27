#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findTheCity(int n, vector<vector<int>> &edges, int distanceThreshold)
{
    vector<vector<int>> dis(n, vector<int>(n, INT_MAX));
    for (int i = 0; i < n; i++)
    {
        dis[i][i] = 0;
    }
    for (int i = 0; i < edges.size(); i++)
    {
        dis[edges[i][0]][edges[i][1]] = edges[i][2];
        dis[edges[i][1]][edges[i][0]] = edges[i][2];
    }
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (dis[i][k] != INT_MAX && dis[k][j] != INT_MAX && dis[i][j] > dis[i][k] + dis[k][j])
                {
                    dis[i][j] = dis[i][k] + dis[k][j];
                }
            }
        }
    }
    int cityans = 0;
    int noOfCity = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int temp = 0;
        for (int j = 0; j < n; j++)
        {
            if (dis[i][j] <= distanceThreshold)
            {
                temp++;
            }
        }
        if (temp <= noOfCity)
        {
            noOfCity = temp;
            cityans = i;
        }
    }
    return cityans;
}

int main()
{
    return 0;
}