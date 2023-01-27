#include <iostream>

using namespace std;

class Complesso{

    float re;
    float im;
    
    public:
        Complesso(float = 0.0,, float = 0.0);
        float getRe();
        float getIm();
        void setRe(float r);
        void setIm(float i);
        float getModulo();
        float getFase();
        Complesso operator+(const Complesso& c);
        Complesso operator-(const Complesso& c);

        friend ostream& operator << (ostream &os, Complesso C);
        friend istream& operator >> (istream &in, Complesso C);

};

