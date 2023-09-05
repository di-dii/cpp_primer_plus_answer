#include <iostream>
using namespace std;

const int Seasons = 4;
const char *Snames[4] = {"Spring", "Summer", "Fall", "Winter"};

// //a
// void fill(double *pa);
// void show(const double *pa);

// b
struct Exp {
  double exps[Seasons];
};

void fill(Exp *exp);
void show(Exp exp);

int main() {
  // a
  // double expenses[Seasons];
  // fill(expenses);
  // show(expenses);

  // b
  Exp expenses;
  fill(&expenses);
  show(expenses);
  return 0;
}

//// a
// void fill(double *pa){
//     for(int i=0;i<Seasons;i++){
//         cout<<"Enter "<<Snames[i]<<" expenses: ";
//         cin>>pa[i];
//     }
// }
// void show(const double *pa){
//     double total=0;
//     cout<<"\nExpenses\n";
//     for(int i=0;i<Seasons;i++){
//         cout<<Snames[i]<<": $"<<pa[i]<<endl;
//         total += pa[i];
//     }
//     cout<<"Total Expenses: $"<<total<<endl;
// }

// b
void fill(Exp *exp) {
  for (int i = 0; i < Seasons; i++) {
    cout << "Enter " << Snames[i] << " expenses: ";
    cin >> exp->exps[i];
  }
}
void show(Exp exp) {
  double total = 0;
  cout << "\nExpenses\n";
  for (int i = 0; i < Seasons; i++) {
    cout << Snames[i] << ": $" << exp.exps[i] << endl;
    total += exp.exps[i];
  }
  cout << "Total Expenses: $" << total << endl;
}

// 题目：