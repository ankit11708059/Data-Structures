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
 
         
    *****************************************************************************************************************************
    *****************************************************************************************************************************
                                             ARRAY AND POINTERS
    *****************************************************************************************************************************
    *****************************************************************************************************************************
    Let us suppose that we have initialised a array as // a[3]={1,2,3};
    Now we know that the we can can access the array value as a[0] here we will get first value of the array
    But if we cout just only a then we get the address of first index and if we derefrence a then we would get the value at first
    index. We Just cout &a also then we will get the address of first value.
      
      
      
     ***************************************************************************************************************************
     ***************************************************************************************************************************
