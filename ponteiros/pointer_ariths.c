int *ptr, *ptr1, *ptr2, *ptr3;

int num = 5;   // Suppose address of num = 0x1230
int *ptr;      // Pointer variable

ptr = &num;    // ptr points to 0x1230 or ptr points to num
ptr++;         // ptr now points to 0x1234, since integer size is 4 bytes
ptr--;         // ptr now points to 0x1230

int num=10, k=2;                  // Integer variable
int *ptr1, *ptr2, *ptr3;          // Integer pointers

ptr1 = ptr1 – 2;                  // Valid
ptr1 = ptr1 – k;                  // Valid

ptr3 = ptr2 – ptr1;               // Invalid, non-portable pointer conversion. 
                                  // Missing cast. See rule 1.
ptr3 = (int *) (ptr2 – ptr1)	  // Valid

ptr3 = ptr2 – ptr1 - k;	          // Invalid, non-portable pointer conversion. 
                                  // Missing cast. See rule 1.
ptr3 = (int *)(ptr2 – ptr1) + k;  // Valid

ptr1 = ptr1 + 2;                  // Valid
ptr1 = ptr1 + k;                  // Valid

ptr3 = ptr1 + ptr2;               // Invalid, non-portable pointer conversion. 
                                  // Missing cast. See rule 1.
ptr3 = (int *) (ptr1 + ptr2)	  // Valid

ptr3 = ptr1 + ptr2 + k;	          // Invalid, non-portable pointer conversion. 
                                  // Missing cast. See rule 1.
ptr3 = (int *)(ptr1 + ptr2) + k;  // Valid

ptr1 = ptr1 * 2;                  // Invalid, illegal use of pointer. See rule 3.
ptr1 = ptr1 * k;                  // Invalid, illegal use of pointer. See rule 3.
ptr3 = ptr2 * ptr1;               // Invalid, illegal use of pointer. See rule 3.
ptr1 = ptr1 / 2;                  // Invalid, illegal use of pointer. See rule 3.
ptr1 = ptr1 / k;                  // Invalid, illegal use of pointer. See rule 3.
ptr3 = ptr2 / ptr1;               // Invalid, illegal use of pointer. See rule 3.

// TWO-DIMENSIONAL ARRAY

matrix               =>    Points to base address of two-dimensional array.
                           Since array decays to pointer.

*(matrix)            =>    Points to first row of two-dimensional array.
*(matrix + 0)        =>    Points to first row of two-dimensional array.
*(matrix + 1)        =>    Points to second row of two-dimensional array.

**matrix             =>    Points to matrix[0][0]
*(*(matrix + 0))     =>    Points to matrix[0][0]
*(*(matrix + 0) + 0) =>    Points to matrix[0][0]
*(*matrix + 1)       =>    Points to matrix[0][1]
*(*(matrix + 0) + 1) =>    Points to matrix[0][1]
*(*(matrix + 2) + 2) =>    Points to matrix[2][2]