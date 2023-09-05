#include <iostream>
using namespace std;

const int MAX_SCORE = 10;
int read_scores(int* scores);
void show_scores(const int* scores, int n);
float avg_scores(const int* scores, int n);

int main() {
  int scores[MAX_SCORE];
  int n = read_scores(scores);
  show_scores(scores, n);
  float avgs = avg_scores(scores, n);
  cout << "Your average score is: " << avgs << endl;

  return 0;
}

int read_scores(int* scores) {
  int n = 0;
  int sc;
  cout << "Input 10 scores, if less than 10, enter q.\n";
  while (n < 10 && cin >> sc) {
    scores[n++] = sc;
  };
  return n;
}

void show_scores(const int* scores, int n) {
  cout << "Here are your scores:\n";
  for (int i = 0; i < n; i++) {
    cout << scores[i] << " ";
  }
  cout << endl;
}

float avg_scores(const int* scores, int n) {
  if (n == 0) return 0;
  float avg_score;
  for (int i = 0; i < n; i++) avg_score += scores[i];
  return avg_score / n;
}

// 题目：