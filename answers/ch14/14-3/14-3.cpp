#include <iostream>
#include <cstring>
#include"queuetp.h"
#include "workermi.h"
const int SIZE = 5;

int main()
{
   using std::cin;
   using std::cout;
   using std::endl;
   using std::strchr;

   Worker * lolas[SIZE];
   QueueTp<Worker*> que;

    int ct;
    for (ct = 0; ct < SIZE; ct++)
    {
        char choice;
        cout << "Enter the employee category:\n"
            << "w: waiter  s: singer  "
            << "t: singing waiter  q: quit\n";
        cin >> choice;
        while (strchr("wstq", choice) == NULL)
        {
            cout << "Please enter a w, s, t, or q: ";
            cin >> choice;
        }
        if (choice == 'q')
            break;
        Worker* tempworker;
        switch(choice)
        {
            case 'w':   tempworker = new Waiter;
                        break;
            case 's':   tempworker = new Singer;
                        break;
            case 't':   tempworker = new SingingWaiter;
                        break;
        }
        cin.get();
        tempworker->Set();
        que.enqueue(tempworker);
    }

    cout << "\nHere is your staff queue:\n";
    while(!que.isempty())
    {
        cout << endl;
        Worker* tempworker = que.front();
        que.dequeue();
        tempworker->Show();
        delete tempworker;
    }
    cout << "Bye.\n";
    // cin.get();
    // cin.get();
    return 0; 
}
