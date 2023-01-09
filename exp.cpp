// // Exp - 1  (Kth largest Element)
// #include <bits/stdc++.h>
// using namespace std;

// int kthLargest(int arr[], int n, int k)
// {

// 	sort(arr, arr + n);
// 	return arr[ n-k];
// }

// int main()
// {
// 	int arr[] = { 12, 3, 5, 7, 19 };
// 	int n = sizeof(arr) / sizeof(arr[0]), k;
// 	cin>>k;
// 	if(k>n){
// 		k=k-n;
// 	}
// 	cout << "K'th largest element is "
// 		<< kthLargest(arr, n, k);
// 	return 0;
// }

// Exp = 2 Rotate an array by d elements

#include <iostream>
using namespace std;

void reverse(int *arr,int low , int high){
    while(low < high){
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }
}

void rotate(int *arr, int d, int n)
{
    d %= n;  // when d > n to make it circular
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
}
int main()
{
	int t;
	cin >> t;
	
	while (t--)
	{
		int size;
		cin >> size;

		int *input = new int[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		int d;
		cin >> d;

		rotate(input, d, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}
		
		delete[] input;
		cout << endl;
	}

	return 0;
}

// Exp = 3 Delete the same adjacent element of the string

// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
// 	vector<char> v;
// 	string s="BBCCCCB";

// 	for(int i=0; i<s.size(); i++){
// 		if(s[i]!=s[i+1]){
// 			v.push_back(s[i]);
// 		}
//     }
//     for(auto i:v){
//         cout << i;
//     }
// 	return 0;
// }




// #include<stdlib.h>
// #include<stdio.h>

// using namespace std;

// int a[20],b[20],c[40];
// int n,val,i,j,pos;

// void create();
// void display();
// void insert();
// void del();
 


// int main()
// {
//        int choice;
//        do{
//                printf("\n\n--Menu--\n");
//                printf("1.Create\n");
//                printf("2.Display\n");
//                printf("3.Insert\n");
//                printf("4.Delete\n");
//                printf("5.Exit\n");
//                printf("-----");
//                printf("\nEnter your choice:\t");
//                scanf("%d",&choice);
//                switch(choice)
//                {
//                case 1:    create();
//                                        break;
//                        case 2:    display();
//                                        break;
//                        case 3:    insert();
//                                        break;
//                        case 4:    del();
//                                        break;
//                        case 5: exit(0);
//                                        break;
//                        default: printf("\nInvalid choice:\n");
//                                        break;
//                }
//        }while(choice!=5);
// return 0;
// }

// void create() //creating an array
// {
//        printf("\nEnter the size of the array elements:\t");
//        scanf("%d",&n);
//        printf("\nEnter the elements for the array:\n");
//        for(i=0;i<n;i++)
//        {
//                scanf("%d",&a[i]);
//        }
// }//end of create()

// void display() //displaying an array elements
// {
//        int i;
//        printf("\nThe array elements are:\n");
//        for(i=0;i<n;i++){
//                 printf("%d\t",a[i]);
//         }
//  }//end of display()

// void insert()  //inserting an element in to an array
// {
//    printf("\nEnter the position for the new element:\t");
//    scanf("%d",&pos);
//    printf("\nEnter the element to be inserted :\t");
//    scanf("%d",&val);
//    for(i=n-1;i>=pos;i--)
//        {
//                a[i+1]=a[i];
//        }
//        a[pos]=val;
//        n=n+1;
// }//end of insert()

// void del()     //deleting an array element
// {
//        printf("\nEnter the position of the element to be deleted:\t");
//        scanf("%d",&pos);
//        val=a[pos];
//        for(i=pos;i<n-1;i++)
//        {
//                a[i]=a[i+1];
//        }
//        n=n-1;
//        printf("\nThe deleted element is =%d",val);
// }


// #include <iostream>
// using namespace std;
// void merge_sort_helper(int *arr ,int size, int S_I, int E_I, int mid){
//     int temp[size];
//     int i {S_I};
//     int j {mid+1};
//     int k{0};
//     while (i <= mid && j <= E_I)
//     {
//         if (arr[i] < arr[j])
//         {
//             temp[k++] = arr[i++];
//         }
//         else
//         {
//             temp[k++] = arr[j++];
//         }
//     }
//     while (i <= mid)
//     {
//         temp[k++] = arr[i++];
//     }
//     while (j <= E_I){
//         temp[k++] = arr[j++];
//     }
    
//     for (int i = E_I; i >= S_I; i--)
//     {
//         arr[i] = temp[--k];
//     }
       

// }

// void merge_sort(int *arr, int size, int S_I, int E_I){
//     if(S_I >= E_I){
//         return;
//     }
//     int mid = (S_I + E_I) / 2;

//     merge_sort(arr,size, S_I,mid);
//     merge_sort(arr,size, mid+1,E_I);
//     merge_sort_helper(arr,size,S_I,E_I, mid);  // merging two sorted half of an array

// }
// void print_array(int *arr, int size){
//     for (int i = 0; i < size; i++)
//     {
//         cout<<arr[i];
//     }    
// }

// int main(){
//     int n{};
//     cin>>n;

//     int * arr = new int [n];

//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
//     merge_sort(arr, n, 0, n-1);
//     print_array(arr, n);
//     delete [] arr;
//     return 0;
// }

#include <iostream>
using namespace std;

int main(){
    int  n{-6};
    cout << n%3;
}