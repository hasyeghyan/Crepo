#include <stdio.h>

int main() {
    union Time {
          struct {
	         int hours;
		 int minutes;
	  }t1;
	  struct {
	         float totalHours;
	  }t2;
    };
    
  
    
    union Time t = {0};
    printf("Input total hours: ");
    scanf("%f", &t.t2.totalHours);
    printf("%d %d\n", t.t1.hours, t.t1.minutes);
    

    return 0;
}
