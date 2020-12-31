#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  while (n--)
  {
    string w;
    cin >> w;
    int l = w.length();
    if (l > 10)
      cout << w[0] << l - 2 << w[l - 1] << "\n";
    else
      cout << w << "\n";
  }
}