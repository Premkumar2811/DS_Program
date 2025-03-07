#include<iostream.h>
#include<conio.h>
	int mat[10][10];
	int vertices;
	int i,j;
	char alpha[28]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int visited[30];
	int Queue[30];
	int f=0,r=0;
	void QInsert(int ele)
{
	Queue[r++]=ele;
}
	int QDel()
{
	return Queue[f++];
}
	void GetGraph(int vsize)
{
	vertices=vsize;
	cout<<"\n Enter Adjency Matrix \n";
	for(i=0;i<vertices;i++)
	for(j=0;j<vertices;j++)
	cin>>mat[i][j];
}
	void ShowGraph()
{
	cout<<"\nAd jecancy Matrix is \n";
	for(i=0;i<vertices;i++)
{
	for(j=0;j<vertices;j++)
{
	cout<<mat[i][j];
}
}
	cout<<"\t";
}
	void SetNodes()
{
	for(i=0;i<vertices;i++)
	visited[i]=0;
}
	void BFS(int n)
{
	do
{
	visited[n]=1;
	cout<<"\t "<<alpha[n];
	for(i=0;i<vertices;i++)
{
	if(mat[n][i]==1 && visited[i]==0)
{
	QInsert(i);
}
}
	n=QDel();
}
	while(f<=r);
}
	void main()
{
	int size;
	int start;
	clrscr();
	cout<<"\n Enter Size of Node :";
	cin>>size;
	GetGraph(size);
	ShowGraph();
	cout<<"\n Enter Start Node :";
	cin>>start;
	BFS(start);
}
