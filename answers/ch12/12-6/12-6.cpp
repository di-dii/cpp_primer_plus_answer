// bank.cpp -- using the Queue interface
// compile with queue.cpp
#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time()
#include "queue.h"
const int MIN_PER_HR = 60;

bool newcustomer(double x); // is there a new customer?

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    using std::ios_base;
// setting things up
    std::srand(std::time(0));    //  random initializing of rand()

    cout << "Case Study: Bank of Heather Automatic Teller\n";
    cout << "Enter maximum size of queue: ";
    int qs;
    cin >> qs;
    Queue line(qs);         // line queue holds up to qs people
    Queue line2(qs); 

    //cout << "Enter the number of simulation hours: ";
    int hours = 101;              //  hours of simulation
    //cin >> hours;
    // simulation will run 1 cycle per minute
    long cyclelimit = MIN_PER_HR * hours; // # of cycles

    cout << "Enter the average number of customers per hour: ";
    double perhour=0;         //  average # of arrival per hour
    // cin >> perhour;
    double min_per_cust;    //  average time between arrivals
    //min_per_cust = MIN_PER_HR / perhour;


// running the simulation
    double wait_time_temp = 0;
    do{
        perhour++;
        min_per_cust = MIN_PER_HR / perhour;
        
        Item temp;              //  new customer data
        long turnaways = 0;     //  turned away by full queue
        long customers = 0;     //  joined the queue
        long served = 0;        //  served during the simulation
        long sum_line = 0;      //  cumulative line length
        int wait_time = 0;      //  time until autoteller is free
        long line_wait = 0;     //  cumulative time in line
        long served2 = 0;        //  served during the simulation
        int wait_time2 = 0;      //  time until autoteller is free
        long line_wait2 = 0;     //  cumulative time in line
        for (int cycle = 0; cycle < cyclelimit; cycle++)
        {
            if (newcustomer(min_per_cust))  // have newcomer
            {
                if (line.isfull()&&line2.isfull())
                    turnaways++;
                else
                {
                    customers++;
                    temp.set(cycle);    // cycle = time of arrival
                    if(line.queuecount()<line2.queuecount())
                        line.enqueue(temp); // add newcomer to line
                    else
                        line2.enqueue(temp);
                }
            }
            if (wait_time <= 0 && !line.isempty())
            {
                line.dequeue (temp);      // attend next customer
                wait_time = temp.ptime(); // for wait_time minutes
                line_wait += cycle - temp.when();
                served++;
            }
            if (wait_time2 <= 0 && !line2.isempty())
            {
                line2.dequeue (temp);      // attend next customer
                wait_time2 = temp.ptime(); // for wait_time minutes
                line_wait2 += cycle - temp.when();
                served++;
            }
            if (wait_time > 0)
                wait_time--;
            if (wait_time2 > 0)
                wait_time2--;
            sum_line += line.queuecount()+line2.queuecount();
        }
        wait_time_temp = (double) (line_wait+line_wait2) / (served+served2) ;
    }while(wait_time_temp<=1.0);
    cout<<"need at most "<<perhour-1<<" average guest of arrival per hour to let wait time less than 1 min.\n";

// reporting results

    // if (customers > 0)
    // {
    //     cout << "customers accepted: " << customers << endl;
    //     cout << "  customers served: " << served << endl;
    //     cout << "         turnaways: " << turnaways << endl;
    //     cout << "average queue size: ";
    //     cout.precision(2);
    //     cout.setf(ios_base::fixed, ios_base::floatfield);
    //     cout << (double) sum_line / cyclelimit << endl;
    //     cout << " average wait time: "
    //          << (double) line_wait / served << " minutes\n";
    // }
    // else
    //     cout << "No customers!\n";

    cout << "Done!\n";
    // cin.get();
    // cin.get();
    return 0;
}

//  x = average time, in minutes, between customers
//  return value is true if customer shows up this minute
bool newcustomer(double x)
{
    return (std::rand() * x / RAND_MAX < 1); 
}