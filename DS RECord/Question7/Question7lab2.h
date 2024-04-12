
#include <iostream>
using namespace std;
template<typename T>
class TwoWayStack {
private:
    T* arr;
    int top1, top2;

public:
    TwoWayStack();
    ~TwoWayStack();
    void push1(T val);
    void push2(T val);
    T pop1();
    T pop2();
    bool isEmpty1();
    bool isEmpty2();
};




