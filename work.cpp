#include "work.h"
#include "compute.h"
#include "timing.h"

#include <iostream>
#include <format>

using namespace std;

static void report(double seconds)
{
    cout << format("Time: {:.2f} s", seconds) << endl;
    cout << "Work is done!" << endl;
}

namespace sequential
{
    void work()
    {
        double t = timeit([]
                          {
                              slow("A1");
                              quick("A2");
                              quick("A3");
                              quick("B1");
                              quick("B2");
                              slow("B3");
                              quick("C"); });
        report(t);
    }
}
