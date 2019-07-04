/*You are required to complete this method*/

int hist(int arr[], int n)
{
	int ans = INT_MIN;
	stack<int> s;
	s.push(0);
	for(int i=1; i<n; i++)
	{
		if(arr[s.top()] <= arr[i]) s.push(i);
		else
		{
			while(!s.empty() && (arr[s.top()] > arr[i]))
			{
				int x = s.top();
				s.pop();
				int y = s.empty()?i:(i-s.top()-1);
				ans = max(ans, arr[x]*y);
			}
			s.push(i);
		}
	}

	while(!s.empty())
	{
		int x = s.top();
		s.pop();
		int y = s.empty()?n:(n-s.top()-1);
		ans = max(ans, arr[x]*y);
	}
	return ans;
}

int maxArea(int M[MAX][MAX],int n,int m)
{
	int ans = hist(M[0], m);
	
	for(int i=1; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if(M[i][j] >= 1) M[i][j]+=M[i-1][j];
		}
		ans = max(ans, hist(M[i], m));
	}
	
	return ans;
}

