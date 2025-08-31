#include <iostream>
using namespace std;

int main() {
    char s[100];
    cout << "Enter the string: ";
    cin >> s;

    int n = 0;
    while (s[n] != '\0') n++;

    bool ok = false;

    for (int i = 1; i < n-1 && !ok; i++) {
        for (int j = i+1; j < n && !ok; j++) {
            char *x = s;       // first part
            char *y = s + i;   // second part
            char *z = s + j;   // third part

            int xl = i;
            int yl = j - i;
            int zl = n - j;

            if ((xl >= yl && x[0]==y[0] && zl >= yl && z[0]==y[0]) ||
                (yl >= xl && y[0]==x[0] && zl >= xl && z[0]==x[0]) ||
                (zl >= xl && z[0]==x[0] && yl >= zl && y[0]==z[0])) {
                ok = true;
            }
        }
    }

    if (ok) cout << "YES\n";
    else cout << "NO\n";
}
