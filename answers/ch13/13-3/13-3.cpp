#include "dma.h"
const int NUM = 4;

int main(){
    using std::cin;
    using std::cout;
    using std::endl;

    dmaABC * p_dmas[NUM];
    char temp_label[40];
    int temp_rating;
    char temp_color[40];
    char temp_style[40];
    int kind;

    for(int i=0;i<NUM;i++){
        cout<<"Enter label: ";
        cin>>temp_label;
        cout<<"Enter rating: ";
        cin>>temp_rating;
        cout<<"Enter 1 for baseDMA, 2 for lacksDMA, or 3 for hasDMA: ";
        while(cin>>kind && (kind != 1 && kind != 2 && kind !=3))
            cout << "Enter either 1, 2, or 3:";
        if(kind==1)
            p_dmas[i] = new baseDMA(temp_label,temp_rating);
        else if(kind==2){
            cout<<"Enter the color: ";
            cin>>temp_color;
            p_dmas[i] = new lacksDMA(temp_color,temp_label,temp_rating);          
        }else if(kind==3){
            cout<<"Enter the style: ";
            cin>>temp_style;
            p_dmas[i] = new hasDMA(temp_style,temp_label,temp_rating);
        }
    }
    cout<<endl;
    for(int i=0;i<NUM;i++){
        p_dmas[i]->View();
        cout<<endl;
    }
    for(int i=0;i<NUM;i++){
        delete p_dmas[i];
    }
    cout<<"\nDone.";

    return 0;
}