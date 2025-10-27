#include<stdio.h>
int main(){
    int p,e,m,k,i,c,s,cr,a;
    printf("Enter marks for: \n");
    printf("Pre-technical: ");
    scanf("%i",&p);
    printf("English: ");
    scanf("%i",&e);
    printf("Mathematics: ");
    scanf("%i",&m);
    printf("Kiswahili: ");
    scanf("%i",&k);
    printf("Intergrated science: ");
    scanf("%i",&i);
    printf("Creative Arts: ");
    scanf("%i",&c);
    printf("social: ");
    scanf("%i",&s);
    printf("CRE: ");
    scanf("%i",&cr);
    printf("Agriculture: ");
    scanf("%i",&a);
    printf("After Grading,your Total marks is  ");
    int Total_marks = (p+e+m+k+i+c+s+cr+a)*2;
    printf("%i\n`",Total_marks);
    if (Total_marks > 675)
        {printf("Exceeding Expectation");}
    else if(Total_marks > 450)
        {printf("Meeting Expectation");}
    else if (Total_marks >225)
        {printf("Approaching Expectation");}
    else
        {printf("Below Expectation");}
    return;
}
