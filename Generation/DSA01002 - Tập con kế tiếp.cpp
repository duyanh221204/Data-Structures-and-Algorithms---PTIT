#include<bits/stdc++.h>
using namespace std;
int n, k, a[1002];
void tt()
{
    int x = k;
    while (x && a[x] == n - k + x) --x;
    if (!x)
    {
        x = 1;
        a[x] = 1;
    }
    else ++a[x++];
    for (int i = x; i <= k; ++i) a[i] = a[i - 1] + 1;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        cin >> n >> k;
        for (int i = 1; i <= k; ++i) cin >> a[i];
        tt();
        for (int i = 1; i <= k; ++i) cout << a[i] << " ";
        cout << "\n";
    }
}
