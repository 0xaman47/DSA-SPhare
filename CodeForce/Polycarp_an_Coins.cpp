/*
Question : 
*/

/*
Solution
*/

#include<bits/stdc++.h>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define arrInp for(int i=0;i<n;i++) cin >> arr[i];
#define arrOut(k) for(int i=0;i<n;i++) cout << arr[i] <<  k;
#define el cout << endl;
 
void fun(){
    int n;
    cin>>n;
    int num = n;
    num = num/3;
    if(n % 3 == 1){
        cout<<num+1<<" "<<num<<endl;
    }
    else if(n % 3 == 2){
        cout<<num<<" "<<num + 1<<endl;
    }
    else{
        cout<<num<<" "<<num<<endl;
    }
}

int main(){

   int t = 1;
   cin >> t;
   while(t--){
    fun();
   }

return 0;
}