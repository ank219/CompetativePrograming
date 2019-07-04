#include <iostream>
using namespace std;

int result = 0;

bool isItSafe(int i, int j, int n,int m) {
	return i>=0 and j>=0 and i<n and j<m;
}


void ratInMaze(char **maze, int **visited, int n,int m, int i, int j) {
	if(maze[n-1][m-1] == 'X')
	{
		cout<<-1;
		return;
	}
	if(i == n-1 and j == m-1) {
		for(int k=0;k<n;k++) {
		for(int l=0;l<m;l++) {

			cout<<visited[k][l];
		}
	}
		return;
	}
	if(!isItSafe(i, j, n,m)) {
		return;
	}
	// Backtracking

	visited[i][j] = 1;
	// Work

	//UP
	if(isItSafe(i-1, j, n,m) and maze[i-1][j] == 0 and visited[i-1][j]=='O'){
		ratInMaze(maze, visited, n,m, i-1, j);
	}
	//RIGHT
	if(isItSafe(i, j+1, n,m) and maze[i][j+1] == 0 and visited[i][j+1]=='O'){
		ratInMaze(maze, visited, n,m,i, j+1);
	}
	//DOWN
	if(isItSafe(i+1, j, n,m) and maze[i+1][j] == 0 and visited[i+1][j]=='O'){
		ratInMaze(maze, visited, n,m, i+1, j);
	}
	//LEFT
	if(isItSafe(i, j-1, n,m) and maze[i][j-1] == 0 and visited[i][j-1]=='O'){
		ratInMaze(maze, visited, n,m, i, j-1);
	}
	// Now Bactrack
	visited[i][j] = 0;
}


int main()
{
	int n,m;
	cin>>n;
        cin>>m;
	char **input = new char*[n];
	int **visited = new int*[n];
	for(int i=0;i<n;i++) {
		input[i] = new char[m];
		visited[i] = new int[m];
	}
	for(int i=0;i<n;i++) {
		for(int j=0;j<m;j++) {
			cin>>input[i][j];
			visited[i][j] = 0;
		}
	}
	ratInMaze(input, visited, n,m, 0, 0);
	return 0;
}
