#include <Windows.h>
#include <stdio.h>
int main()
{
        SYSTEMTIME stime;
        GetSystemTime(&stime);
        printf("%d/%d/%d", stime.wDay, stime.wMonth, stime.wYear);
        return 0;
}
