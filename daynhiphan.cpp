
 
#include<iostream>
#include<math.h>
using namespace std;
 int n;
  int *A = new int[n];
void tryx(int i)
{
int j;
for(j=0 ;j < n; j++){
A[i]=j; // th? c�c gi� tr? c?a data[i] c� th? nh?n
if(i ==n){
cout<<(n);
return;
}
tryx(i+1); //th? ti?p gi� tr? x[i+1]
}
}
 
void xuat(int A[], int n) {
    for (int i = 0; i < n; i++)
        cout << A[i];
    cout << endl;
}
 
int main(){
    
    cout << "Nhap n: ";
    cin >> n;
    //Kh?i t?o m?ng
   
    //X�y d?ng c?u h�nh d?u ti�n
    for (int i = 0; i < n; i++) A[i] = 0;
    //In c?u h�nh hi?n t?i v� x�y d?ng c?u h�nh k? ti?p
    for (int i = 0; i < n; i++) {
        xuat(A, n);
        tryx(i);
    }
}
 
