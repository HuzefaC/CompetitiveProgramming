#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, cnt=0;
  cin >> n;
  string s;

  while (n--){
    cin >> s;
    if (s[1] == '+'){
      cnt++;
    }
    else
    {
      cnt--;
    }
    
  }
  cout << cnt;
}