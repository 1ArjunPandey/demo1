#include<iostream>

using namespace std;

int main()
{
	int v, e;
	cin >> v >> e;
	
	int g[v+1][v+1];
	for(int i = 0; i<= v; i++){
		for(int j = 0; j<= v; j++) {
			g[i][j] = 0;
		}
	}
	
	for(int i = 0; i<e; i++)
	{
		int x, y;
		cin >> x >> y;
		g[x][y] = 1;
		g[y][x] = 1;
		
		
	}
	
	for(int i = 0; i<=v; i++){
		for(int j = 0; j<=v; j++){
			cout<<g[i][j]<<" ";
		
		}
		cout<<endl;
	}
	// this is extra comment
	return 0;
}
