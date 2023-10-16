#include "sales.h"


int main(){
    using namespace SALES;
    Sales s1;
    double ar[] = {5,3,4};
    Sales s2(ar,3);
    s1.showSales();
    s2.showSales();
    return 0;
}
