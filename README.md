## Matrix Using Array
1. Let A be a 𝑀 𝑋 𝑁 matrix.
2. Write a program for computing the mean, SD, Min, and Max of A.
3. Create a new matrix 𝐵 from 𝐴 such that 𝐵=(𝐴−𝑚𝑒𝑎𝑛)/𝑆𝐷
    //Note this has to be implemented elementwise or pixel-wise.
   This operation is widely used for normalization of data.
4. Create a new matrix C from 𝐴 such that 𝐶=(𝐴−𝑀𝑖𝑛)/(𝑀𝑎𝑥−𝑀𝑖𝑛) ∗ 100
   // Note this has to be implemented elementwise or pixel-wise.
   This operation is widely used for normalization of data.
5. Create a matrix 𝐷 from A such that 𝐷 = 𝑙𝑜𝑔(𝐴)
   // Note this has to be implemented elementwise or pixel-wise.
6. Create a matrix 𝐸 from 𝐴, such that elements of even rows are equal to 1.
7. Create a square matrix (ANxN) such that even rows contain odd numbers and odd rows contain even numbers.
   Numbers can be assigned using a formula.
   // Note that ‘N’ should be a positive number greater than 6.
8. The program should check if this is a symmetric matrix.
9. Find the sum of all non-diagonal elements.
10. Find product of A and A^T using a separate sub-function
        i.e. MatrixProductFunc() and call it inside the main() function. Print values of this product.
