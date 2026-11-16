#include <bits/stdc++.h>
using namespace std;

int main() {
    int m;
    cin >> m;
    int d[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int s = 0;
    for (int i = 1; i < m; i++) {
        s += d[i];
    }
    int st = (s + 2) % 7;
    char a[6][7][5];
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 7; j++) {
            for (int k = 0; k < 4; k++) {
                a[i][j][k] = ' ';
            }
        }
    }
    int x = 1;
    int r = 0;
    for (int c = st; x <= d[m]; c++) {
        if (c == 7) {
            c = 0;
            r++;
        }
        string t = to_string(x);
        for (int k = 0; k < t.size(); k++) {
            a[r][c][3 - t.size() + k] = t[k];
        }
        x++;
    }
    cout << "MON TUE WED THU FRI SAT SUN" << endl;
    for (int i = 0; i < 6; i++) {
        int f = 0;
        for (int j = 0; j < 7; j++) {
            if (a[i][j][0] != ' ' || a[i][j][1] != ' ' || a[i][j][2] != ' ') {
                f = 1;
            }
        }
        if (f == 1) {
            for (int j = 0; j < 7; j++) {
                cout << a[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}
