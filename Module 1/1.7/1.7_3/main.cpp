#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a,b,c;
    cout << "Input coefficients a, b and c into equation: ax2 + bx + c = 0" <<endl;
    cout << "Coefficient a = ";
    cin >> a;
    cout << "Coefficient b = ";
    cin >> b;
    cout << "Coefficient c = ";
    cin >> c;
    
    // Checking if a == 0
    if (a == 0){
        cout << "a = 0\nPlease restart program!";
    }
    else{
        // Find D = b^2 - 4ac
        int D = pow(b, 2) - 4*a*c;
        cout << "D = " + to_string(D) <<endl;

        // Find roots of equation
        float x, x1, x2;

        if (D == 0){
            x = -b / (2 * a);
            cout << "Result\nx = " + to_string(x) <<endl;
        }
        else if (D > 0){
            x1 = (-b + sqrt(D)) / (2 * a);
            x2 = (-b - sqrt(D)) / (2 * a);
            cout << "Result\nx1 = " + to_string(x1) + "\n" + "x2 = " + to_string(x2)<<endl;
        }
        else if (D < 0){
            cout << "Equation doesn't have an answer!";
        }
    }

    return 0;
}
