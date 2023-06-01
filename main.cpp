#include <iostream>

class Road {
    public:
        double length;
        int width;
        Road();
};

Road::Road(){
    length = 0.0;
    width = 0.0;
}
int main() {
    using namespace std;
    cout << "Test v2.01: OK" << endl;
    Road road;
    cout << "road.length: " << road.length << endl;
    cout << "road.width: " << road.width << endl;
    road.length = 300;
    road.width = 3;
    cout << "After accessing in program:\n";
    cout << "road.length: " << road.length << endl;
    cout << "road.width: " << road.width << endl;

    return 0;
}
