#include <iostream> 
using namespace std;

class Shape {
protected:
    int width, height;
public:
    Shape(int a = 0, int b = 0)
    {
        width = a;
        height = b;
    }
    virtual int area()
    {
        cout << "Parent class area :" << endl;
        return width * height;
    }
};

int main()
{
    Shape sh(10, 9);
    cout << sh.area();
}