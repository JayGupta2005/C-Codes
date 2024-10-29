// #include <iostream>
// using namespace std;
// int main()
// {
    // int n = 4;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout <<j<<" ";
    //     }
    //     cout <<endl;
    // }

    //     int n = 4;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         int p=j+1;
    //         cout <<p<<" ";
    //     }
    //     cout <<endl;
    // }

    //     int n=5;
       
    // for (int i = 0; i < n; i++)
    // {
    //       char ch='A';
    //     for (int j = 0; j < n; j++)
    //     {
           
    //         // int p=j+1;
    //         cout <<ch<<" ";
    //         ch+=1;
           

    //     }
    //     cout <<endl;
     
    // }

    //       int n=3;
    //       int num=1;
    // for (int i = 0; i < n; i++)
    // {
              
    //     for (int j = 0; j < n; j++)
    //     {
           
    //         // int p=j+1;
    //         cout <<num<<" ";
    //         num+=1;

    //     }
    //     cout <<endl;
    // }

    //        int n=3;
    //       char ch='A';
    // for (int i = 0; i < n; i++)
    // {
              
    //     for (int j = 0; j < n; j++)
    //     {
           
    //         // int p=j+1;
    //         cout <<ch<<" ";
    //         ch+=1;

    //     }
    //     cout <<endl;
    // }

    // int n=4;
    // for  (int i = 0; i < n; i++){
    //     for (int j = 0; j <=i; j++){
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }


    // int n=4;
    //     int num=1;
    // for  (int i = 0; i < n; i++){
    
    //     for (int j = 0; j <=i; j++){
    //         cout<<num<<" ";
           
    //     }
    //     cout<<endl;
    //      num++;
    // }


    //     int n=5;
    //     char ch = 'A';
    // for  (int i = 0; i < n; i++){
    
    //     for (int j = 0; j <=i; j++){
    //         cout<<ch<<" ";
           
    //     }
    //     cout<<endl;
    //      ch++;
    // }


  

    // int n=4;
    // for(int i=0 ; i<n ; i++){
    //     for(int j=1 ; j<=i ; j++){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;

    // }


    //    int n=4;
    //    for(int i=0; i<n ; i++){
    //     int num=1;
    //     for (int j=0 ; j<=i ; j++){
    //         cout<<num<<" ";
    //         num++;
    //     }
    //     cout<<endl;
    //    }


//reverse loop
    // int n=4;
    // for (int i=n; i>=0 ; i--){
    //     cout<<i<<" ";
    // }

    //     int n=4;
    //    for(int i=0; i<n ; i++){
    //     // int num=i;
    //     for (int j=i+1 ; j>0 ; j--){
    //         cout<<j<<" ";
    //         // num++;
    //     }
    //     cout<<endl;
    //    }

    // int n=4;
    // int num=1;
    // for(int i=0 ; i<n ; i++){
    //     for(int j=0 ; j<=i ; j++){
    //         cout<<num<<" ";
    //         num++;
    //     }
    //     cout<<endl;
    // }


    //  int n=4;
    // char ch='A';
    // for(int i=0 ; i<n ; i++){
    //     for(int j=0 ; j<=i ; j++){
    //         cout<<ch<<" ";
    //         ch++;
    //     }
    //     cout<<endl;
    // }

    // // int n=4;
    // for(char i='A' ; i<='D' ; i++){
    //     for(int j=i ; j>='A' ; j--){
    //         cout<<i<<" ";
    //     }
    //     cout<<end;
    // }

 
    // // Loop through the rows
    // for (char i = 'a'; i <= 'd'; i++) { // Starting from 'a' to 'd'
    //     // Loop for printing each row in reverse order
    //     for (char j = i; j >= 'a'; j--) {
    //         cout << j << " "; // Print the character followed by a space
    //     }
    //     cout << endl; // Newline after each row
    // }
    
    // return 0;


//     for  (char i = 'A'; i <='D'; i++) {
//         for (char j=i; j>='A' ; j--)
//         {
//             cout<<j<<" ";
//         }
//         cout<<endl;
// }

    // int n=4;
    // for(int i=0; i<n ; i++){
    //     for(int j =0 ; j<i ; j++){
    //         cout<<" ";
    //     }
    //     for(int j=0 ; j<n-i; j++){
    //         cout<<i+1;
    //     }
    //     cout<<endl;
    // }

// }
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector <int> vec = {1,0,2,3,0,4};
//     int end = vec.size()-1;
//     for(int i=0 ; i< vec.size(); i++){
//         if(vec[i]==0){
//             swap(vec[i] , vec[end]);
//         }
//         cout <<vec[i];
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]= {1,2,5,4,3};
//     int n = sizeof(arr) / sizeof(int);

//     for(int i=0 ; i< n ; i++){
//         if(arr[i]>arr[i+1]){
//            swap (arr[i] , arr[i+1]);
//         }
//         cout<<arr[i];
//     }
// }


#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "recar";
    int st=0 , end=str.size()-1;
    while(st<=end){
        if (str[st]==str[end]){
            st++;
            end--;
            cout <<"palin";
        }else {
            cout <<"not a palindrome";
        }
    }
}