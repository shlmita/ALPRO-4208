#include <iostream>

using namespace std;

void bubble(int A[], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1; j++){
            if(A[j] < A[j+1]){
                int temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
}

void insertion(int B[], int h){
    for(int i=0; i<h; i++){
        int key = B[i];
        int j = i-1;

        while(j >= 0 && B[j] < key){
            B[j+1] = B[j];
            j--;
        }
        B[j+1] = key;
    }
}
void printInsertion(int B[], int h){
    for(int i=0; i<h; i++){
        cout << B[i] << " ";
    }
    cout << endl;
}

int main()
{
    int A[] = {5,4,3,2,2,1,1};
    int n = sizeof(A) / sizeof(A[0]);
    bubble(A, n);
    cout << "Bubble Sort" << endl;
    for(int i=0; i<n; i++){
        cout << A[i] << " ";
    }

    cout << endl;
    cout << endl;

    int B[] = {9,5,4,7,2,1,5};
    int h = sizeof(B) / sizeof(B[0]);
    cout << "Insertion Sort" << endl;
    insertion(B, h);
    printInsertion(B, h);

    return 0;
}
