#include<iostream>
#include<stdexcept>
#include <cmath> // or math.h, unix users may need -lm flag

class bad_hmean:public std::logic_error{
public:
    //const char * what(){return "hmean(): invalid arguments: a = -b\n";}
    bad_hmean():logic_error("hmean(): invalid arguments: a = -b\n"){}
};

class bad_gmean:public std::logic_error{
public:
    //const char * what(){return "gmean(): arguments should be >= 0\n";}
    bad_gmean():logic_error("gmean(): arguments should be >= 0\n"){}
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
            cout << "Try again.\n";
            continue;
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
        throw bad_hmean();
    return 2.0 * a * b / (a + b);
}

double gmean(double a, double b)
{
    if (a < 0 || b < 0)
        throw bad_gmean();
    return std::sqrt(a * b); 
}