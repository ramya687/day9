#include <stdio.h>
void even(int x) {
    if (x < 0)
        return;
    if (x % 2 == 0)
        printf("%d  ", x);
    even(x - 1);
}
int main() {
    even(10);        
}

