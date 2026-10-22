#include <math.h>
#include <assert.h>
#include <stdio.h>
extern long double FUN_002b6490(float);
int main(void)
{
    assert((float)FUN_002b6490(4.0f)>0.499f);
    assert((float)FUN_002b6490(4.0f)<0.501f);
    assert(isinf((float)FUN_002b6490(0.0f)));
    assert(isnan((float)FUN_002b6490(-1.0f)));
    puts("x86 RSQRTSS scalar reconstruction: PASS (host SSE, not Xbox runtime)");
    return 0;
}
