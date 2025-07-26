/*concatinate string predefined funcn is
 strcat(destination strg s1,source strng s2)*/

 //drawback buffer over flow it will not check the size of the string
 #include<stdio.h>
 #include<string.h>
 int main()
 {
    int l1,l2;
    char s1[]="harshitha";
    char s2[]="pamidimukkala";
    l1=strlen(s1);
    l2=strlen(s2);
    printf("l1 is %d",l1);
    printf("\nl2 is %d",l2);
    strcat(s1,s2);
    printf("\n%s",s1);
 }
