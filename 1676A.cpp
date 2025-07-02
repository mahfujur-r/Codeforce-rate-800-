#include <bits/stdc++ .h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        char a, b, c, d, e, f;
        cin >> a >> b >> c >> d >> e >> f;
        if (int(a) + int(b) + int(c) == int(d) + int(e) + int(f))
            cout << "Yes";
        else
            cout << "No";
        cout << "\n";
    }

    return 0;
}
