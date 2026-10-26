/* Synthetic Xbox 0x2312E0 XYZ/SSE fixture, not linked game behavior. */
#include <stdint.h>
#include <stdio.h>
#include <xmmintrin.h>
#define CHECK(x) do { if (!(x)) { fprintf(stderr,"FAIL line %d: %s\n",__LINE__,#x); return 1; } } while(0)
int main(void)
{
    float origin[3]={10.f,20.f,30.f};
    float direction[3]={1.f,2.f,3.f};
    /* Original FUN_0001D0C0 outputs nine contiguous F32 in column stride 3. */
    float basis[9]={4.f,1.f,0.f,8.f,2.f,0.f,12.f,3.f,0.f};
    float scaled[3],matrix[10]={0};
    float t=2.f;
    CHECK(sizeof origin==12u && sizeof direction==12u);
    CHECK(sizeof basis==36u && sizeof matrix==40u);
    CHECK((uintptr_t)&origin[2]-(uintptr_t)&origin[0]==8u);
    CHECK((uintptr_t)&matrix[9]-(uintptr_t)&matrix[1]==32u);
    /* The original index is a 32-bit integer, not a host pointer. */
    uint32_t base=0xfffffff0u,index=3u;
    CHECK(base+index*12u==0x14u);
    for(int i=0;i<3;i++)scaled[i]=t*direction[i];
    const float tx=origin[0]+scaled[0],ty=origin[1]+scaled[1];
    matrix[0]=origin[2]+scaled[2];
    for(int i=0;i<3;i++)origin[i]+=basis[i*3]*0.25f;
    for(int i=0;i<3;i++)origin[i]-=basis[i*3+1]*0.1f;
    CHECK(origin[0]>10.89f && origin[0]<10.91f);
    CHECK(origin[1]>21.79f && origin[1]<21.81f);
    CHECK(origin[2]>32.69f && origin[2]<32.71f);
    /* Ghidra's erroneous unscaled Z subtraction would give 30.0. */
    CHECK(origin[2]!=30.f);
    direction[0]=tx-origin[0];
    direction[1]=ty-origin[1];
    direction[2]=matrix[0]-origin[2];
    const float squared=(direction[1]*direction[1]+direction[2]*direction[2])
                       +direction[0]*direction[0];
    const float len=_mm_cvtss_f32(_mm_sqrt_ss(_mm_set_ss(squared)));
    const float inv=_mm_cvtss_f32(_mm_rcp_ss(_mm_set_ss(len)));
    CHECK(len>4.f && len<5.f && inv>0.20f && inv<0.26f);
    for(int i=0;i<3;i++)direction[i]*=inv;
    CHECK(direction[0]>0.25f && direction[0]<0.29f);
    CHECK(direction[1]>0.51f && direction[1]<0.56f);
    CHECK(direction[2]>0.78f && direction[2]<0.83f);
    float movement_length=250.f;
    if(200.f<=movement_length)movement_length=200.f;
    CHECK(movement_length*0.005f==1.f);
    puts("PASS: guest index wrap, 3xF32, basis column scaling, SQRTSS/RCPSS, clamp");
    return 0;
}
