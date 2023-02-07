#include<bits/stdc++.h>

using namespace std;

void insertionsort(vector<int> arr, int num)
{
    int key, j;
    for (int i = 1; i < num; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}


void selectionSort(vector<int> &arr,int curri){
    if(curri==arr.size()) return;
    for(int i=curri;i<arr.size();i++){
        if(arr[i]<arr[curri]) swap(arr[i],arr[curri]);
    }
    selectionSort(arr,curri+1);
}
int main()
{
    vector<int> arr;
    clock_t start, end;
    vector<int> numbers;

    for(int i=36000;i<=100000;i+=100){
        numbers.push_back(i);
    }
    
    //cout<<numbers.size()<<" ";

    // for(int i=0;i<numbers.size();i++){
    //     cout<<numbers[i]<<" ";
    // }
    for(int i=0;i<numbers.size();i++){
        arr.clear();
        std::fstream myfile("numbers.txt", std::ios_base::in);
        int a;
        for(int j=0 ; j<numbers[i] ; j++){
            myfile>>a;
            arr.push_back(a);
        }
        /* Recording the time.*/
        start = clock();
    
        insertionsort(arr,arr.size());
    
        end = clock();
    
        // Calculating total time taken by the program.
        double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
        cout<<numbers[i]<<" "<< fixed 
            << time_taken << setprecision(5);
        cout << "\n" ;
    }
    
    
   
 
    return 0;
}