#include <iostream>

using namespace std;

int main()
{
    //1 task
    /*cout << "Enter a symbol: ";
    char a;
    cin >> a;
    cout << "1-Vertikal; 2-Horizontal." << endl;
    int b;
    cin >> b;
    cout << "length: ";
    int c;
    cin >> c;
    if (b == 1) {
        for (int i = 0; i < c; i++) {
            cout << a << endl;
        }
    }
    else if (b == 2) {
        for (int i = 0; i < c; i++) {
            cout << a;
        }
    }
    else {
        cout << "You wrote something wrong";
    }*/


    //2 task
    /*srand(time(0));
    int sumP = 0;
    int sumC = 0;
    int numP;
    int numC;
    int f = 0;
    for (int j = 0; j < 3; j ++) {
        for (int i = 0; i < 2; i++) {
            numC = rand() % 6 + 1;
            sumC += numC;
            cout << i + 1 << " num of computer is " << numC << endl;
        }
        cout << "Your turn" << endl;
        cout << "Print 1 to start" << endl;
        cin >> f;
        if (f == 1) {
            for (int i = 0; i < 2; i++) {
                numP = rand() % 6 + 1;
                sumP += numP;
                cout << i + 1 << " your num is " << numP << endl;
            }
        }
        cout << endl;
    }
    if (sumP > sumC) {
        cout << "You win!";
    }
    else if (sumP < sumC) {
        cout << "You lost!";
    }*/


    //3 task
    /*srand(time(0));
    int a[10];
    for (int i = 0; i < 10; i++) {
        a[i] = rand();
    }
    int min = a[1];  int max = a[1];
    for (int i = 0; i < 10; i++) {
        if (a[i] > max) {
            max = a[i];
        }
        if (a[i] < min) {
            min = a[i];
        }
    }
    cout << "Min - " << min << ". Max - " << max;*/


    //4 task
    /*int a[13];
    for (int i = 1; i < 13; i++) {
        cin >> a[i];
    }
    int min = a[1];  int max = a[1];
    int b, c;
    cin >> b;
    cin >> c;
    for (int i = b; i <= c; i++) {
        if (a[i] > max) {
            max = a[i];
        }
        if (a[i] < min) {
            min = a[i];
        }
    }
    cout << "Min - " << min << ". Max - " << max;*/


    //5 task
    /*int a[10] = {-3, 4, 5, 10, -5, 2, -3, 64, 10, 10};
    int min = a[1];  int max = a[1];
    int x, y, g, xM = -1, yM = -1;
    int sumM = 0;
    int d = 1, dd = 1, dM = 0;
    for (int i = 0; i < 10; i++) {
        if (a[i] > max) {
            max = a[i];
            x = i;
        }
        if (a[i] < min) {
            min = a[i];
            y = i;
        }
        if (a[i] < 0) {
            sumM += a[i];
            if (xM == -1) {
                xM = i;
            }
            else if (yM == -1) {
                yM = i;
            }
        }
        if (a[i] % 2 == 0) {
            d *= a[i];
        }
    }
    if (y > x) {
        g = x;
        x = y;
        y = g;
    }
    for (int i = y+1; i < x; i++) {
        dd *= a[i];
    }
    for (int i = xM+1; i < yM; i++) {
        dM += a[i];
    }
    cout << sumM << " " << dd << " " << d << " " << dM;*/
}