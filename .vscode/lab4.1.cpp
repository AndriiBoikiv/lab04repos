#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int i, k, N;

    cout << "k = "; cin >> k;
    cout << "N = "; cin >> N;
    
    // 1-ий спосіб:
    double S = 0;
    i = k;
    
    while (i <= N) {
        S += sqrt(pow(sin(k), 2) + pow(cos(N/k), 2));
        i++;
    }
    cout << "1) S = " << S << endl;

    // 2-ий спосіб:
    S = 0;
    i = k;
    
    do {
        S += sqrt(pow(sin(k), 2) + pow(cos(N/k), 2));
        i++;
    } while (i <= N);
    cout << "2) S = " << S << endl;

    // 3-ій спосіб:
    S = 0;
    i = k;

    for (i=k; i <= N; i++) {
        S += sqrt(pow(sin(k), 2) + pow(cos(N/k), 2));
    }
    cout << "3) S = " << S << endl;

    // 4-ий спосіб:
    S = 0;
    i = k;

    for (i=N; i>= k; i--) {
        S += sqrt(pow(sin(k), 2) + pow(cos(N/k), 2));
    }
    cout << "4) S = " << S << endl;

    return 0;
}