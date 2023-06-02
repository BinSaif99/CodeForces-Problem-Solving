//#include <bits/stdc++.h>
//using namespace std;
//int main() {
//    int n;
//    cin >> n;
//    int gold = ceil(n / 12.0);
//    int silver = ceil(n / 4.0);
//    int bronze = ceil(n / 2.0);
//    while (gold + silver + bronze > n) {
//        if (gold > 1) gold--;
//        else if (silver > 1) silver--;
//        else bronze--;
//    }
//    cout << gold << " " << silver - gold << " " << bronze - silver << endl;
//    return 0;
//}
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;

    int gold = ceil(n / 12.0);
    int silver = ceil(n / 4.0);
    int bronze = ceil(n / 2.0);

    while (gold + silver + bronze > n) {
        if (silver >= gold && silver >= bronze) {
            silver--;
        } else if (gold >= silver && gold >= bronze) {
            gold--;
        } else {
            bronze--;
        }
    }

    cout << gold << " " << silver - gold << " " << bronze - silver << endl;

    return 0;
}
