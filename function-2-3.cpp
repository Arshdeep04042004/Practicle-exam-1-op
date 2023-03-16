#include <iostream>
#include <cmath>
//2-3
int palindrome_sum(int integers[], int length){

    int sum_array = 0; 

    int counter = length -1;
    bool is_pali = 0;
    if (length>0){
     if (length%2==0){
           for(int i= 0; i <= (length/2)-1 ; i++){
            if (integers[i]==integers[counter]){
             
            
             is_pali= 1;
             
             sum_array= (sum_array + integers[i] + integers[counter]);
             
            } else {
                sum_array = -2;
            }
             counter--;
        } 
         
        } else {
        
            for(int i= 0; i < round(length/2) ; i++){
            if (integers[i]==integers[counter]){
             
            
             is_pali = 1;
             
             sum_array = sum + integers[i+1] + integers[counter] + integers[0];
             
            } else {
                is_pali = 0;
                sum_array = -2;
            }
             counter--;
           
        }
        }

    } else {
        sum_array = 0;
    }
     return sum_array;
    }  



    


bool is_array_palindrome(int integers[], int length){

    bool is_pali = 0;
    int counter= length-1;
    if(length>0){
        if (length%2==0){
           for(int i= 0; i < (length/2)-1 ; i++){
            if (integers[i]==integers[counter]){
             
            
             is_pali = true;
            } else {
                is_pali = false;
            }
             counter--;
         } 
        } else {
            for(int i= 0; i < round(length/2) ; i++){
            if (integers[i]==integers[counter]){
             
            
             is_pali= true;
            } else {
                is_pali= false;
            }
             counter--;
        }
        }

    } else {
        is_pali= false;
    }

    return is_pali;
}

int sum_integers(int integers[], int length){

    int sum = 0;
    if(length>0){
    for(int i=0; i<length; i++){
        sum = sum + integers[i];
    }
    } else{
        sum = -1;
    }
    return sum;
}



