#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double P, S; 
    int n, k;

    S = 0;
    n = 1;
    while (n <= 10) {
        P = 1;  
        k = 1;  
        while (k <= n) {
            P *= 1.0 / (k * k);  
            k++;
        }
        S += sin(P) / (n + pow(P, 1.0 / 2 ));  
        n++;  
    }
    cout  << S << endl;

    S = 0;
    n = 1;
    do {
        P = 1;
        k = 1;
        do {
            P *= 1.0 / (k * k);
            k++;
        } while (k <= n);
        S += sin(P) / (n + pow(P, 1.0 / 2));
        n++;
    } while (n <= 10);
    cout  << S << endl;


    S = 0;
    for (n = 1; n <= 10; n++) {
        P = 1;
        for (k = 1; k <= n; k++) {
            P *= 1.0 / (k * k);
        }
        S += sin(P) / (n + pow(P, 1.0 / 2));
    }
    cout  << S << endl;

    S = 0;
    for (n = 10; n >= 1; n--) {
        P = 1;
        for (k = 1; k <= n; k++) {
            P *= 1.0 / (k * k);
        }
        S += sin(P) / (n + pow(P, 1.0 / 2));
    }
    cout  << S << endl;

    return 0;
}
