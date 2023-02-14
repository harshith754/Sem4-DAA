#include<bits/stdc++.h>

using namespace std;

void quickSort(vector<int> &arr,int b,int e){
    
    if(b>=e) return;
    
    int pivot=b;
    
    int l=b;
    int r=e;
    
    while(1){
        while(arr[l]<=arr[pivot]){
            l++;
        }
        while(arr[r]>arr[pivot]){
            r--;
        }
        
        if(l<r){
            swap(arr[l],arr[r]);
            l++,
            r--;
        }
        else{
            swap(arr[pivot],arr[r]);
            pivot=r;
            break;
        }
    }
    
    quickSort(arr,b,pivot-1);
    quickSort(arr,pivot+1,e);
}
int main()
{
    vector<int> arr;
    clock_t start, end;
    vector<int> numbers;

    for(int i=100;i<=100000;i+=100){
        numbers.push_back(i);
    }
    
    //cout<<numbers.size()<<" ";

    
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
    
        quickSort(arr,0,arr.size()-1);
    
        end = clock();
    
        // Calculating total time taken by the program.
        double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
        cout<<numbers[i]<<" "<< fixed 
            << time_taken << setprecision(5);
        cout << "\n" ;
    }
    // arr.clear();
    //     std::fstream myfile("numbers.txt", std::ios_base::in);
    //     int a;
    //     for(int j=0 ; j<10000 ; j++){
    //         myfile>>a;
    //         arr.push_back(a);
    //     }
    // quickSort(arr,0,arr.size()-1);
    // for(int i=0;i<arr.size();i++){
    //     cout<<arr[i]<<"\n";
    // }
   
 
    return 0;
}