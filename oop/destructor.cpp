#include <iostream>
#include <vector>
using namespace std;

class Demo {
public:
    Demo() {
        cout << "Constructor\n";
    }
    ~Demo() {
        cout << "Destructor\n";
    }
};

int main() {
    vector<Demo> v;
    v.push_back(Demo());
    v.push_back(Demo());

    cout << "End of main\n";
}
