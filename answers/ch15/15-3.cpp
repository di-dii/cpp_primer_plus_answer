#include <iostream>
#include <stdexcept>
#include <cmath> // or math.h, unix users may need -lm flag
#include <string>
#include <cstring> 

class bad_hmean:public std::logic_error{
private:
    double v1,v2;
    char *s;
public:
    const char * what(){return s;}
    bad_hmean(double a,double b):v1(a),v2(b),logic_error(""){
       std::string st = "hmean("+std::to_string(v1)+", "+std::to_string(v2)+"): invalid arguments: a = -b\n";
       s = new char[st.size()+1];
       std::strcpy(s, st.c_str());  
    }
    ~bad_hmean(){delete[] s;}
};

class bad_gmean:public std::logic_error{
private:
    double v1,v2;
    char *s;   
public:
    const char * what(){return s;}
    bad_gmean(double a,double b):v1(a),v2(b),logic_error(""){
        std::string st = "gmean("+std::to_string(v1)+", "+std::to_string(v2)+"): arguments should be >= 0\n";
        s = new char[st.size()+1];
        std::strcpy(s, st.c_str());  
    }
    ~bad_gmean(){delete[] s;}
};




// function prototypes
double hmean(double a, double b);
double gmean(double a, double b);
int main()
{
    using std::cout;
    using std::cin;
    using std::endl;
    
    double x, y, z;

    cout << "Enter two numbers: ";
    while (cin >> x >> y)
    {
        try {                  // start of try block
            z = hmean(x,y);
            cout << "Harmonic mean of " << x << " and " << y
                << " is " << z << endl;
            z = gmean(x,y);
            cout << "Geometric mean of " << x << " and " << y
                << " is " << z << endl;
            cout << "Enter next set of numbers <q to quit>: ";
        }// end of try block
        catch (bad_hmean & bg)    // start of catch block
        {
            cout<<bg.what();
            cout << "Sorry, you don't get to play any more.\n";
            break;
        }                  
        catch (bad_gmean & hg) 
        {
            cout << hg.what();
            cout << "Sorry, you don't get to play any more.\n";
            break;
        } // end of catch block
    }
    cout << "Bye!\n";
    // cin.get();
    // cin.get();
    return 0;
}

double hmean(double a, double b)
{
    if (a == -b)
        throw bad_hmean(a,b);
    return 2.0 * a * b / (a + b);
}

double gmean(double a, double b)
{
    if (a < 0 || b < 0)
        throw bad_gmean(a,b);
    return std::sqrt(a * b); 
}