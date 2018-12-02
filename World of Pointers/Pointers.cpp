**********************************************************************************************************************************
**********************************************************************************************************************************
                                                    BASICS OF POINTERS
 *********************************************************************************************************************************
 *********************************************************************************************************************************


When we write // int i;
It means that we ordered our computer to block a memory of 4 byte in our computer and each byte has some address
now if we write //int *p = & i;
It means that we have intialised a pointer variable to address of i . Pointers in computer Science is made to store 
address. To access that variable to to change the value inside the variable we have two roads either with the help of
pointer or with the help of variable itself. Now we have address of the variable inside p to get the value inside p we derefrence
it like we write *p.

  
  
  
  
  
  *******************************************************************************************************************************
  *******************************************************************************************************************************
                                               POINTERS ARITHMETIC
  ******************************************************************************************************************************
  ******************************************************************************************************************************
  
   Now we know that we have a pointer variable and we want to increment the value present inside the address so first we derefrence
   it and then add 1 like // *(p) + 1
   But if we simply do this p+1 then if my p has address of 400 it will be incremented by 4 and become 404.
