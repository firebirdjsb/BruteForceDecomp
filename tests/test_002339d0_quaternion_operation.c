/* Finite bounded host-operation regression, not original Xbox execution. */
#include <assert.h>
#include <math.h>
#include <stdint.h>
#include "bf_002339d0_quaternion_operation.h"
static void near(float x, float y) { assert(fabsf(x-y)<0.00005f); }
static void test(const float matrix[9],const float expected[4]) {
    struct { uint32_t lo; float q[4]; uint32_t hi; } buf;
    buf.lo=0xdeadbeefU;buf.hi=0xfeed1234U;
    assert(bf_002339d0_quaternion_operation(buf.q,matrix)==buf.q);
    for (unsigned i=0;i<4;i++) near(buf.q[i],expected[i]);
    assert(buf.lo==0xdeadbeefU&&buf.hi==0xfeed1234U);
}
int main(void) {
    const float identity[9]={1,0,0,0,1,0,0,0,1};
    const float rx[9]={1,0,0,0,-1,0,0,0,-1};
    const float ry[9]={-1,0,0,0,1,0,0,0,-1};
    const float rz[9]={-1,0,0,0,-1,0,0,0,1};
    const float q0[4]={1,0,0,0},qx[4]={0,1,0,0},qy[4]={0,0,1,0},qz[4]={0,0,0,1};
    test(identity,q0);test(rx,qx);test(ry,qy);test(rz,qz);
    return 0;
}
