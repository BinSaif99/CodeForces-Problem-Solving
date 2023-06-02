#include <bits/stdc++.h>

using namespace std;


int main() {

    int X, Y;
    std::cin >> X >> Y;


    int rem = Y % X;


    int choco = (rem == 0) ? 0 : (X - rem);

    std::cout << choco << std::endl;

    return 0;
}

