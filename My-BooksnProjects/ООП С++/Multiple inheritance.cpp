#include <iostream>
using namespace std;

class Horse{
    public:
        void move(){
            cout << "*horse walks " << speed << " blocks per second*" << endl;
        }
        void jump(){
            cout << "*horse jumps " << jumpPower << " high*" << endl;
        }

        double speed;
        double jumpPower;     

        Horse(double speed, double jumpPower){
            this->speed = speed;
            this->jumpPower = jumpPower;
        }
};

class Donkey{
    public:
        void carryItems(){
            cout << "*donkey carries " << loadCapacity << " items*" << endl;
        }

        int loadCapacity;

        Donkey(int loadCapacity){
            this->loadCapacity = loadCapacity;
        }
};

class Mule : public Horse, public Donkey{
    public:
        void move(){
            cout << "*mule walks " << speed << " blocks per second*" << endl;
        }
        void jump(){
            cout << "*mule jumps " << jumpPower << " high*"<< endl;
        }
        void carryItems(){
            cout << "*mule carries " << loadCapacity << " items*" << endl;
        }

        Mule(double speed, double jumpPower, int loadCapacity) : Horse(speed, jumpPower), Donkey(loadCapacity){

        }
};

int main(int argc, char const *argv[]){
    Horse mom(16, 4);
    mom.move();
    mom.jump();
    cout<< "=================================" << endl;
    Donkey dad(15);
    dad.carryItems();
    cout<< "=================================" << endl;
    Mule child(20, 5, 21);
    child.move();
    child.jump();
    child.carryItems();


    return 0;
}
