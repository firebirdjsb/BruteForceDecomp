/* Bounded host reference for original Xbox 0x0026A810 guest operations.
 * A local 80-bit host reference does not establish Xbox x87 status,
 * precision/control, NaN payload, or guest SEH equivalence.
 */
#include "bf_0026a810_guest_matrix.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define BASE UINT32_C(0x100000)
#define SIZE UINT32_C(0x300000)
#define ENTRY (BASE+UINT32_C(0x70000))
#define LEFT (BASE+UINT32_C(0x10000))
#define RIGHT (BASE+UINT32_C(0x20000))
#define OUT (BASE+UINT32_C(0x40000))
#define RET UINT32_C(0x002696e0)
#define CHECK(c) do{++checks;if(!(c)){fprintf(stderr,"FAIL %d: %s\n",__LINE__,#c);exit(1);}}while(0)
static unsigned checks;
typedef struct fixture {
    unsigned char *data;
    unsigned reads,writes,loads,muls,adds,pops,fail_nread;
    uint32_t fail_write;
    long double st[8];
    unsigned depth;
} fixture;
static bool mapped(uint32_t a){
    return a>=BASE && (uint64_t)(a-BASE)+4u<=SIZE;
}
static bool rd(void*v,uint32_t a,uint32_t*w){
    fixture*f=v;f->reads++;
    if(!mapped(a)||f->reads==f->fail_nread)return false;
    memcpy(w,f->data+a-BASE,4);return true;
}
static bool wr(void*v,uint32_t a,uint32_t w){
    fixture*f=v;f->writes++;
    if(!mapped(a)||a==f->fail_write)return false;
    memcpy(f->data+a-BASE,&w,4);return true;
}
static uint32_t bits(float a){uint32_t w;memcpy(&w,&a,4);return w;}
static float f32(uint32_t w){float f;memcpy(&f,&w,4);return f;}
static bool fld(void*v,uint32_t a){
    fixture*f=v;f->loads++;
    if(f->depth>=8)return false;
    f->st[f->depth++]=f32(a);return true;
}
static bool fmul(void*v,uint32_t a){
    fixture*f=v;f->muls++;
    if(f->depth==0)return false;
    f->st[f->depth-1]*=f32(a);return true;
}
static bool faddp(void*v){
    fixture*f=v;f->adds++;
    if(f->depth<2)return false;
    f->st[f->depth-2]+=f->st[f->depth-1];
    f->depth--;return true;
}
static bool fstp(void*v,uint32_t*a){
    fixture*f=v;f->pops++;
    if(f->depth==0)return false;
    *a=bits((float)f->st[--f->depth]);return true;
}
static uint32_t get(fixture*f,uint32_t a){
    uint32_t w;CHECK(mapped(a));memcpy(&w,f->data+a-BASE,4);return w;
}
static void put(fixture*f,uint32_t a,uint32_t w){
    CHECK(mapped(a));memcpy(f->data+a-BASE,&w,4);
}
static void seed(fixture*f,unsigned m,unsigned n,unsigned k){
    memset(f->data,0xa5,SIZE);
    f->reads=f->writes=f->loads=f->muls=f->adds=f->pops=f->depth=f->fail_nread=0;
    f->fail_write=0;
    put(f,ENTRY,RET);put(f,ENTRY+4,OUT);
    put(f,ENTRY+8,LEFT);put(f,ENTRY+12,RIGHT);
    put(f,LEFT+0x510,m);put(f,LEFT+0x514,k);
    put(f,RIGHT+0x510,55u);put(f,RIGHT+0x514,n);
    put(f,0x3a4f88u,bits(0.f));
    for(unsigned row=0;row<m;row++)
      for(unsigned c=0;c<k;c++)
        put(f,LEFT+row*0x48u+c*4u,bits((float)((row+1u)*10u+c+1u)));
    for(unsigned row=0;row<n;row++)
      for(unsigned c=0;c<k;c++)
        put(f,RIGHT+row*0x48u+c*4u,bits((float)(row+1u+c)));
}
static bf_0026a810_result run(fixture*f,bool df){
    const bf_0026a810_mem m={f,rd,wr};
    const bf_0026a810_x87 fp={f,fld,fmul,faddp,fstp};
    const bf_0026a810_entry a={ENTRY,0x11112222u,0x33334444u,
                                0x55556666u,0x77778888u,df};
    return bf_0026a810_execute(&m,&fp,a);
}
static void cases(fixture*f){
    for(unsigned m=0;m<4;m++)for(unsigned n=0;n<5;n++)for(unsigned k=0;k<5;k++){
        seed(f,m,n,k);
        uint32_t before[0x146];
        for(unsigned i=0;i<0x146;i++)before[i]=get(f,ENTRY-0x518+4u*i);
        const bf_0026a810_result r=run(f,false);
        CHECK(r.status==BF_0026A810_OK&&r.pc==0x26a8f5u);
        CHECK(r.next_eip==RET&&r.esp==ENTRY+4u);
        CHECK(r.eax==OUT&&r.ebx==0x55556666u&&r.ebp==0x77778888u);
        CHECK(r.esi==0x11112222u&&r.edi==0x33334444u&&r.ecx==0u);
        CHECK(r.products==m*n*k&&r.cells==m*n&&r.copied_words==0x146u);
        CHECK(f->depth==0&&f->muls==m*n*k&&f->adds==m*n*k);
        CHECK(f->pops==(k?m*n:0));
        CHECK(get(f,OUT+0x144u*4u)==m&&get(f,OUT+0x145u*4u)==55u);
        for(unsigned i=0;i<0x146u;i++){
            const unsigned row=i/18u,col=i%18u;
            uint32_t expected=before[i];
            if(row<m&&col<n){
                long double sum=0;
                for(unsigned x=0;x<k;x++)
                  sum+=(long double)((row+1u)*10u+x+1u)*(col+1u+x);
                expected=bits((float)sum);
            }
            if(i==0x144u)expected=m;
            if(i==0x145u)expected=55u;
            CHECK(get(f,OUT+i*4u)==expected);
        }
    }
}
static void nonzero_accumulator(fixture*f){
    /* Original 26A87E loads its initial x87 accumulator from a guest
     * m32fp global; no host zero assumption is valid. */
    seed(f,1u,1u,2u);
    put(f,UINT32_C(0x003a4f88),bits(1.5f));
    const bf_0026a810_result r=run(f,false);
    CHECK(r.status==BF_0026A810_OK&&r.products==2u);
    CHECK(get(f,OUT)==bits(36.5f));
    seed(f,1u,1u,0u);
    put(f,UINT32_C(0x003a4f88),bits(1.5f));
    const bf_0026a810_result none=run(f,false);
    CHECK(none.status==BF_0026A810_OK);
    CHECK(get(f,OUT)==bits(0.f));
}
static void faults(fixture*f){
    seed(f,1,1,1);f->fail_nread=1;
    bf_0026a810_result r=run(f,false);
    CHECK(r.status==BF_0026A810_READ_FAULT&&r.fault_address==ENTRY+8u);
    seed(f,1,1,1);f->fail_write=ENTRY-0x518u;r=run(f,false);
    CHECK(r.status==BF_0026A810_WRITE_FAULT&&r.pc==0x26a876u&&r.cells==0u);
    seed(f,1,1,1);f->fail_write=OUT+8u;r=run(f,false);
    CHECK(r.status==BF_0026A810_WRITE_FAULT&&r.copied_words==2u);
    seed(f,0,0,0);r=run(f,true);
    CHECK(r.status==BF_0026A810_OK&&r.copied_words==0x146u);
    CHECK(get(f,OUT)==0xa5a5a5a5u);
    const bf_0026a810_entry bad={ENTRY,0,0,0,0,false};
    CHECK(bf_0026a810_execute(NULL,NULL,bad).status==BF_0026A810_INVALID);
}
int main(void){
    fixture f={0};f.data=malloc(SIZE);CHECK(f.data);
    cases(&f);nonzero_accumulator(&f);faults(&f);
    printf("PASS original 0026A810 guest matrix and raw REP: %u assertions\n",checks);
    free(f.data);return 0;
}
