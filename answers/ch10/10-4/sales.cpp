#include <iostream>
#include "sales.h"

namespace SALES{

    Sales::Sales(const double ar[],int n){
        n = n<=QUARTERS ? n:QUARTERS;
        if(n>0) max = min = ar[0];
        else return;
        double sum = 0;
        for(int i=0;i<n;i++){
            sum += ar[i];
            sales[i] = ar[i];
            max = max<ar[i] ? ar[i]:max;
            min = min>ar[i] ? ar[i]:min;
        }
        average = sum/n;
        for(int i=n;i<QUARTERS;i++)
            sales[i]=0;
    }

    Sales::Sales(){
        using namespace std;
        double sum = 0;
        for(int i=0;i<QUARTERS;i++){
            cout<<"please enter sales: ";
            cin>>sales[i];
            sum += sales[i];
        }
        max = min = sales[0];
        for(int i=0;i<QUARTERS;i++){
            max = max<sales[i] ? sales[i]:max;
            min = min>sales[i] ? sales[i]:min;
        }
        average = sum/QUARTERS;
    }

    void Sales::showSales(){
        using std::cout;
        using std::endl;
        cout<<"the sales are: \n";
        for(int i=0;i<QUARTERS;i++)
            cout<<sales[i]<<' ';
        cout<<endl;
        cout<<"average is: "<<average<<endl;
        cout<<"max is: "<<max<<endl;
        cout<<"min is: "<<min<<endl;
    }
    
}