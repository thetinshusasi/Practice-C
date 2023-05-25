#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <wchar.h>
#include <stdbool.h>
#include <limits.h>
#include <math.h>
double circularArea(double r);
#define SIZE 40

/// Notes
// 1. Array name points to first element , but it still a pointer , i.e if u perform addition operation , it will yield a pointer to successive elements,
//     1.1 the compiler implicitly converts an expression with an array
//          type, such as the name of an array, into a pointer to the array’s first element. The
//          array expression is not converted into a pointer only in the following cases:
//              • When the array is the operand of the sizeof operator
//              • When the array is the operand of the address operator &
// //           • When a string literal is used to initialize an array of char or wchar_t
//     1.2 the same identifier iArray is implicitly converted to a pointer in the other three statements in which it appears:
//              • As an argument in the first printf( ) call.
//              • As the operand of the dereferencing operator *.
//              • In the pointer arithmetic operations and assignment to iPtr
// 2. function name point to function value in heap
// 3. The compiler converts certain types of pointers implicitly. Assignments, conditional
//      expressions using the equality operators == and !=, and function calls
//      involve implicit pointer conversion in three kinds of cases, which are described
//      individually in the sections that follow. The three kinds of implicit pointer conversion
//      are:
//          • Any object pointer type can be implicitly converted to a pointer to void, and
//          vice versa.
//          • Any pointer to a given type can be implicitly converted into a pointer to a
//          more qualified version of that type—that is, a type with one or more additional
//          type qualifiers.
//          • Anull pointer constant can be implicitly converted into any pointer type.
// 4. Compound liternal ( type name ){ list of initializers }  can be used to inplace object which we wanted to use
//      once and garbage collected immediatly for efficient memory utlisation . Eg
//      float *fPtr = (float []){ -0.5, 0.0, +0.5 };
// 5. const keyword create readonly object that cannot be changed once after initialisation
// 6. An integer constant expression is a constant expression with any integer type.
//      These are the expressions you use to define the following items:
//          • The size of an array
//          • The value of an enumeration constant
//          • The size of a bit-field
//          • The value of a case constant in a switch statement
//    for eg
//               #define BLOCK_SIZE 512
// //               char buffer[4*BLOCK_SIZE];
// 7. In the function head, name is the function’s name, while type consists of at least
//      one type specifier, which defines the type of the function’s return value. The
//      return type may be void or any object type, except array types.

#define ARRAY_SIZE 100
const float A = 10.4;
int main()
{

    // func_t *pFunc = sqrt;
    // printf("variable pFunc is %p \n", pFunc);
    // printf("variable sqrt is %p \n", sqrt);
    // printf("variable *pFunc is %p \n", *pFunc);
    // printf("Square value %.5f : \n", *pFunc(2));
    double *pArray = NULL; /// basic pointer
    float arrf[] = {1.2, 2.3};
    pArray = malloc(ARRAY_SIZE * sizeof(double)); // Generate the array

    return 0;
}
double[] circularArea(double r) // Definition of circularArea( ) begins
{
    const double pi = 3.1415926536; // Pi is a constant
    double a[] = {1.1};
    return a;
}
