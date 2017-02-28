#include <stdio.h>
#include <iostream>

#define N  101             // 101
#define INF  1000          // define infinity of weight C

using namespace std;

void main(){
	int n, m, n1;
	int weight[N][N], dis[N];
	int visited[N];
	int u, v, w;
	int min;

	// determine the beginning of the iteration
	while (1)
	{
		cin >> n >> m;
		n1 = n;
		if (n == 0 && m == 0)
			break;
		while (m)
		{
			cin >> u >> v >> w;
			weight[u][v] = weight[v][u] = w;
			m--;
		}
		for (int i = 1; i <= n; i++)
		{
			dis[i] = weight[1][i];
		}

		// there is no possibility that target is equal to source in this case.
		for (int i = 1; i <= n; i++)
		{
			visited[i] = 0;
		}
		visited[1] = 1;

		while (n1)
		{
			//visited[n] = 0;
			min = INF;
			for (int i = 1; i <= n; i++)
			{
				if (visited[i] == 0 && dis[i] < min)
				{
					min = dis[i];
					u = i;
				}
			}
			visited[u] = 1;
			for (v = 1; v <= n; v++)
			{
				if (weight[u][v] < INF)
				{
					if (dis[v]>dis[u] + weight[u][v])
					{
						dis[v] = dis[u] + weight[u][v];
					}
				}
			}
			n1--;
		}
		

	}
	cout << dis[n];

}