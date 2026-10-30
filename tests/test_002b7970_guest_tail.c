/* Bounded x87 and host SSE intrinsics reference.
 * This checks guest-memory instruction ordering and register-lane
 * behavior, not Xbox MXCSR/x87 exception or NaN payload parity.
 */
#include "bf_002b7970_guest_tail.h"
#include <xmmintrin.h>
#include <emmintrin.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define BASE UINT32_C(0x100000)
#define SIZE UINT32_C(0x310000)
#define E (BASE+UINT32_C(0x18000))
#define D (BASE+UINT32_C(0x20000))
#define S (BASE+UINT32_C(0x28000))
#define RET UINT32_C(0x001f3b31)
#define CHECK(v) do{++checks;if(!(v)){fprintf(stderr,"FAIL %d: %s\n",__LINE__,#v);exit(1);}}while(0)
static unsigned checks;
typedef struct fixture {
 unsigned char *data;unsigned reads32,writes32,reads64,writes64,loads,muls,stores,smuls,sadds;
 uint32_t read_fault,write_fault,read64_fault,write64_fault;
 long double st[8];unsigned depth;
} fixture;
static bool mapped(uint32_t a,unsigned len){return a>=BASE&&(uint64_t)(a-BASE)+len<=SIZE;}
static bool rd32(void*v,uint32_t a,uint32_t*w){fixture*f=v;f->reads32++;if(!mapped(a,4)||a==f->read_fault)return false;memcpy(w,f->data+a-BASE,4);return true;}
static bool wr32(void*v,uint32_t a,uint32_t w){fixture*f=v;f->writes32++;if(!mapped(a,4)||a==f->write_fault)return false;memcpy(f->data+a-BASE,&w,4);return true;}
static bool rd64(void*v,uint32_t a,uint64_t*w){fixture*f=v;f->reads64++;if(!mapped(a,8)||a==f->read64_fault)return false;memcpy(w,f->data+a-BASE,8);return true;}
static bool wr64(void*v,uint32_t a,uint64_t w){fixture*f=v;f->writes64++;if(!mapped(a,8)||a==f->write64_fault)return false;memcpy(f->data+a-BASE,&w,8);return true;}
static uint32_t bits(float a){uint32_t w;memcpy(&w,&a,4);return w;}
static float val(uint32_t w){float f;memcpy(&f,&w,4);return f;}
static void put(fixture*f,uint32_t a,uint32_t w){CHECK(mapped(a,4));memcpy(f->data+a-BASE,&w,4);}
static uint32_t get(fixture*f,uint32_t a){uint32_t w;CHECK(mapped(a,4));memcpy(&w,f->data+a-BASE,4);return w;}
static bool fld(void*v,uint32_t w){fixture*f=v;f->loads++;if(f->depth>=8)return false;f->st[f->depth++]=(long double)val(w);return true;}
static bool fmul(void*v,uint32_t w){fixture*f=v;f->muls++;if(f->depth==0)return false;f->st[f->depth-1]*=(long double)val(w);return true;}
static bool fstp(void*v,uint32_t *w){fixture*f=v;f->stores++;if(f->depth==0)return false;*w=bits((float)f->st[--f->depth]);return true;}
static bool packed(void*v,const uint32_t a[4],const uint32_t b[4],uint32_t out[4],bool mul){fixture*f=v;if(mul)f->smuls++;else f->sadds++;
 float af[4],bf[4];memcpy(af,a,16);memcpy(bf,b,16);
 __m128 va=_mm_loadu_ps(af),vb=_mm_loadu_ps(bf);
 __m128 rr=mul?_mm_mul_ps(va,vb):_mm_add_ps(va,vb);
 float result[4];_mm_storeu_ps(result,rr);memcpy(out,result,16);return true;
}
static bool mulps(void*v,const uint32_t a[4],const uint32_t b[4],uint32_t out[4]){return packed(v,a,b,out,true);}
static bool addps(void*v,const uint32_t a[4],const uint32_t b[4],uint32_t out[4]){return packed(v,a,b,out,false);}
static void seed(fixture*f,unsigned k){memset(f->data,0xa5,SIZE);
 f->reads32=f->writes32=f->reads64=f->writes64=f->loads=f->muls=f->stores=f->smuls=f->sadds=f->depth=0;
 f->read_fault=f->write_fault=f->read64_fault=f->write64_fault=0;
 put(f,E,RET);put(f,E+4u,D);put(f,E+8u,S);
 for(unsigned j=0;j<0x14u;j++)put(f,S+4u*j,bits((float)(j+1u)*0.125f+(float)(k%11u)*0.25f));
 put(f,0x3a4f74u,bits(0.5f));
}
static bf_002b7970_tail_result run(fixture*f,bf_002b7970_xmm*x){
 const bf_002b7970_tail_io m={{f,rd32,wr32},rd64,wr64};
 const bf_002b7970_tail_ops op={f,fld,fmul,fstp,mulps,addps};
 return bf_002b7970_execute_tail(&m,&op,E,x);
}
static bf_002b7970_xmm start_xmm(void){bf_002b7970_xmm x={0};
 x.xmm1[1]=bits(3.f);x.xmm2[1]=bits(7.f);x.xmm3[1]=bits(11.f);return x;}
static void check_vector(fixture*f,unsigned k){
 seed(f,k);
 /* Model only the prefix's independently verified input transfers:
  * D+0x04 is the original floating-point scalar word. */
 put(f,D,UINT32_C(0x39efb8));
 put(f,D+4u,get(f,S+0x20u));put(f,D+8u,get(f,S+0x24u));
 for(unsigned j=0;j<3u;j++){
   put(f,D+0x10u+4u*j,get(f,S+4u*j));
   put(f,D+0x30u+4u*j,get(f,S+4u*j));
   put(f,D+0x40u+4u*j,get(f,S+0x10u+4u*j));
 }
 bf_002b7970_xmm x=start_xmm();
 const bf_002b7970_tail_result r=run(f,&x);
 CHECK(r.status==BF_002B7970_TAIL_OK&&r.pc==0x2b7aedu);
 CHECK(r.return_eip==RET&&r.final_esp==E+12u&&r.final_eax==D);
 CHECK(r.x87_multiplies==1u&&r.sse_mulps==2u&&r.sse_addps==2u);
 CHECK(f->depth==0u&&f->loads==1u&&f->muls==1u&&f->stores==1u);
 CHECK(f->smuls==2u&&f->sadds==2u);
 const float scalar=val(get(f,S+0x20u));
 for(unsigned j=0;j<3u;j++){
    float a=val(get(f,S+4u*j)),b=val(get(f,S+0x10u+4u*j));
    CHECK(get(f,D+0x30u+4u*j)==bits(a+(scalar*0.5f)*b));
    CHECK(get(f,D+0x20u+4u*j)==bits(a+scalar*b));
 }
 CHECK(get(f,D+0x2cu)==0u&&get(f,D+0x0cu)==0u);
 CHECK(get(f,D+0x3cu)==UINT32_C(0xa5a5a5a5));
 CHECK(x.xmm3[0]==bits(scalar));
 CHECK(x.xmm1[1]==bits((3.f+7.f*(scalar*0.5f))+(7.f*(scalar*0.5f))*scalar));
 CHECK(x.xmm2[1]==bits((7.f*(scalar*0.5f))*scalar));
}
static void faults(fixture*f){
 seed(f,0);bf_002b7970_xmm x=start_xmm();
 f->read_fault=D+4u;
 bf_002b7970_tail_result r=run(f,&x);
 CHECK(r.status==BF_002B7970_TAIL_READ_FAULT&&r.fault_va==D+4u&&r.pc==0x2b7a31u);
 seed(f,0);x=start_xmm();f->read64_fault=D+0x44u;
 r=run(f,&x);
 CHECK(r.status==BF_002B7970_TAIL_READ_FAULT&&r.pc==0x2b7a5eu);
 CHECK(get(f,E-4u)==bits(val(get(f,D+4u))*0.5f));
 seed(f,0);x=start_xmm();f->write64_fault=D+0x34u;
 r=run(f,&x);
 CHECK(r.status==BF_002B7970_TAIL_WRITE_FAULT&&r.pc==0x2b7a80u);
 CHECK(f->writes64==1u);
 CHECK(get(f,D+0x0cu)==UINT32_C(0xa5a5a5a5));
 seed(f,0);x=start_xmm();f->write_fault=D+0x2cu;
 r=run(f,&x);
 CHECK(r.status==BF_002B7970_TAIL_WRITE_FAULT&&r.pc==0x2b7adcu);
 CHECK(get(f,D+0x0cu)==UINT32_C(0xa5a5a5a5));
 seed(f,0);x=start_xmm();put(f,E,UINT32_C(0x43218765));
 r=run(f,&x);
 CHECK(r.status==BF_002B7970_TAIL_OK&&r.return_eip==UINT32_C(0x43218765));
 CHECK(bf_002b7970_execute_tail(NULL,NULL,E,&x).status==BF_002B7970_TAIL_INVALID);
}
int main(void){fixture f={0};f.data=malloc(SIZE);CHECK(f.data);
 for(unsigned i=0;i<512u;i++)check_vector(&f,i);
 faults(&f);
 printf("PASS 002B7970 x87/SSE tail %u assertions\n",checks);
 free(f.data);return 0;}
