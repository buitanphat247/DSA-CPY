#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    
    int D = a * e - b * d;
    int Dx = c * e - b * f;
    int Dy = a * f - c * d;
    
    if (D != 0) {
        double x = (double)Dx / D;
        double y = (double)Dy / D;
        cout << fixed << setprecision(2) << x << " " << y << endl;
    } else {
        if (Dx == 0 && Dy == 0) {
            cout << "VOSONGHIEM" << endl;
        } else {
            cout << "VONGHIEM" << endl;
        }
    }
    return 0;
}
