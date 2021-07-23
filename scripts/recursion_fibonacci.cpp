#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

int fib(int x)
{
    if ((x == 1) || (x == 0))
    {
        return (x);
    }
    else
    {
        return (fib(x - 1) + fib(x - 2));
    }
}

int main()
{
    int x, i = 0;
    cout << "Enter the number of terms of series : ";
    cin >> x;
    auto start = high_resolution_clock::now();
    cout << "\nFibonnaci Series : ";
    while (i < x)
    {
        cout << " " << fib(i);
        i++;
    }
    auto stop = high_resolution_clock::now();
    cout << "\n";
    auto duration = duration_cast<microseconds>(stop - start);

    cout << "Time taken by function: "
         << duration.count() << " microseconds" << endl;

    return 0;
}