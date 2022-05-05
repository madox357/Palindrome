#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declare 4 different variables, assign 0 to rev variable which is to be added in a formula later
    int temp, n , r , rev = 0;
    printf("Enter the number: \n");
    scanf("%d", &n);
    /*leaving the temp value intact, assign new variable to temp to calculate rev*/
    temp = n;
    /* this loop iterates while the new temp value does not equal to zero: note that the new n value is not same
    as value of temp but the result of going through the process. */
    while (n!= 0)
    {
        /* while trying to find the last digit value the modules operator focus on finding the remainder while disregarding other values, therefore a 35%10 would result in 5 */
        r = n%10;
        /*take the 0 value of rev multiply by 10 and add the r=5 to get rev value of 5 which reveals the position and value of last digit of our n value */
        rev = rev * 10 + r;
        /* get the quotient value of 3 when dividing n=35 by 10*/
        n = n/10;
    }
    /* compare value of temp with final rev to determine result*/
    if (rev == temp)
        printf("This number is a palindrome \n");
    else
         printf("This number is not a palindrome \n");

    return 0;
    //change master
}
