#include <iostream>
#include <cstring>
#include <new>

const int BUF = 512;
char buffer[BUF];

struct chaff
{
    char dross[20];
    int slag;
};

int main(){
    using namespace std;
    //cout<<buffer[0]<<endl;
    chaff* cs = new (buffer) chaff[2];
    strcpy(cs[0].dross,"ahaa");
    cs[0].slag = 1;
    strcpy(cs[1].dross,"bhbb");
    cs[1].slag = 2;
    for(int i=0;i<2;i++)
        cout<<cs[i].dross<<' '<<cs[i].slag<<endl;
    //cout<<buffer[0]<<endl;
    return 0;
}
