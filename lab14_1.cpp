#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}

void stat(const double x[],int N,double y[]){
    double max = x[0], min = x[0];
    double sum = 0;
    double gm = 1;
    double hm = 0;
    double sum2 = 0;
    for (int i = 0; i < N; i++){
         sum+=x[i];
         gm*=x[i];
         hm+=1/x[i];
         if(x[i] > max){
             max = x[i];
         }
         if(x[i] < min){
             min = x[i];
         }
    }
   y[0] = sum/N;
   for (int i = 0; i < N; i++){
         sum2+=pow(x[i]-y[0],2)/N;
    }
   y[1] = sqrt(sum2);
   y[2] = pow(gm,1.0/N);
   y[3] = N/hm;
   y[4] = max;
   y[5] = min;

}
