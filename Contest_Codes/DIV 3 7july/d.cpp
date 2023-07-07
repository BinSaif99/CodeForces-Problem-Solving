#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d, h;
        cin >> n >> d >> h;
        double area = 0.0;
        for (int i = 0; i < n; i++) {
            int y;
            cin >> y;
            area += 0.5 * d * h;
        }
        cout << fixed << setprecision(6) << area << endl;
    }
    return 0;
}
