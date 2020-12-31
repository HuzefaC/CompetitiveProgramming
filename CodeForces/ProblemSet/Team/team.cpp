#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t, cnt = 0;
  cin >> t;
  while (t--)
  {
    /* code */
    int p, v, t;
    cin >> p >> v >> t;

    if (p + v + t >= 2)
      cnt++;
  }
  cout << cnt;
}