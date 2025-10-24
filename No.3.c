
#include <float.h>
#include <limits.h>
#include <stdio.h>

int main(void)
{
    printf("float型の最大値:%g\n",FLT_MAX);
    printf("float型の最小値:%g\n",FLT_MIN);
    
    printf("long long int型の符号なし最大値:%Lf\n",ULLONG_MAX);
    printf("long long int型の最大値:%Lf\n",LLONG_MAX);
    printf("long long int型の最小値:%Lf\n",LLONG_MIN);
    
    printf("char型の符号なし最大値:%d\n",UCHAR_MAX);
    printf("char型の最大値:%d\n",CHAR_MAX);
    printf("char型の最小値:%d\n",CHAR_MIN);
    
    return 0;
}