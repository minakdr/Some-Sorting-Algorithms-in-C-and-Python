#include <stdlib.h>
#include <stdio.h>  //For rand

//Selection sort works by repeatedly finding the smallest element from the unsorted part of the list and swapping it with the first unsorted element. 
//This process continues until the entire list is sorted.

//The complexity is always: O(n^2)

void selection__sort(int vector[], int n) {
    int i, j, min, temp;

    for (i=0 ; i<n-1 ; i++){
            int min = i ;
        for (j=i+1 ; j<n ; j++){
                //look for the min in the vector
            if(vector[min]> vector[j]) {
                    min = j ;

            }
            // Swap the minimum element with the first element
            temp = vector[min];
            vector[min] = vector[i];
            vector[i] = temp ;

        }
     }
     printf("Here is an the ordered list of numbers");
     for ( int i = 0; i < n; i++ ){
        printf("%d" , vector[i] );
        printf("\n");
    }


    return 0 ;
}

int main () {
    int n = 100;
    int vector [n];
    //we will first fill the vector with random ints
    for (int i = 0; i < n; i++){
        vector[i] = rand() % 1000; // Generates a random number between 0 and 999
    }

    //Now we will print the vector
    printf("Here is an unordered list of numbers");
     for ( int i = 0; i < n; i++ ){
        printf("%d" , vector[i] );
        printf("\n");
    }
    selection__sort(vector, n);

    return 0 ;
}




