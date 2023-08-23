#include <iostream>
using namespace std;

class Timer {
private:
    int hour, minutes, second;

public:
    Timer(int h, int m, int s) : hour(h), minutes(m), second(s) {}

    int getHours() {
        return hour;
    }

    int getMinutes() {
        return minutes;
    }

    int getSeconds() {
        return second;
    }

    void reset(int h, int m, int s) {
        hour = (hour + h) % 24;
        minutes = (minutes + m) % 60;
        second = (second + s) % 60;
    }

    void advance(int h, int m, int s) {
        hour = (hour + h) % 24;
        minutes = (minutes + m) % 60;
        second = (second + s) % 60;
    }

    void print() {
        cout << hour << ":" << minutes << ":" << second << endl;
    }
};

int main() {
    Timer time(12, 30, 39);
    time.print();

    time.reset(2, 45, 20);
    time.print();

    time.advance(1, 15, 0);
    time.print();

    return 0;
}
