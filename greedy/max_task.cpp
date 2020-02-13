#include <bits/stdc++.h>
using namespace std;

int MAX = 150;

int A[MAX];

int main()
{
	int N,T,current_time = 0; max_task =0;
	cin>>N>>T;
	for(int i = 0; i < N; i++)
	{
		cin>>A[i];
	}
	sort(A,A+N);
	for(int i=0; i < N; i++)
	{
		current_time + = A[i];
		if (current_time > T)
			break;
		mask_task++;
	}
}

