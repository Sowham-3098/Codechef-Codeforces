#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    char temp;
    string s[n];
    for (long int i = 0; i < n; i++)
    {
      cin >> s[i];
    }
    sort(s, s + n);

    cout << s << endl;
  }
  return 0;
}