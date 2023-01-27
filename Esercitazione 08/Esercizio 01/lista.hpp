#include <list>
#include <iostream>

using namespace std;

void init(){

    list<int> myList;

}

struct stack{

    void init();
    bool empty();
    int size();
    void clear();
    void push(int val);
    int pop();
    int top();

    private:
        node *l;

};

