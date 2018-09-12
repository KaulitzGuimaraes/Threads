/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "read_content.h"
#include <pthread.h>
#define MAX_NUMBERS 1000000




 FILE* open_file(char* file_name, char* type){
     
      FILE* ds = fopen(file_name,type);
      if(ds == NULL){
        
          return NULL;
      }
     
         
      return ds;
  }
 
 FILE* read_file(char* file_name){
     
      FILE* ds = open_file(file_name,"r");
      return ds;
              
  }
 

 FILE* write_file(char* file_name){
     
      FILE* ds = fopen(file_name,"w");
     
      return ds;
  }
 
 
 void record_int(long number,long pos){
      
     
  
     long* buffer  = malloc(sizeof(long));
     *buffer = number;
      numbers[pos] = buffer;
      
 }

 void read_file_content(FILE* file){
     
    
    
      if(file == NULL){
       
          return;
      }
     
   
    
      while(!feof(file)){
          
          long buffer;
          fscanf(file,"%ld\n",&buffer);
         
         record_int(buffer, size_of_numbers);
           insert_heap( size_of_numbers);
        size_of_numbers++;
      }
    
     
 }

 void start_array(){
     numbers =  malloc(MAX_NUMBERS*sizeof(long*));
     size_of_numbers =0;
 }
 void get_number_trh(){
     printf("Enter numbers of threads (Only will be allowed same number for files) : ");
       scanf("%d",&thread_number);
 }
 
 void get_all_files(){
     create_heap();
     printf("Enter file names to read data : ");
     char** files = malloc(thread_number*sizeof(char*));
     for(int i = 0;i<thread_number;i++){
         char* buffer = malloc(50*sizeof(char));
         scanf("%s",buffer);
         files[i] = buffer;
         
     }
     read_all_files(files);
 }
 void* thread_func(void *arg){
     char* file = (char*) arg;
    
     FILE* file_buffer = read_file(file);
         
       
         read_file_content(file_buffer);
         
         fclose(file_buffer);
         pthread_exit(NULL);
        
 }
 void read_all_files(char** files){
     start_array();
     int buffer =0;
     pthread_t threads;
    while(buffer <thread_number){
        pthread_create(&threads,NULL,thread_func, (void *)files[buffer]);
       
          buffer++;
         
     }
     pthread_join(threads, NULL);
 }
     void print_numbers(){
        
         for (int i=0;i<size_of_numbers;i++){
             long buffer =*numbers[i];
             printf("%ld \n",buffer);
         }
     }
     
void create_heap(){
     heap_create(&h,0,NULL);
}    
void insert_heap(int current){
      
    
           heap_insert(&h, numbers[current], numbers[current]);
    
  
}

void sort_numbers(){
    long** buffer = malloc((size_of_numbers+2)* sizeof(long*));
    long* key;
    long*  value;
    int i =0; 
    int anws;
    char* name = malloc(50*sizeof(char));
    printf("Enter file name to save data : ");
    scanf("%s",name);
    FILE * f =  write_file(name);
    while(anws !=0 && i<size_of_numbers){
       anws =heap_delmin(&h,(void**)&key,(void**)&value);
        long value1 = *value;
        
        fprintf(f,"%ld\n",value1);
        i++;
    }
}
 
 
 
