#include<bits/stdc++.h>
using namespace std;
int main(){
  int N;
  cin>>N;
  // cout << N <<endl;
  
  vector<int> A(N);
  vector<int> B(N);
  
  for(int i = 0; i<N;i++){
    cin >> A[i]; 
  }
  
  for(int i = 0; i<N; i++){
   cin >> B[i];
  }
  
  // for(int val: A){
  //   cout << val << " ";
  // }
  // cout << endl;
  // for(int val: B){
  //   cout << val << " ";
  // }
  // cout << endl;
  
  vector<int> C;
  
  // cout << C.size();
  
  C = B ;
  
  // cout<<endl;
  
  for(int i = 0; i<C.size(); i++){
    cout << C[i] << " " ;
  }
  // cout<< endl;
  // cout << C.size();
  
  C = A;
  
  for(int i= 0; i<C.size(); i++){
    cout << C[i] << " ";
  }
  
  cout << endl;
  
  return 0;
}