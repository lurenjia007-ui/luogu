#include <bits/stdc++.h>
#define int long long
using namespace std;

int a[25][25][25];

signed main() {
    int w, x, h;
    cin >> w >> x >> h;
    
    for(int i = 1; i <= w; i++) {
        for(int j = 1; j <= x; j++) {
            for(int k = 1; k <= h; k++) {
                a[i][j][k] = 1;
            }
        }
    }
    
    int q;
    cin >> q;
    for(int i = 0; i < q; i++){
        int x1, y1, z1, x2, y2, z2;
        cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
        
        for(int xs = x1; xs <= x2; xs++){
            for(int y = y1; y <= y2; y++){
                for(int z = z1; z <= z2; z++){
                    a[xs][y][z] = 0; 
                }
            }
        }
    }
    
    int sum = 0;
    for(int i = 1; i <= w; i++){
        for(int j = 1; j <= x; j++){
            for(int k = 1; k <= h; k++){
                if(a[i][j][k] == 1){
                    sum++;
                }
            }
        }
    }

    cout << sum << "\n";
    return 0;
}
