#include <stdio.h>

int main(){

    int opt, amt;
    float balance;
    balance = 0;
    amt = 0;
    do {
        printf ("====== ATM MENU ======\n");
    printf ("1. Check Balance\n2. Deposit Money\n3. Withdraw Money\n4. Exit\n");
    printf ("Choose an option: ");
    scanf ("%d", &opt);
   
    switch (opt)
    {
    case 1:
        printf ("Current Balance: %.2f", balance);
        break;
    case 2:
        printf("Enter amount to deposit: ");
        scanf("%d", &amt);
        balance += amt;
        break;
    case 3:
        printf ("Enter amount to withdraw: ");
        scanf ("%d", &amt);
        balance -= amt;
        printf ("Withdrawl successful.");
        /* code */
        break;
    }
    printf ("\n\n");
    } while (opt != 4);
    printf ("Thank you for using the ATM.\n");

    return 0;
}

