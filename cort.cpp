#include "cort.h"

class cort
{
private:
    /* data */
public:
    // Main vars of that class 
    // 
    int **matrix;
    cort(){
        // I gona check it
        matrix = new *int[Matrix_Len];
        for( int i =0; i<Matrix_Len; i++){
            matrix[i] = new int[Matrix_Len];
        }
    }

    
};
