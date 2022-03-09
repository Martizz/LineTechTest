
#include <iostream>

template<class n>
class MyClass {
private:
    n x;
public:
    const &getx(){
        return x;
    }
    MyClass(n _x) {
        x = _x;
    }
    MyClass(const MyClass &mc) {
        x = mc.x;
    }
};

int main()
{

}

