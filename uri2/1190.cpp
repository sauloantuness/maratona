#include <iostream>
#include <iomanip>
#include <cstdio>
 
using namespace std;
 
int main(){
    char c;
    float m[12][12];
 
    cin >> c;
 
    for (int i = 0; i < 12; ++i)
        for (int j = 0; j < 12; ++j)
            cin >> m[i][j];
     
    float s = 0;
 
    for (int i = 1; i < 6; ++i)
        for (int j = 12 -i; j < 12; ++j)
            s += m[i][j];

    for (int i = 6; i < 11; ++i)
        for (int j = i + 1; j < 12; ++j)
            s += m[i][j];

    cout << fixed << setprecision(1);
 
    if(c == 'S')
        cout << s << endl;
    else
        cout << s/30.0 << endl;
}