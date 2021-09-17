#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
 
int main()
{
 
    float a, b, c, dt, x1, x2;
    cout << "Nhap a = ";
    cin >> a;
    cout << "Nhap b = ";
    cin >> b;
    cout << "Nhap c = ";
    cin >> c;
    if(a == 0) {
        // a== 0 phuong trinh tro thanh phuong trinh bac mot bx + c = 0
        if(b == 0) {
            if (c == 0) {
                cout << "Phuong trinh vo so nghiem" << endl;
            } else {
                cout << "Phuong trinh vo nghiem" << endl;
            }
        } else {
            cout << "Phuong trinh co nghiem duy nhat: " << -c/b << endl;
        }
    } else {
        dt = b*b - 4*a*c;
        if(dt > 0) {
            x1 = (-b+sqrt(dt))/(2*a);
            x2 = (-b-sqrt(dt))/(2*a);
            cout << "Nghiem thu nhat x1 = " << x1 << endl;
            cout << "Nghiem thu hai x2 = " << x2 << endl;
        } else if ( dt == 0) {
            cout << "Phuong trinh co nghiem kep: x1=x2 = " << -b/2*a << endl;
        } else {
            cout << "Phuong trinh vo nghiem" << endl;
        }
    }
}
