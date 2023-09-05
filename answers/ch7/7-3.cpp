#include <iostream>
using namespace std;

struct box {
  char maker[40];
  float height;
  float width;
  float length;
  float volume;
};

void show_box(box mybox);
void comp_vol_box(box* mybox);

int main() {
  box mybox = {"magic T.", 2, 3, 4};
  show_box(mybox);
  comp_vol_box(&mybox);
  cout << "After compute volume.\n";
  show_box(mybox);
  return 0;
}

void show_box(box mybox) {
  cout << "Box info:\n";
  cout << " box maker: " << mybox.maker << endl;
  cout << " box height: " << mybox.height << endl;
  cout << " box width: " << mybox.width << endl;
  cout << " box length: " << mybox.length << endl;
  cout << " box volume: " << mybox.volume << endl;
}

void comp_vol_box(box* mybox) {
  mybox->volume = mybox->height * mybox->width * mybox->length;
}

// 题目：