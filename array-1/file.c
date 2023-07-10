#include<stdio.h>
#include<string.h>
#include <stdlib.h>



int main(){
 FILE *fptr;
 fptr=fopen("D:\\Sajid.txt","r");
 if(fptr==NULL){
    exit(1);
 }
char word[1000];
char grab[100];
fseek(fptr,2,SEEK_SET);
while(!feof(fptr)){
    char ch=fgetc(fptr);
    printf("%c",ch);
}
    
   

 
}

