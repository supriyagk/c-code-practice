//AND && operator
#include <stdio.h>
int main() {
  int x = 5;
  int y = 3;
// Returns 1 (true) because 5 is greater than 3 AND 5 is less than 10
  printf("%d", x > 3 && x < 10);
  return 0;
}


//OR || operator
#include <stdio.h>
int main() {
  int x = 5;
  int y = 3;
// Returns 1 (true) because one of the conditions are true (5 is greater than 3, but 5 is not less than 4)
  printf("%d", x > 3 || x < 4);
  return 0;
}


//NOT ! operator
#include <stdio.h>
int main() {
  int x = 5;
  int y = 3;
// Returns false (0) because ! (not) is used to reverse the result
  printf("%d", !(x > 3 && x < 10));
  return 0;
}
