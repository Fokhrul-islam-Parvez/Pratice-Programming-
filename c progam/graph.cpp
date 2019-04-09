#include<stdio.h>
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
vector<int>adj[10];
void addedge(int u,int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void bfs(int n,int src)
{
   queue<int>Q;
	Q.push(src);
	int visited[100]={0},level[100];
	int parent[100];
	visited[src]=1;
        level[src]=0;
        while(!Q.empty())
	{
		int u=Q.front();
		for(int i=0;i<adj[u].size();i++)
		{
			int v=adj[u][i];
			if(!visited[v])
			{
				level[v]=level[u]+1;
				parent[v]=u;
				visited[v]=1;
				Q.push(v);
			}
		}
		Q.pop();
	}
	for(int i=1;i<=n;i++)
		printf("%d to %d distance %d\n",src,i,level[i]);
}
int main()
{
   addedge(1,2);
   addedge(1,4);
   addedge(1,3);
   addedge(2,6);
   addedge(3,7);
   addedge(3,8);
   addedge(4,7);
   addedge(6,10);
   addedge(7,9);
   addedge(7,8);
   addedge(8,5);
   addedge(5,10);
   bfs(10,1);
}
