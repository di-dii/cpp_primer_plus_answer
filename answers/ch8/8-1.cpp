#include <iostream>
using namespace std;

int call_times = 0;
void print_str(const char *str, int n = 0);

int main() {
  char str[] = "Hello!";
  print_str(str);
  print_str(str, 0);
  print_str(str, -1);
  return 0;
}

void print_str(const char *str, int n) {
  call_times++;
  if (n == 0) {
    // while (*str != '\0') cout << str++;  //wrong way
    cout << str << endl;
  } else {
    cout << "will print string function call times (include this time):"
         << endl;
    for (int i = 0; i < call_times; i++) {
      cout << str << endl;
    }
  }
}

// 题目：