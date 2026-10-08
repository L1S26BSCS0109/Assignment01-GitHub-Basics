/*
    *Program    : Sum of First 50 Natural Numbers
    *Name       : Syed Qasim Iqbal
    *Reg No     : L1S26BSCS0109
    *Assignment : 01 - Getting Started with GitHub
*/

#include<iostream>
using namespace std;
int main()
{
    const int  N=50;
    int sum=0;
    int formulaSum=N*(N+1)/2;

    for(int i=1;i<=N;i++)
    {
        sum += i;
    }

    cout<< "Sum of First " << N << " Natural Numbers are " <<sum <<endl;
    cout<< "Sum using the formula n(n+1)/2 " <<formulaSum <<endl;
    return 0;
}
