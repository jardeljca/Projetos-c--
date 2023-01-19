#include <iostream>
 
using namespace std;
 
int main() {
 
double not1, not2, media;

scanf("%lf", &not1);
scanf("%lf", &not2);

media = ((not1*3.5) + (not2*7.5))/11;

printf("MEDIA = %.5lf\n", media);
 
    return 0;
}
