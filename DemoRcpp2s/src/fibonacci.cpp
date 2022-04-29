#include "fibonacci.h"

using namespace std;

int fibonacci_item(size_t n) {
    int a0 = 0;
    int a1 = 1;
    int an = a1;
    switch (n)
    {
    case 0:
        an = 0;
        break;
    case 1:
        an = 1;
        break;
    default:
        for (size_t i = 2; i <= n; i++)
        {
            a0 = a1;
            a1 = an;
            an = a0 + a1;
        }
        break;
    }
    
    return an;
}

vector<int> fibonacci_seq(size_t n) {
    vector<int> fib_seq(n);
    switch (n)
    {
    case 0:
        break;
    case 1:
        fib_seq[0] = 1;
        break;
    case 2:
        fib_seq[0] = 1;
        fib_seq[1] = 1;
        break;
    default:
        fib_seq[0] = 1;
        fib_seq[1] = 1;
        for (size_t i = 2; i < n; i++)
        {
            fib_seq[i] = fib_seq[i-1] + fib_seq[i-2];
        }
        break;
    }
    
    return fib_seq;
}

double fibonacci_sum(size_t n, vector<double> weights) {
    vector<int> fib_seq = fibonacci_seq(n);
    double sum = 0.0;
    for (size_t i = 0; i < n; i++)
    {
        sum += fib_seq[i] * weights[i];
    }
    return sum;
}
