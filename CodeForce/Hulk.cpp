/*
Question : 
Dr. Bruce Banner hates his enemies (like others don't). As we all know, he can barely talk when he turns into the incredible Hulk. That's why he asked you to help him to express his feelings.

Hulk likes the Inception so much, and like that his feelings are complicated. They have n layers. The first layer is hate, second one is love, third one is hate and so on...

For example if n = 1, then his feeling is "I hate it" or if n = 2 it's "I hate that I love it", and if n = 3 it's "I hate that I love that I hate it" and so on.

Please help Dr. Banner.
Input

The only line of the input contains a single integer n (1 ≤ n ≤ 100) — the number of layers of love and hate.
Output

Print Dr.Banner's feeling in one line.
Examples
Input
Copy

1

Output
Copy

I hate it

Input
Copy

2

Output
Copy

I hate that I love it

Input
Copy

3

Output
Copy

I hate that I love that I hate it
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
    string str = "";
    for(int i = 1; i <= n; i++){

        if(i % 2 == 0){
            str = str + "I love";
        }
        else{
            str = str + "I hate";
        }
        if(i < n){
            str = str + " that ";
        }
        else{
            str = str + " it";
        }
    }
    cout<<str<<endl;
    
}

int main(){

    int t = 1; 
    //cin >> t;
    while(t--){
     fun();
    }

  return 0;
}