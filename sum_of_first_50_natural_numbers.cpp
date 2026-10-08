#include<iostream>
using namespace std;
int main()
{
    const int  N=50;
    int sum=0;

    for(int i=1;i<=N;i++)
    {
        sum += i;
    }

    cout<< "Sum of First " << N << " Natural Numbers are " <<sum <<endl;
    return 0;
}