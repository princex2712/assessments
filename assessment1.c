// Create an application that can perform all string related operations


/* I've done it in both method without using Pre-Defined String function which is Method 1,
    And using Pre-Defined function which is Method 2
*/


//METHOD 1 (Without using Pre-defined String Functions)

/*
#include<stdio.h>
#include<ctype.h>

//length function which returns the length of array
int length(char arr[]){
    int len;
    for(int i =0;arr[i]!='\0';i++){
                len = i+1;
    }
    return len;
}

//  reverse function which directly print the reversed string
void reverse(char arr[],int size){
    for(int i = (size-1);i>=0;i--){
        printf("%c",arr[i]);
    }
}

//  concate function which directly prints the combined string
void concate(char arr[],char arr1[]){
    char result[100];
    int temp;
    for(int i=0;arr[i]!='\0';i++){
        result[i]=arr[i];
        temp=i;
        printf("%c",result[i]);
    }
    for(int i=0;arr1[i]!='\0';i++){
        result[temp+i+1]=arr1[i];
        printf("%c",result[temp+i+1]);
    }
}

//  pelindrome function return 0 or 1 which means false or true
int pelindrome(char arr[],int size){
    char peli[size];
    int n=0;
    for(int i = (size-1);i>=0;i--){
        peli[n] = arr[i];
        n++;
    }
    for(int i=0;i<=(size-1);i++){
        if(tolower(peli[i])!=tolower(arr[i])){
            return 0;
        }
    }
    return 1;
}

// copy function which copy your string in another variable
void copy(char arr[],int size){
    char cpy[100];
    
    for(int i=0;i<size;i++){
        cpy[i]=arr[i];
        printf("%c",cpy[i]);
    }
}

// vwlCon Function directly prints the number of constants and vowels
void vwlCon(char arr[],int size){
    int vowels=0,constant=0;
    
    for(int i=0;i<size;i++){
        arr[i]=tolower(arr[i]);
        if(arr[i]=='a' || arr[i]=='e' || arr[i]=='i' || arr[i]=='o' || arr[i]=='u'){
            vowels++;
        }else{
            constant++;
        }
    }
    printf("\nVowels: %d and Constants: %d",vowels,constant);
}

//  digit function directly prints the number of digits
void digit(char arr[],int size){
    int dig =0;
    for(int i=0;i<size;i++){
        if(arr[i]>='1' && arr[i]<='9'){
            dig++;
        }
    }
    printf("\n Number of Digit: %d",dig);

}

// frequancy function directly prints the result
void frequancy(char arr[],int size,char s){
    int c=0;
    for(int i=0;i<size;i++){
        arr[i]= tolower(arr[i]);
        if(arr[i]==s){
            c++;
        }
    }
    printf("\nNumber of %c in string: %d",s,c);
}

int main(){

//  initilize variable 
    int choice,choice1;

//  printing Main Menu and Taking users choice
    printf("\n\tMain Menu\t\n1.Reverse String\n2.Concatenation\n3.Palindrome\n4.Copy a string\n5.Length of the string\n6.Find number of vowels and consonants\n7.Find number of digits\n8.Frequency of character in s string\nEnter your choice:");
    scanf("%d",&choice);

//  Using Switch case to perform operation
    switch(choice){
        case 1:

//          initialize variable and taking input from user
            char usrInput[100];
            printf("\nEnter a String:");
            scanf("%s",&usrInput);


//          calling the reverse and length function
            reverse(usrInput,length(usrInput));
            break;

        case 2:

//          initialize variable and taking input from user
            char usrInput1[100];
            printf("\nEnter a String1:");
            scanf("%s",&usrInput);

//getchar() will consume the next line character to avoid problem in code
            getchar();

            printf("\nEnter a String2:");
            scanf("%s",&usrInput1);

//          calling the concate function and length function
            concate(usrInput,usrInput1);
            break;

        case 3:

//          taking input from user
            printf("\nEnter a String:");
            scanf("%s",&usrInput);  

//          printing result based on peli function output
            if(pelindrome(usrInput,length(usrInput))==1){
                printf("\nYour String is palindrome");
            }else{
                printf("\nYour String is not palindrome");               
            }
            break;

        case 4:

//          taking input from user
            printf("\nEnter a String:");
            scanf("%s",&usrInput);

//          calling copy function and length function
            copy(usrInput,length(usrInput));
            break;

        case 5:

//          taking input from user
            printf("\nEnter a String:");
            scanf("%s",&usrInput);

//          finding length of the string and print 
            printf("%d",length(usrInput));
            break;

        case 6:

//          taking input from user
            printf("\nEnter a String:");
            scanf("%s",&usrInput);

//          calling vwlCon function
            vwlCon(usrInput,length(usrInput));
            break;
        
        case 7:

//          taking input from user
            printf("\nEnter a String:");
            scanf("%s",&usrInput);

//          calling digit function
            digit(usrInput,length(usrInput));
            break;

        case 8:
//          taking input from user and initialize the variable
            char s;
            printf("\nEnter a String:");
            scanf("%s",&usrInput);
            getchar();
            printf("\nEnter a character you want to check frequancy:");
            scanf("%c",&s);

//          calling frequancy function 
            frequancy(usrInput,length(usrInput),s);
            break;

        default:
            printf("\nPlease Enter Your Choice From 1 To 8!");
    }

//  taking user input if they want to continue
    printf("\nIf you want to continue then Enter 1 else Enter 0 :");
    scanf("%d",&choice1);

    if(choice1==1){
        main();
    }

    return 0;
}
*/

//METHOD 2 (Using Pre-defined String Functions)

#include<stdio.h>
#include<string.h>
#include<ctype.h>

//  pelindrome function return 0 or 1 which means false or true
int pelindrome(char arr[],int size){
    char peli[size];
    int n=0;
    for(int i = (size-1);i>=0;i--){
        peli[n] = arr[i];
        n++;
    }
    for(int i=0;i<=(size-1);i++){
        if(tolower(peli[i])!=tolower(arr[i])){
            return 0;
        }
    }
    return 1;
}

// vwlCon Function directly prints the number of constants and vowels
void vwlCon(char arr[],int size){
    int vowels=0,constant=0;
    
    for(int i=0;i<size;i++){
        arr[i]=tolower(arr[i]);
        if(arr[i]=='a' || arr[i]=='e' || arr[i]=='i' || arr[i]=='o' || arr[i]=='u'){
            vowels++;
        }else{
            constant++;
        }
    }
    printf("\nVowels: %d and Constants: %d",vowels,constant);
}

//  digit function directly prints the number of digits
void digit(char arr[],int size){
    int dig =0;
    for(int i=0;i<size;i++){
        if(arr[i]>='1' && arr[i]<='9'){
            dig++;
        }
    }
    printf("\n Number of Digit: %d",dig);

}

// frequancy function directly prints the result
void frequancy(char arr[],int size,char s){
    int c=0;
    for(int i=0;i<size;i++){
        arr[i]= tolower(arr[i]);
        if(arr[i]==s){
            c++;
        }
    }
    printf("\nNumber of %c in string: %d",s,c);
}

int main(){
//  initilize variable 
    int choice,choice1;

//  printing Main Menu and Taking users choice
    printf("\n\tMain Menu\t\n1.Reverse String\n2.Concatenation\n3.Palindrome\n4.Copy a string\n5.Length of the string\n6.Find number of vowels and consonants\n7.Find number of digits\n8.Frequency of character in s string\nEnter your choice:");
    scanf("%d",&choice);

//  Using Switch case to perform operation
    switch(choice){
        case 1:

//          initialize variable and taking input from user
            char usrInput[100];
            printf("\nEnter a String:");
            scanf("%s",&usrInput);

//          using for loop to print result 
            for(int i=(strlen(usrInput)-1);i>=0;i--){
                printf("%c",usrInput[i]);
            }
            break;
        
        case 2:

//          taking input from user
            char usrInput1[100];
            printf("\nEnter a String 1:");
            scanf("%s",&usrInput);

//          getchar() will consume the nextline as input which cause of problem
            getchar();

//          taking input from user
            printf("\nEnter a String 2:");
            scanf("%s",&usrInput1);

//          combining strings   
            strcat(usrInput,usrInput1);

//          printing result
            printf("\nConcated String: %s",usrInput);
            break;

        case 3:

//          taking input from user
            printf("\nEnter a String:");
            scanf("%s",&usrInput);

//          calling pelindrome function
            if(pelindrome(usrInput,strlen(usrInput))==1){
                printf("\nYour String is Pelindrome");
            }else{
                printf("\nYour String is not Pelindrome");           
            }
            break;
        
        case 4:

//          taking input from user
            printf("\nEnter a String:");
            scanf("%s",&usrInput);

//          copying userInput array in another array
            strcpy(usrInput1,usrInput);

//          printing copied array
            printf("\nCopied String : %s",usrInput1);      
            break;

        case 5:

//          taking input from user
            printf("\nEnter a String:");
            scanf("%s",&usrInput);   
//          callin strlen() function to find length and print directly
            printf("\nString Length is : %d",strlen(usrInput));
            break;

        case 6:

//          taking input from user
            printf("\nEnter a String:");
            scanf("%s",&usrInput);

//          calling vwlCon function
            vwlCon(usrInput,strlen(usrInput));
            break;
   
        case 7:

//          taking input from user
            printf("\nEnter a String:");
            scanf("%s",&usrInput);

//          calling digit function
            digit(usrInput,strlen(usrInput));
            break;

        case 8:
//          taking input from user and initialize the variable
            char s;
            printf("\nEnter a String:");
            scanf("%s",&usrInput);
            getchar();
            printf("\nEnter a character you want to check frequancy:");
            scanf("%c",&s);

//          calling frequancy function 
            frequancy(usrInput,strlen(usrInput),s);
            break;

        default:
            printf("\nPlease Enter Your Choice From 1 To 8!");
    }

//  taking user input if they want to continue
    printf("\nIf you want to continue then Enter 1 else Enter 0 :");
    scanf("%d",&choice1);

    if(choice1==1){
        main();
    }
    return 0;
}