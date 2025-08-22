// Vowel count
#include<stdio.h>
int main()
{
    int vowel=0, alphabet=0, count;
    char letter;
    for (count=0; count<10; count++)
    {
    printf ("Enter letter a-z : ");
    scanf(" %c", &letter);

    if ((letter=='a') || (letter == 'e') || (letter=='i') || (letter=='o') || (letter=='u')){
          vowel++;
    }
  
    else alphabet++;

    
}
    printf ("Number of vowels: %d\n", vowel);
    printf ("Number of alphabet: %d\n", alphabet);
    return 0;
}