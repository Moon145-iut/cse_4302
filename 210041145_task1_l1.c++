#include <iostream>
#include <cstring>
using namespace std;

class medicine {
private:
    char name[100], genericName[100];
    float discountPercent, unitPrice;

public:
    void assignName(char names[100], char genericNames[100]) {
        strcpy(name, names);           
        strcpy(genericName, genericNames);  
    }

    void assignPrice(double price = 0) {
        if (price > 0) {
            unitPrice = price;
        } else {
            unitPrice = 0;  
        }
    }

    void setDiscountPercent(double percent = 5) {
        if (percent >= 0 && percent <= 45) {
            discountPercent = percent;
        } else {
            discountPercent = 5; 
        }
    }

    double getSellingPrice(int nos) { 
        return (nos * unitPrice - ((nos * unitPrice) * (discountPercent / 100)));
    }

    void display() {
        cout << name << " " << unitPrice << " " << genericName << " " << discountPercent;
    }
};

int main() {
    medicine med_name;
    char med1[] = "ace";
    char med2[] = "napa";
    med_name.assignName(med1, med2);
    med_name.assignPrice(0.8);
    med_name.setDiscountPercent(10);
    med_name.getSellingPrice(1);  
    med_name.display();

    return 0;
}
