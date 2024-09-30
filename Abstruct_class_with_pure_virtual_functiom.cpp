#include <iostream>
using namespace std;

class AbstractShape {
public:
    virtual void draw() = 0; 
};

class Square : public AbstractShape {
public:
    void draw() override {
        cout << "Drawing square" << endl;
    }
};

int main() {
    Square sq;
    sq.draw();
    return 0;
}
