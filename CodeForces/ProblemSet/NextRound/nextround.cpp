#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, k, cnt = 0;
  cin >> n >> k;
  int arr[n];

  for (int i = 0; i < n; i++)
    cin >> arr[i];

  for (int i = 0; i < n; i++)
    if (arr[i] >= arr[k - 1] && arr[i] > 0)
      cnt++;
  cout << cnt;
}