#include <iostream>
using namespace std;
int f1(int a, int b) {
    return a + b;
}
int f2(int a, int b) {
    return a - b;
}
int f3(int a, int b) {
    return a * b;
}
double f4(int a, int b) {
    if (b != 0) {
        float a1 = a;
        return a1 / b;
    }
    else {
        return -9999;
    }
}
int main()
{
    int(*pf1)(int a, int b);
    double(*pf2)(int a, int b);
    int a;
    int b;
    char c;
    while (1) {
        std::cin >> a;
        std::cin >> b;
        std::cin >> c;
        if (c == '+') {
            pf1 = f1;
            cout << pf1(a, b) << endl;
        }
        if (c == '-') {
            pf1 = f2;
            cout << pf1(a, b) << endl;
        }
        if (c == '*') {
            pf1 = f3;
            cout << pf1(a, b) << endl;
        }
        if (c == '/') {
            pf2 = f4;
            cout << pf2(a, b) << endl;
        }
        if ((c!='+')&&(c!='-')&&(c!='*')&&(c!='/')) {
            break;
        }
    }
    return 0;
}