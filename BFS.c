#include <stdio.h>
#include <stdlib.h>
#define graph[MAX][MAX] 100
int queue[MAX],front=-1,rear=-1,vistied[i],graph[i][j],adj[MAX][MAX];
int adj[10][10];
void bfs(int v){
if(adj[i][v]<visited[i]){
queue[++rear]=1;
}
if(front<=rear){
bfs(queue[front++])=1;
}
return;
}
int main(){
int n;
printf("Enter the number of vertices:")
scanf("%d",&n);
for(int i=0;i<n;i++)
{
if(graph[i][j] && !visited[i]){
queue[i]=1;
visited[i]=1;
printf("Enter the number of edges:")
scanf("%d",&a[i]);
if(visited[i]){
for(int i=0;i<n;i++)
{
printf("%d\t",i);
else{
printf("%d",i+1);
}
}
printf("BFS is not possible, Not for all the nodes: ");
}
return 0;
}
}
}
