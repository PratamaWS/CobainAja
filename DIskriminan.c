#include <stdio.h>
main()
{ float a , b, c,d ;
    printf("Program menentukan deskriminan\n");
    printf("Masukan nilai a = ");
    scanf("%f",&a);
    printf("Masukan nilai b = ");
    scanf("%f",&b);
    printf("Masukan nilai c = ");
    scanf("%f",&c);
    d = (b*b)- (4*a*c);
    printf("Nilai deskriminan adalah = %g",d);

}
