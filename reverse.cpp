#include <iostream>
using namespace std;

int main()    
{    
    //Initialize array     
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};     
        
    //Calculate length of array arr    
    int length = sizeof(arr)/sizeof(arr[0]);    
        
    printf("Original array: \n");    
    for (int i = 0; i < length; i++) {     
        cout<<arr[i]<<", ";     
    }      
        
    cout<<"\n";    
        
    cout<<"\n"<<"Array in reverse order: \n";
	    
    //Loop through the array in reverse order    
    for (int i = length-1; i >= 0; i--) {     
        cout<<arr[i]<<", ";     
    }     
    return 0;    
}    
