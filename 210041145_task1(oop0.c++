#include<iostream>
#include<string>
#include<cmath>
using namespace std;

class Calculator {
private:
    int Calc;
    static int value;
public:
    Calculator(int val) : Calc(val) {
        value = val;  
    }

    float calculator(int val) {
        return val;
    }

    void add(int val) {
        value += val;
    }

    void subtract(int val) {
        value -= val;
    }

    void multiply(int val) {
        value *= val;
    }

    void divide(int val) {
        if (value == 0) {
            cout << "Error: divide by 0 is undefined.";
        } else {
            value = value / val;
        }
    }

    void setValue(int val) {
        value = val;
    }

    void clear() {
        value = 0;
    }

    void display() {
        cout << value << endl;
    }

    int getValue() {
        return value;
    }
};

int Calculator::value = 0; 

int main() {
    Calculator cal(10);
    cal.add(10);
    cal.subtract(42);
    cal.multiply(31);
    cal.divide(7);
    cal.display();
    return 0;
}
