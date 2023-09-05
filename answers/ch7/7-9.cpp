#include <iostream>
using namespace std;
const int SLEN = 30;
struct student {
  char fullname[SLEN];
  char hobby[SLEN];
  int ooplevel;
};

int getinfo(student pa[], int n);

void display1(student st);

void display2(const student *ps);

void display3(const student pa[], int n);

int main() {
  cout << "Enter class size: ";
  int class_size;
  cin >> class_size;
  while (cin.get() != '\n') continue;
  student *ptr_stu = new student[class_size];
  int entered = getinfo(ptr_stu, class_size);
  for (int i = 0; i < entered; i++) {
    display1(ptr_stu[i]);
    display2(&ptr_stu[i]);
  }
  display3(ptr_stu, entered);
  delete[] ptr_stu;
  cout << "Done.\n";

  return 0;
}

int getinfo(student pa[], int n) {
  cout << "Enter each student's:\nfullname\nhobby\nooplevel\n";
  int i;
  for (i = 0; i < n; i++) {
    cin.getline(pa[i].fullname, SLEN);  // cin.getline() will absorb \n
    if (pa[i].fullname[0] == '\0') break;
    cin.getline(pa[i].hobby, SLEN);
    cin >> pa[i].ooplevel;
    cin.get();
    cout << "\nnext student\n";
  }
  return i;
}

void display1(student st) {
  cout << "name: " << st.fullname << " hobby: " << st.hobby
       << " ooplevel: " << st.ooplevel << endl;
}

void display2(const student *ps) {
  cout << "name: " << ps->fullname << " hobby: " << ps->hobby
       << " ooplevel: " << ps->ooplevel << endl;
}

void display3(const student pa[], int n) {
  for (int i = 0; i < n; i++) {
    cout << "name: " << pa[i].fullname << " hobby: " << pa[i].hobby
         << " ooplevel: " << pa[i].ooplevel << endl;
  }
}

// 题目：