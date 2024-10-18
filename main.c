#include <stdio.h>
#include <stdlib.h> //For rand

// Insertion sort works by dividing the list into two parts: a sorted part and an unsorted part.
// It picks elements from the unsorted part one by one and inserts them into the correct position in the sorted part.
// This process is repeated until the entire list is sorted.

// Complexity for worst case scenario : O(n^2)
// Complexity for best case scenario : O(n)


void insertion__sort(int vector[], int n) {
for (int i = 1 ; i<n; i++){
    int temp = vector[i];
    int j = i-1;
    //We check if the values to the left are bigger than temp , is it's the case we will shift the elements to the right
    while (j >= 0 && vector[j] > temp ){
        vector[j+1]=vector[j];
        j--;
}
// We put the temp value in the right spot
vector[j+1]=temp;

}
    printf("Here is the ordered list of numbers:\n");
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
    printf("Here is an unordered list of numbers:\n");
     for ( int i = 0; i < n; i++ ){
        printf("%d" , vector[i] );
        printf("\n");
    }

    //Now we call the function we have previously defined
    insertion__sort(vector, n);

    return 0 ;
}
