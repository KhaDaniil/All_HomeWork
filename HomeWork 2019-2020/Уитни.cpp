#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> l;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int a,b,c;
  cin>>a>>b>>c;
  if(a>b || b>c || a>c){
    cout<<"wrong data"<<'\n';
    return 0;
  }
  int n=c+1;
  l.resize(2*n);
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(i!=j){
        l[i].push_back(j);
        l[i+n].push_back(j+n);
      }
    }
  }
  for(int i=0,j=n;i<b;i++,j++){
    if(j>a+n-1)j-=a;
    l[i].push_back(j);
    l[j].push_back(i);
  }
  for(int i=0;i<l.size();i++){
    for(int j=0;j<l[i].size();j++)cout<<l[i][j]<<" ";
    cout<<'\n';
  }
}
