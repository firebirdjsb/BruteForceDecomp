/* Bounded C11 reference tests; NOT full x87 exception/NaN parity. */
#include "bf_00155840_virtual_621c0.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <float.h>
#include <math.h>
#define BASE UINT32_C(0x10000)
#define RANGE 65536u
#define EBP (BASE+0x8000u)
#define MATRIX (BASE+0x1000u)
#define ENTRY_ESP (BASE+0x6000u)
#define CHECK(x) do {checks++;if(!(x)){fprintf(stderr,"FAIL %d: %s\n",__LINE__,#x);exit(1);}} while(0)
typedef struct mem_model { unsigned char b[RANGE]; uint32_t ra[128],wa[16]; size_t rn,wn; unsigned fail_write; } mem_model;
typedef struct fp_model {long double stack[8];int depth;unsigned instructions;char ops[80];} fp_model;
static unsigned checks;
static bool valid(uint32_t a){return a>=BASE && (uint64_t)(a-BASE)+4<=RANGE;}
static bool rd(void *v,uint32_t a,uint32_t *out){mem_model*m=v;if(m->rn<128)m->ra[m->rn++]=a;if(!valid(a))return false;memcpy(out,m->b+(a-BASE),4);return true;}
static bool wr(void *v,uint32_t a,uint32_t x){mem_model*m=v;if(m->wn<16)m->wa[m->wn++]=a;if(!valid(a)||m->wn==m->fail_write)return false;memcpy(m->b+(a-BASE),&x,4);return true;}
static void put(mem_model*m,uint32_t a,uint32_t v){CHECK(valid(a));memcpy(m->b+(a-BASE),&v,4);}
static uint32_t bits(float x){uint32_t b;memcpy(&b,&x,4);return b;}
static float to_float(uint32_t x){float f;memcpy(&f,&x,4);return f;}
static uint32_t get(const mem_model*m,uint32_t a){uint32_t r;CHECK(valid(a));memcpy(&r,m->b+(a-BASE),4);return r;}
static void event(fp_model *f,char c){if(f->instructions<80)f->ops[f->instructions++]=c;}
static bool fld(void*v,uint32_t b){fp_model*f=v;event(f,'L');if(f->depth>=8)return false;f->stack[f->depth++]=(long double)to_float(b);return true;}
static bool mul(void*v,uint32_t b){fp_model*f=v;event(f,'M');if(!f->depth)return false;f->stack[f->depth-1]*=(long double)to_float(b);return true;}
static bool addp(void*v){fp_model*f=v;event(f,'P');if(f->depth<2)return false;f->stack[f->depth-2]+=f->stack[f->depth-1];f->depth--;return true;}
static bool add(void*v,uint32_t b){fp_model*f=v;event(f,'A');if(!f->depth)return false;f->stack[f->depth-1]+=(long double)to_float(b);return true;}
static bool pop(void*v,uint32_t*out){fp_model*f=v;event(f,'S');if(!f->depth)return false;float x=(float)f->stack[--f->depth];*out=bits(x);return true;}
static bf_621c0_status execute(mem_model *m,fp_model *f,bf_00155840_call_621c0_inputs r,uint32_t *fault){
 const bf_621c0_guest_words gm={m,rd,wr};
 const bf_621c0_x87_operations fp={f,fld,mul,addp,add,pop};
 return bf_00155840_execute_621c0(&gm,&fp,r,ENTRY_ESP,fault);
}
static void seed(mem_model*m,float v[12],float p[3]){memset(m,0,sizeof *m);for(unsigned i=0;i<12;i++)put(m,MATRIX+4u*i,bits(v[i]));for(unsigned i=0;i<3;i++)put(m,EBP-0x68u+4u*i,bits(p[i]));}
static void case_identity(void){mem_model m;fp_model f={0};uint32_t fault=0;float a[12]={1,0,0,0,1,0,0,0,1,2,3,4},v[3]={5,6,7};seed(&m,a,v);
 bf_00155840_call_621c0_inputs r=bf_00155840_bind_621c0(EBP,MATRIX);
 CHECK(r.edx_guest==EBP-0x68u&&r.eax_guest==EBP-0x2cu&&r.ecx_guest==MATRIX);
 CHECK(execute(&m,&f,r,&fault)==BF_621C0_OK);CHECK(f.depth==0);
 CHECK(f.instructions==30); /* three nine-step accumulations and three FSTP */
 CHECK(memcmp(f.ops,"LMLMPLMPALMLMPLMPALMLMPLMPASSS",30)==0);
 CHECK(m.wn==5&&m.rn==23);
 /* Exact successful guest read ordering: every FLD/FMUL/FADD memory
  * operand, then the two scratch reloads after FSTP. */
 const uint32_t expected_reads[23]={
   MATRIX+8u,EBP-0x60u,MATRIX+4u,EBP-0x64u,MATRIX,EBP-0x68u,MATRIX+36u,
   MATRIX+20u,EBP-0x60u,MATRIX+12u,EBP-0x68u,MATRIX+16u,EBP-0x64u,MATRIX+40u,
   MATRIX+32u,EBP-0x60u,MATRIX+24u,EBP-0x68u,MATRIX+28u,EBP-0x64u,MATRIX+44u,
   ENTRY_ESP-4u,ENTRY_ESP-8u};
 for(size_t i=0;i<23;i++)CHECK(m.ra[i]==expected_reads[i]);
 CHECK(m.wa[0]==ENTRY_ESP-4u&&m.wa[1]==ENTRY_ESP-8u);
 CHECK(m.wa[2]==EBP-0x24u&&m.wa[3]==EBP-0x2cu&&m.wa[4]==EBP-0x28u);
 CHECK(to_float(get(&m,r.eax_guest))==7.f);
 CHECK(to_float(get(&m,r.eax_guest+4u))==9.f);
 CHECK(to_float(get(&m,r.eax_guest+8u))==11.f);
 CHECK(fault==0);
}
static void case_many_numeric(void){
 for (unsigned seed_value=1;seed_value<=512;seed_value++){
  mem_model m; fp_model f={0}; uint32_t fault=0;
  float a[12],v[3];
  for(unsigned i=0;i<12;i++)a[i]=(float)((int)((seed_value*17u+i*23u)%33u)-16)*0.125f;
  for(unsigned i=0;i<3;i++)v[i]=(float)((int)((seed_value*11u+i*19u)%19u)-9)*0.125f;
  seed(&m,a,v);
  bf_00155840_call_621c0_inputs r=bf_00155840_bind_621c0(EBP,MATRIX);
  CHECK(execute(&m,&f,r,&fault)==BF_621C0_OK);
  CHECK(f.depth==0&&m.wn==5&&m.rn==23);
  for(unsigned row=0;row<3;row++){
   long double expected=(long double)a[row*3u+2u]*(long double)v[2];
   expected+=(long double)a[row*3u+1u]*(long double)v[1];
   expected+=(long double)a[row*3u]*(long double)v[0];
   expected+=(long double)a[9u+row];
   CHECK(get(&m,EBP-0x2cu+row*4u)==bits((float)expected));
  }
 }
}
static void case_alias_and_faults(void){
 float a[12]={1,0,0,0,1,0,0,0,1,2,3,4},v[3]={5,6,7};
 bf_00155840_call_621c0_inputs r=bf_00155840_bind_621c0(EBP,MATRIX);
 mem_model m; fp_model f={0};uint32_t fault=0;
 seed(&m,a,v);
 r.eax_guest=r.edx_guest; /* output aliases input: all input reads occur first */
 CHECK(execute(&m,&f,r,&fault)==BF_621C0_OK);
 CHECK(get(&m,r.edx_guest)==bits(7.f));
 CHECK(get(&m,r.edx_guest+4u)==bits(9.f));
 CHECK(get(&m,r.edx_guest+8u)==bits(11.f));
 r=bf_00155840_bind_621c0(EBP,MATRIX);
 const uint32_t writes[5]={ENTRY_ESP-4u,ENTRY_ESP-8u,EBP-0x24u,EBP-0x2cu,EBP-0x28u};
 for(unsigned i=1;i<=5;i++){
  seed(&m,a,v);memset(&f,0,sizeof f);m.fail_write=i;fault=0;
  CHECK(execute(&m,&f,r,&fault)==BF_621C0_GUEST_WRITE_FAILED);
  CHECK(fault==writes[i-1]&&m.wn==i);
 }
 seed(&m,a,v);memset(&f,0,sizeof f);
 r.ecx_guest=0;
 CHECK(execute(&m,&f,r,&fault)==BF_621C0_GUEST_READ_FAILED);
 CHECK(fault==r.ecx_guest+8u);
 seed(&m,a,v);memset(&f,0,sizeof f);r.ecx_guest=MATRIX;f.depth=8;
 CHECK(execute(&m,&f,r,&fault)==BF_621C0_X87_BACKEND_FAILED);
 CHECK(m.wn==0&&f.depth==8);
}
static bool virtual_executor(void *v,uint32_t target,uint32_t receiver,uint32_t *eax){
 unsigned *calls=v;
 (*calls)++;
 if(target!=UINT32_C(0x0022aabb)||receiver!=BASE+0x3048u)return false;
 *eax=MATRIX;
 return true;
}
static void case_virtual_dispatch(void){
 float a[12]={1,0,0,0,1,0,0,0,1,2,3,4},v[3]={5,6,7};
 mem_model m;fp_model f={0};unsigned calls=0;seed(&m,a,v);
 const uint32_t object=BASE+0x3000u,table=BASE+0x4000u;
 put(&m,EBP+8u,object);put(&m,object+0x48u,table);
 put(&m,table+0x14u,UINT32_C(0x0022aabb));
 const bf_621c0_guest_words guest={&m,rd,wr};
 const bf_621c0_x87_operations x87={&f,fld,mul,addp,add,pop};
 const bf_00155840_guest_virtual callback={&calls,virtual_executor};
 bf_00155840_virtual_621c0_result r=bf_00155840_execute_virtual_621c0(&guest,&x87,&callback,EBP,ENTRY_ESP);
 CHECK(r.status==BF_00155840_V621C0_OK && r.bridge_status==BF_621C0_OK);
 CHECK(r.method_target_va==UINT32_C(0x0022aabb)&&r.receiver_ecx==object+0x48u&&r.matrix_eax==MATRIX);
 CHECK(get(&m,EBP-0x2cu)==bits(7.f)&&get(&m,EBP-0x28u)==bits(9.f)&&get(&m,EBP-0x24u)==bits(11.f));
 CHECK(calls==1&&m.wn==5&&m.rn==26);
 /* Unknown guest vtable target must never be executed by guessing. */
 seed(&m,a,v);put(&m,EBP+8u,object);put(&m,object+0x48u,table);put(&m,table+0x14u,0);
 memset(&f,0,sizeof f);calls=0;
 r=bf_00155840_execute_virtual_621c0(&guest,&x87,&callback,EBP,ENTRY_ESP);
 CHECK(r.status==BF_00155840_V621C0_METHOD_UNRESOLVED);
 CHECK(calls==1&&m.wn==0&&f.depth==0);
}
int main(void){case_identity();case_many_numeric();case_alias_and_faults();case_virtual_dispatch();
 printf("PASS guest 621c0 bridge: %u assertions; 512 finite examples, alias and fault cases\n",checks);
 return 0;}
