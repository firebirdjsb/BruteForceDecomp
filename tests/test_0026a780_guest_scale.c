/* Original 0x0026A780 guest x87/stack test. Bounded host-long-double
 * arithmetic is only a reference, not Xbox FPU exception parity. */
#include "bf_0026a780_guest_scale.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BASE UINT32_C(0x100000)
#define SIZE UINT32_C(0x200000)
#define ENTRY (BASE+UINT32_C(0x18000))
#define OBJECT (BASE+UINT32_C(0x4000))
#define WEIGHTS (BASE+UINT32_C(0x8000))
#define OUTPUT (BASE+UINT32_C(0x10000))
#define RET UINT32_C(0x002696c3)
#define CHECK(x) do {++checks;if(!(x)){fprintf(stderr,"FAIL %d: %s\n",__LINE__,#x);exit(1);}}while(0)
typedef struct fixture {
 unsigned char *bytes;
 uint32_t reads,writes,loads,muls,pops;
 uint32_t fail_read,fail_write;
 long double st[8];int depth;
} fixture;
static unsigned checks;
static bool mapped(uint32_t a){return a>=BASE && (uint64_t)(a-BASE)+4u<=SIZE;}
static bool read32(void*v,uint32_t a,uint32_t*w){
 fixture*f=v;f->reads++;
 if(a==f->fail_read||!mapped(a))return false;
 memcpy(w,f->bytes+a-BASE,4);return true;
}
static bool write32(void*v,uint32_t a,uint32_t w){
 fixture*f=v;f->writes++;
 if(a==f->fail_write||!mapped(a))return false;
 memcpy(f->bytes+a-BASE,&w,4);return true;
}
static uint32_t bits(float x){uint32_t w;memcpy(&w,&x,4);return w;}
static float f32(uint32_t x){float f;memcpy(&f,&x,4);return f;}
static bool fld(void*v,uint32_t w){fixture*f=v;f->loads++;if(f->depth>=8)return false;f->st[f->depth++]=(long double)f32(w);return true;}
static bool mul(void*v,uint32_t w){fixture*f=v;f->muls++;if(f->depth<1)return false;f->st[f->depth-1]*=(long double)f32(w);return true;}
static bool pop(void*v,uint32_t*w){fixture*f=v;f->pops++;if(f->depth<1)return false;*w=bits((float)f->st[--f->depth]);return true;}
static void put(fixture*f,uint32_t a,uint32_t w){CHECK(mapped(a));memcpy(f->bytes+a-BASE,&w,4);}
static uint32_t get(fixture*f,uint32_t a){uint32_t w;CHECK(mapped(a));memcpy(&w,f->bytes+a-BASE,4);return w;}
static void seed(fixture*f,unsigned rows,unsigned cols,uint32_t out){
 memset(f->bytes,0xa5,SIZE);
 f->reads=f->writes=f->loads=f->muls=f->pops=0;
 f->fail_read=f->fail_write=0;f->depth=0;
 put(f,ENTRY,RET);put(f,ENTRY+4u,out);put(f,ENTRY+8u,OBJECT);
 put(f,OBJECT+0x510u,rows);put(f,OBJECT+0x514u,cols);
 for(unsigned col=0;col<cols+3u;col++)put(f,WEIGHTS+4u*col,bits(1.f+(float)col));
 for(unsigned row=0;row<rows;row++)
   for(unsigned col=0;col<cols;col++)
     put(f,OBJECT+row*0x48u+col*4u,bits((float)((row+1u)*10u+col)));
}
static bf_0026a780_result run(fixture*f,bool direction_flag) {
 const bf_0026a780_guest_io io={f,read32,write32};
 const bf_0026a780_x87_ops fp={f,fld,mul,pop};
 const bf_0026a780_regs reg={ENTRY,WEIGHTS,
    UINT32_C(0x11112222),UINT32_C(0x33334444),
    UINT32_C(0x55556666),direction_flag};
 return bf_0026a780_execute(&io,&fp,reg);
}
static void cases(fixture*f){
 for(unsigned rows=0;rows<=3u;rows++)for(unsigned cols=0;cols<=6u;cols++){
    seed(f,rows,cols,OUTPUT);
    uint32_t before[0x146];
    for(unsigned i=0;i<0x146;i++)before[i]=get(f,ENTRY-0x518u+4u*i);
    bf_0026a780_result r=run(f,false);
    CHECK(r.status==BF_0026A780_OK&&r.instruction_va==UINT32_C(0x26a807));
    CHECK(r.next_eip==RET&&r.final_esp==ENTRY+4u);
    CHECK(r.final_eax==OUTPUT&&r.final_ecx==0u);
    CHECK(r.final_esi==UINT32_C(0x11112222)&&r.final_edi==UINT32_C(0x33334444));
    CHECK(r.final_ebp==UINT32_C(0x55556666));
    CHECK(r.float_products==rows*cols&&r.words_copied==0x146u);
    CHECK(f->depth==0&&f->loads==rows*cols);
    CHECK(f->muls==rows*cols&&f->pops==rows*cols);
    CHECK(get(f,OUTPUT+0x144u*4u)==rows);
    CHECK(get(f,OUTPUT+0x145u*4u)==cols);
    for(unsigned i=0;i<0x146u;i++){
      const unsigned row=i/18u,col=i%18u;
      uint32_t expected=before[i];
      if(row<rows&&col<cols)
          expected=bits((float)((row+1u)*10u+col)*(1.f+(float)col));
      if(i==0x144u)expected=rows;
      if(i==0x145u)expected=cols;
      CHECK(get(f,OUTPUT+4u*i)==expected);
    }
 }
}
static void faults_and_overlap(fixture*f){
 seed(f,1,1,OUTPUT);f->fail_read=OBJECT+0x510u;
 bf_0026a780_result r=run(f,false);
 CHECK(r.status==BF_0026A780_READ_FAULT&&r.fault_guest_va==OBJECT+0x510u);
 CHECK(r.float_products==0u&&r.words_copied==0u);
 seed(f,1,1,OUTPUT);f->fail_read=WEIGHTS;
 r=run(f,false);
 CHECK(r.status==BF_0026A780_READ_FAULT&&r.instruction_va==UINT32_C(0x26a7c4));
 CHECK(f->depth==0);
 seed(f,1,1,OUTPUT);f->fail_write=ENTRY-0x518u;
 r=run(f,false);
 CHECK(r.status==BF_0026A780_WRITE_FAULT&&r.instruction_va==UINT32_C(0x26a7d0));
 CHECK(f->depth==0&&r.float_products==0u);
 seed(f,0,0,OUTPUT);f->fail_write=OUTPUT+8u;
 r=run(f,false);
 CHECK(r.status==BF_0026A780_WRITE_FAULT&&r.words_copied==2u);
 CHECK(r.fault_guest_va==OUTPUT+8u);
 const uint32_t local=ENTRY-0x518u;
 seed(f,0,0,local+4u);
 r=run(f,false);
 CHECK(r.status==BF_0026A780_OK);
 /* Forward overlap copies prior output into the next source word. */
 for(unsigned i=0;i<0x146u;i++)
     CHECK(get(f,local+4u+i*4u)==UINT32_C(0xa5a5a5a5));
 seed(f,0,0,OUTPUT+0x1400u);
 const uint32_t first=get(f,local);
 r=run(f,true);
 CHECK(r.status==BF_0026A780_OK&&r.words_copied==0x146u);
 CHECK(get(f,OUTPUT+0x1400u)==first);
 CHECK(get(f,OUTPUT+0x1400u-4u)==get(f,local-4u));
 bf_0026a780_guest_io io={f,read32,write32};
 bf_0026a780_regs reg={ENTRY,WEIGHTS,0,0,0,false};
 CHECK(bf_0026a780_execute(&io,NULL,reg).status==BF_0026A780_INVALID_INTERFACE);
}
int main(void){
 fixture f={0};f.bytes=malloc(SIZE);CHECK(f.bytes);
 cases(&f);faults_and_overlap(&f);
 printf("PASS 0x0026A780 guest stack, x87 products, REP MOVSD: %u assertions\n",checks);
 free(f.bytes);
 return 0;
}
