#include <strings.h>

#include <unistd.h>
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "read_content.h"
#include "heap.h"


void create_heap();
void sort_numbers();
int main(int argc, char** argv) {
 
   
    get_number_trh();
    get_all_files();
    
    sort_numbers();
            
    
    
    
    // Create the heap
    /*heap h;
    heap_create(&h,0,NULL);

    // Maximum
    int count = 10; // 10M
    if (argc > 1)
      count = atoi(argv[1]); // Get the count as an argument
    printf("Sorting array of %d random entries.\n", count);

    // Allocate a key and value
    int* key = (int*)malloc(count*sizeof(int));
    char* value = "The meaning of life.";

    // Initialize the first key
    unsigned int val = 42;
    srand( val);
    printf("Seed %d\n",val);

    // Store that as the minimum
    int min = INT_MAX;

    // Use a pseudo-random generator for the other keys
    for (int i=0;i<count;i++) {
        *(key+i) = rand();

        // Check for a new min
        if (*(key+i) < min)
            min = *(key+i);

        // Insert into the heap
       
    }


    // Get the minimum
    int* min_key;
    char* min_val;
    int *prev_key = &min;

    // Show the real minimum 
    printf("Real min: %d\n", min);

    // Try to get the minimum
    while (heap_delmin(&h, (void**)&min_key, (void**)&min_val)) {
        // Verify that the values are getting larger
        if (*prev_key > *min_key) {
            printf("Previous key is greater than current key!\n");
        }
        prev_key = min_key;
    }

    // Clean up the heap
    heap_destroy(&h);
    */
}
/*
void create_heap(){
      
      heap_create(&h,0,NULL);
      int current = 0;
      while(current<size_of_numbers){
           heap_insert(&h, numbers[current], numbers[current]);
           current++;
      }
  
}

void sort_numbers(){
    long** buffer = malloc((size_of_numbers+2)* sizeof(long*));
    long* key;
    long*  value;
    int i =0; 
    int anws;
    
    while(anws !=0 && i<size_of_numbers){
       anws =heap_delmin(&h,(void**)&key,(void**)&value);
        long value1 = *value;
        printf("%ld\n",value1);
        i++;
    }
  
}*/