#include <stdio.h>
#include<string.h>
//function myStrlen returns the length of string
int myStrlen(char c[]) {
    int i=0; 
    //count the length
    for(i=0;i<c[i]!='\0';i++);
    //return the length
    return i;
}
//function removeVowels returns string without vowels
char* removeVowels(char c[]) {
    int i=0,check,j;
    //while loop 
    while(c[i]!='\0') {
        check=0;
        //check if string element is vowel
        if(c[i]=='a'||c[i]=='e'||c[i]=='i'||c[i]=='o'||c[i]=='u'||c[i]=='A'||c[i]=='E'||c[i]=='I'||c[i]=='O'||c[i]=='U')
        {
            j=i;
            while(c[j-1]!='\0') {
                //remove vowel
                c[j]=c[j+1];
                //increment j
                j++;
            }
            //initialize check to 1
            check = 1;
        }
        if(check==0)
            i++;
    }
    //return the new string
    return c;
}
//function duplicateString takes string and num as parameter
char* duplicateString(char c[],int n) {
    //compute num
    int num=myStrlen(c)*n;
    int i,x=0;
    for(i=myStrlen(c)-1;i<num-1;i++) {
        //create a string with duplicates
        c[i+1]=c[x];
        x++;
    }
    //return the new string
    return c;
}
int main()
{
    //declare a array of char
    char ch[100]; 
    int num;
    //ask the user to enter the word
    printf("Enter a word: ");
    scanf("%s",ch);
    //function call with char array as parameter and print the length
    printf("That word has length: %d\n",myStrlen(ch));
    //function call to removeVowels
    printf("%s without vowels is: ",ch);
    printf("%s\n",removeVowels(ch));
    //ask the user to enter duplicates to make
    printf("Enter how many duplicates to make: ");
    scanf("%d",&num);
    //function call with array of char and num as parameter
    printf("%s",duplicateString(ch,num));
    return 0;
    //Hello this is Erin
}