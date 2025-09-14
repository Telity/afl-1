#include <stdio.h>
#include <string.h>
#include "hamming.h"

int hamming_distance(char dna1[], char dna2[]){
  int count = 0;
  int len = strlen(dna1);
  
  for(int i = 0; i < len; i++){
    if(dna1[i] != dna2[i]){
      count++;
    }
  }
  
  return count;
}
