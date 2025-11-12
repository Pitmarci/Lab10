/* Task description:
Fibonacci

The Fibonacci-series is defined as: F0=0, F1=1, Fn=Fn-1+Fn-2. Write a recursive function to calculate the nth element! Test your function for n=40! What happens? (Hint: remember the lecture topic.)

Trace your program in the debugger. Start it and see how it works for n=5. You may implement your own tracing method: your fib() function should first print the value of the parameter (n).
Use the debugger to trace the stack!

*/


#include <stdio.h>

int fib(int n, int a, int b){
    if(n==0)
        return a;
    if(n==1)
        return b;
    if(n>1)
        return fib(n-1, a, b)+fib(n-2, a, b);
}

int main(){
    for(int i = 0; i < 40; i++)
        printf("%d\t",fib(i, 0, 1));

return 0;
}
