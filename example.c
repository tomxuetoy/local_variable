#include <stdio.h>

int foo(void)
{
        int i;
        printf("%d\n", i);
        i = 777;
}

int main(void)
{
        foo();
		printf("hello\n");
		foo();
        return 0;
}
/* result:
maemo@maemo-desktop:~/mycode/trial_local_variable$ ./a.out 
134513793
hello
12529652
maemo@maemo-desktop:~/mycode/trial_local_variable$ ./a.out 
134513793
hello
16613364
maemo@maemo-desktop:~/mycode/trial_local_variable$ ./a.out 
134513793
hello
12673012
*/
