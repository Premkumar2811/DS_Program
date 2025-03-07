#include<iostream.h>
#include<conio.h>
	void DFS(int);
	int G[10][10],visited[10],n;
	void main()
{
	int i,j;
	cout<<"Enter number of vertices:";
	cin>>n;
	cout<<"\n Enter adjecency matrix of the graph:";
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	cin>>G[i][j];
	for(i=0;i<n;i++)
	visited[i]=0;
	DFS(0);
}
	void DFS(int i)
{
	int j;
	cout<<"\n"<<i;
	visited[i]=1;
	for(j=0;j<n;j++)
	if(!visited[j]&&G[i][j]==1)
	DFS(j);
}
