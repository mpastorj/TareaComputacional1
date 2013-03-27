/* 
 * File:   main.cpp
 * Author: Milii2
 *
 * Created on 26 de marzo de 2013, 09:47 PM
 */

#include <cstdlib>
#include <iostream>
#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>

using namespace std;

void imprimir(char M[8][8]){ 
     int i=0;
     int j=0;
     system("cls");
             for(i=0;i<8;i++){
                      for(j=0;j<8;j++){
                                       cout<<M[i][j];
                                       cout<<" ";
                                       }
                                       cout<<"\n";
                      }  
     
     }

/*
 * 
 */
int main(int argc, char** argv) {
    
        char M[8][8];
        int i=0;
        int j=0;
        for(i=0;i<8;i++){
                      for(j=0;j<8;j++){
                                       M[i][j]='O';
                                       }
                      }
        M[2][2]='O';
        M[2][5]='O';
        M[5][2]='O';
        M[5][5]='O';
        
        imprimir(M);
        
        return 0;
}

