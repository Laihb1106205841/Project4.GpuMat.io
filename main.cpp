#include "matr.h"

#include<time.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    const size_t rows = 36000;
    const int cols = 36000;


    ////////////////////// CREATING TEST ///////////////////////////
    // Create two matrices
    Matrix<float> A(rows, cols,0);
    Matrix<float> B(rows, cols,1);

    // Initialize matrices A and B
    for (float i = 0; i < rows; ++i) {
        for (float j = 0; j < cols; ++j) {
            A(i, j) = rand() % 40;
            B(i, j) = rand() % 40;
        }
    }
    Matrix<float> E = A;   // copy constructor
    Matrix<float> D = A * B;   // 重写*
    // Matrix<int> M = A; // not supported  
    A += B;

    std::cout << "END OF CREATING TEST\n";

    
    // const int Gpu = 3;
    // Matrix F (5,5);
    // Matrix G (6,6);

    /////////////////////////// Print TEST /////////////////////////////////
    std::cout << "Print TEST \n Matrix A:\n";
    A+=B;
    // A.print();
    std::cout << "Matrix A END\n";

    // std::cout << "\nMatrix B:\n";
    // B.print();

    ////////////////////////// SPEED TEST //////////////////////////
    // clock_t start, end; 
    // start = clock();

    // Perform matrix addition
   

    // Perform matrix multiplication
    



    // std::cout << " \n" << D.getCols() << "D\n";
    // std::cout << "\nMatrix A * B: finish\n";


    // D.print();
    // end = clock();
    // printf("time=%f\n", (double)(end - start) / CLOCKS_PER_SEC);

    ///////////////////////// MULTI GPU TEST /////////////////////
    // B.changeGPU(3);
    // Matrix C = A + B;
    // C.print();

    ///////////////////////// CONSTRUCTOR TEST ///////////////////

    // Matrix E = A;
    // std::cout << E.getCols() << "Ecol\n";
    // std::cout << A.getCols() << "Acol\n";

    // A += E;
    // E.print();
    std::cout<< "end of main";

    return 0;
}