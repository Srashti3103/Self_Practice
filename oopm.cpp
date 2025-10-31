//compariison of hero and villian using orivate inheritance
#include<iostream>
using namespace std;

class hero {
public:
    int power;
    void setPower(int p) {
        power = p;
    }
};

class villain {
public:
    int power;
    void setPower(int p) {
        power = p;
    }
};

class comparison : private hero, private villain {
public:
    void compare(int h, int v) {
        hero::setPower(h);
        villain::setPower(v);

        if (hero::power > villain::power) {
            cout << "Hero is stronger" << endl;
        } else if (hero::power < villain::power) {
            cout << "Villain is stronger" << endl;
        } else {
            cout << "Both are equally strong" << endl;
        }
    }
};

int main() {
    comparison c;
    int hPower, vPower;
    
    cout << "Enter Hero's power: ";
    cin >> hPower;
    
    cout << "Enter Villain's power: ";
    cin >> vPower;

    c.compare(hPower, vPower);
    return 0;
}
