/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   read_content.h
 * Author: Kaulitz
 *
 * Created on August 11, 2018, 6:59 PM
 */


#ifndef read_dataset_h
#define read_dataset_h
#include <stdio.h>
#include <stdlib.h>
#include "heap.h"
long size_of_numbers;
int thread_number;
long** numbers;
heap h;
void create_heap();
void sort_numbers();
void create_heap();
void insert_heap(int current);
/**
 * get numbers of threads by user input.
 */
void  get_number_trh();
/**
 * Function to read a file.
 * @param file_name
 * @return 
 */
FILE* read_file(char* file_name);
 /**
  * Function to read integers from a file and store in numbers array.
  * @param file
  */
void read_content(FILE* file);
 /**
  * Set array as 0 and starts numbers array with MAX NUMBERS
  */
void start_array();
 /**
  * Read all given files and records their integers in the numbers arrays.
  * @param files
  * @param number_of_files
  */
void read_all_files(char** files,int number_of_files);
/**
 * Print numbers in the numbers array.
 */
 void print_numbers();
 /**
  * Reads amount of files and its names by user input.
  */
  void get_all_files();
 
#endif /* READ_CONTENT_H */

