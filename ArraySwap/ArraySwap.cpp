#include <iostream>

using namespace std;


void swap(int* a, int* b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void swap_table(int* pTable, int tSize)
{
    for (int i=0; i<tSize/2; i++)
        swap(&pTable[i], &pTable[tSize-1-i]);
}

#define LEN 30

int M[LEN];

int main()
{
    // Initialize M
    cout << "Initialize M" << endl;
    for (int i=0; i<LEN; i++)
        M[i] = i;
    
    // Display M
    cout << endl << "Display M" << endl;
    for (int i=0; i<LEN; i++)    
        cout << "M[" << i << "]=" << M[i] << endl; 
        
    // Swap elements of M
    cout << endl << "Swap elements of M" << endl;
    swap_table(&M[0], LEN);
    
    // Display new content    
    cout << endl << "Display new content" << endl;
    for (int i=0; i<LEN; i++)    
        cout << "M[" << i << "]=" << M[i] << endl; 
   
   return 0;
}
