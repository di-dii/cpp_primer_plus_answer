#include "sales.h"


int main(){
    using namespace SALES;
    Sales s1,s2;
    setSales(s1);
    double ar[] = {5,3,4};
    setSales(s2,ar,3);
    
    showSales(s1);
    showSales(s2);
    return 0;
}
