#include <limits.h> 
#include <stdio.h> 
#define Vertex 10
int printWokringSol(int distance[]) 
{ 
	printf("Vertex No. \tDistance from Starting Point\n"); 
	for (int i=0; i<Vertex; i++) {
		printf("%d \t\t %d\n",i,distance[i]); 
	}
} 
int minimumDistance(int distance[],bool str[]) 
{
	int min = INT_MAX, min_index; 
	for (int y=0; y<Vertex; y++) {
		if (str[y]==false && distance[y]<=min){
			min = distance[y], min_index = y; 
		}
	}
	return min_index; 
} 
void solve(int plottedGraph[Vertex][Vertex], int source) 
{ 
	int distance[Vertex];
	bool str[Vertex];  
	for (int i=0; i<Vertex; i++){
		distance[i] = INT_MAX, str[i] = false; 
	}
	distance[source] = 0; 
	for (int count=0; count<Vertex-1; count++){ 
		int x = minimumDistance(distance,str); 
		str[x] = true; 
		for (int y=0; y<Vertex; y++){
			if (!str[y]&&plottedGraph[x][y]&&distance[x]!=INT_MAX&&distance[x]+plottedGraph[x][y]<distance[y]){ 
				distance[y]=distance[x]+plottedGraph[x][y]; 
	    	}
		}
	} 
	printWokringSol(distance); 
} 
int main() 
{ 
	int plottedGraph[Vertex][Vertex] = 
	               {    {0,2,4,0,6,5,8,8,1,0}, 
						{2,0,1,0,0,0,1,1,2,0}, 
						{4,1,0,2,3,8,4,2,2,3}, 
						{0,0,2,0,9,1,0,0,0,6}, 
						{6,0,3,9,0,0,0,0,2,5}, 
						{5,0,8,1,0,0,2,0,4,4}, 
						{8,1,4,0,0,2,0,1,6,6}, 
						{8,1,2,0,0,0,1,0,8,1}, 
						{1,2,2,0,2,4,6,8,0,2},
						{0,0,3,6,5,4,6,1,2,0}
	                }; 
	solve(plottedGraph, 0); 
	return 0; 
} 
