#include "compute.h"

#include <iostream>
#include <thread>
#include <syncstream>

using namespace std;

void compute(const string &name, chrono::seconds duration)
{
    this_thread::sleep_for(duration);
    osyncstream(cout) << name << "\t(thread " << this_thread::get_id() << ")" << endl;
}

void slow(const string &name)
{
    compute(name, SLOW_DURATION);
}

void quick(const string &name)
{
    compute(name, QUICK_DURATION);
}
