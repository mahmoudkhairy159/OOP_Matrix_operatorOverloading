# OOP_Matrix_operatorOverloading

Problem-1
Based on WikiPedia definition, In mathematics a Matrix is a rectangular [2D] array
of Numbers, Symbols, or Expressions arranged in rows and columns. For Example
the dimension of the below matrix are 2 x 3 because there is 2 rows and 3 columns.
[ 1 9 −13
20 5 −6 ]
it’s required to design and implement a Numerical matrix class(s), that can hold
numerical types.
The class should abstract matrix of any size and allocate the required memory as
needed based on the encapsulated rows and columns.
It should have a destructor to free the used memory at the end of the lifetime of
each object.
Overload standard operators and I/O operators to enable Matrix class with
addition, subtraction, and multiplication as well as suitable input and output
capabilities “cin operator >> and cout operator”.
Your matrix class should implement a method to transpose matrix.
Matrix m(5,5); // will create matrix with 5 x 5.
