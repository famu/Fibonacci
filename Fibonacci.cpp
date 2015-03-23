/*
 * Algorithms.h
 *
 *  Created on: Mar 22, 2015
 *      Author: Faisal
 */

#ifndef ALGORITHMS_H_
#define ALGORITHMS_H_

int fibonacci_recursive(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci_recursive(n-1) + fibonacci_recursive(n-2);
    }
}


int fibonacci_iterative(int n)
{
	unsigned int a=0u, b=1u, n;//assuming n is a positive number.
	  cin >> n;
	  if(n==0)
	     {return 0;}
	  if(n==1)
	     {cout << a; return 0;}
	  cout << a << " " << b << " ";
	  for(unsigned int i=2u ; i<n; i++)
	  {
	     b = a + b;
	     a = b - a;
	     cout << b << " ";
	  }
	  return 0;
}

enum { fib = 99 };
int gFib[fib];
int fib_memoized(int n) 
  {
    if (n < 0 || n >= fib) return 0;
    int &fn = gFib[n];
    if (!fn) {
      if (n == 0 || n == 1) fn = 1;
      else fn = fib_memoized(n-1) + fib_memoized(n-2);
    }
    return fn;
}


class Fibonacci {
public:
	Algorithms();
	virtual ~Algorithms();


	int n;
	    cout << "Please input a number: ";
	    cin >> n;
	    cout << "Fibonacci(" << n << ") = " << fib(n) << "." << endl;
};

#endif /* ALGORITHMS_H_ */
