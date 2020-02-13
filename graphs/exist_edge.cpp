/**
 * HackerEarth : Nathan Kimutai
 * url : https://www.hackerearth.com/practice/algorithms/graphs/graph-representation/tutorial/
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,nodes,edges;
    cin>>nodes>>edges;
    int Q;
    int a,b;
    bool A[1001][1001];
    
    for(int i = 0; i < nodes; ++i){
        for(int j=0; j < nodes; ++j){
            A[i][j] = false;
        }
    }
    
    for(int e = 0; e < edges; e++ ){
        cin>>x>>y;
        A[x][y] = true;
    }
    cin>>Q;
    for(int x = 0; x < Q; ++x){
        cin>>a>>b;
        if(A[a][b] == true){
            cout<<"YES"<<endl;
        }else {
            cout << "NO"<<endl;
        }
    }
    
    
    
    
}
