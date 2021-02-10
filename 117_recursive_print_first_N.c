
#include <stdio.h>
void print(int N);

int main()
{
        print(10);
        return 0; 
}
void print(int N)
{
        
        if (N >= 1)
        {
                print(N - 1);
                printf("%d ", N);
        }
        
}