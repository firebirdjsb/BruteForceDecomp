#include "bf_0011c810_original_vector_lanes.h"
#include "bf_0011c810_concrete_virtual.h"
#include "bf_0011c810_register_calls.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BASE UINT32_C(0x10000)
#define SP UINT32_C(0x13000)
#define ARG UINT32_C(0x17000)
#define VT UINT32_C(0x19000)
#define OBJ UINT32_C(0x1a000)
#define SRC UINT32_C(0x1e000)
#define CHECK(x) do {checks++;if(!(x)){fprintf(stderr,"FAILED at line %d: %s\n",__LINE__,#x);exit(1);}}while(0)
typedef struct memory {unsigned char data[65536];unsigned reads,writes,fail_write,virtual_calls;} memory;
static unsigned checks,scenarios;
static bool mapped(uint32_t a,size_t n){return a>=BASE && (uint64_t)(a-BASE)+n<=65536u;}
static bool rd(void *p,uint32_t a,void *dest,size_t n){memory*m=p;++m->reads;if(!mapped(a,n))return false;memcpy(dest,m->data+(a-BASE),n);return true;}
static bool wr(void *p,uint32_t a,const void *src,size_t n){memory*m=p;++m->writes;if(m->writes==m->fail_write||!mapped(a,n))return false;memcpy(m->data+(a-BASE),src,n);return true;}
static bf_0011c810_guest_bytes io_for(memory*m){const bf_0011c810_guest_bytes b={m,rd,wr};return b;}
static void put32(memory*m,uint32_t addr,uint32_t x){CHECK(mapped(addr,4));memcpy(m->data+(addr-BASE),&x,4);}
static uint32_t get32(memory*m,uint32_t addr){uint32_t x;CHECK(mapped(addr,4));memcpy(&x,m->data+(addr-BASE),4);return x;}
static uint32_t bits(float f){uint32_t x;memcpy(&x,&f,4);return x;}
static bool fake_scalar(void *p,const bf_0011c810_guest_bytes*io,
                        uint32_t receiver_ecx,uint32_t output_va){
 memory*m=p;++m->virtual_calls;
 CHECK(io->user==m);
 CHECK(receiver_ecx==ARG+0x1b4u);
 CHECK(output_va==SP+(m->virtual_calls==1u?0x28u:0x1cu));
 /* Only synthetic float data; it is NOT the original 0x0010FBF0 x87 body.
  * The concrete executor is responsible for the genuine EAX/ESP handoff. */
 const float xyz[3]={.25f,-.5f,1.f};
 memcpy(m->data+(output_va-BASE),xyz,12);
 return true;
}
static void initialize(memory*m,unsigned seed){
 memset(m,0,sizeof *m);
 put32(m,ARG+0x1b4u,VT);
 put32(m,VT+0x30u,BF_0011C810_CONCRETE_METHOD);
 put32(m,ARG+0x6cu,OBJ);
 const float components[3]={((int)(seed%91)-45)*.0625f,((int)(seed%47)-23)*.09375f,((int)(seed%13)-6)*.125f};
 for(unsigned i=0;i<3;i++)put32(m,OBJ+0x1cu+0x0cu*i,bits(components[i]));
}
int main(void){
 memory*m=malloc(sizeof *m);CHECK(m);
 const bf_0011c810_frame f=bf_0011c810_frame_at(SP);
 for(unsigned seed=1;seed<=4096;seed++){
  initialize(m,seed);bf_0011c810_guest_bytes io=io_for(m);
  const bf_0011c810_concrete_context ctx={&io,fake_scalar,m};
  const bf_0011c810_virtual_result first=bf_0011c810_first_virtual_to_matrix(&io,ARG,SP,bf_0011c810_concrete_virtual_executor,(void*)&ctx);
  CHECK(first.status==BF_0011C810_VIRTUAL_OK&&first.response.eax_after_return==f.helper_vec3);
  CHECK(m->virtual_calls==1u);
  const uint32_t c[]={get32(m,OBJ+0x1cu),get32(m,OBJ+0x28u),get32(m,OBJ+0x34u)};
  const bf_0011c810_second_result second=bf_0011c810_second_virtual_to_dot(&io,ARG,SP,
               bf_0011c810_concrete_virtual_executor,(void*)&ctx,bf_0011c810_original_vector_lanes,0);
  CHECK(second.status==BF_SECOND_OK);
  CHECK(second.components.component_words[0]==c[0]);
  CHECK(second.components.component_words[1]==c[1]);
  CHECK(second.components.component_words[2]==c[2]);
  CHECK(get32(m,SP+0x28)==(c[0]^UINT32_C(0x80000000)));
  CHECK(get32(m,SP+0x2c)==(c[1]^UINT32_C(0x80000000)));
  CHECK(get32(m,SP+0x30)==(c[2]^UINT32_C(0x80000000)));
  /* S+0x10 was scratch, then the dot helper overwrote it as output[1]. */
  CHECK(get32(m,SP+0x04)==(c[2]^UINT32_C(0x80000000)));
  CHECK(get32(m,SP+0x08)==(c[1]^UINT32_C(0x80000000)));
  CHECK(second.scalar_first_bits==get32(m,f.helper_out3));
  CHECK(second.scalar_third_bits==get32(m,f.helper_out3+8));
  CHECK(m->virtual_calls==2u);
  scenarios++;
 }
 /* Unknown vtables must not be treated as the constructor-confirmed one. */
 initialize(m,5);bf_0011c810_guest_bytes unknown_io=io_for(m);
 bf_0011c810_concrete_context unknown_ctx={&unknown_io,fake_scalar,m};
 put32(m,VT+0x30u,UINT32_C(0x2bf0a0));
 const bf_0011c810_virtual_result unknown=bf_0011c810_first_virtual_to_matrix(
      &unknown_io,ARG,SP,bf_0011c810_concrete_virtual_executor,&unknown_ctx);
 CHECK(unknown.status==BF_0011C810_VIRTUAL_CALL_UNRESOLVED&&m->virtual_calls==0u);
 scenarios++;
 initialize(m,5);unknown_io=io_for(m);
 bf_0011c810_concrete_context no_scalar={&unknown_io,NULL,m};
 const bf_0011c810_virtual_result unresolved=bf_0011c810_first_virtual_to_matrix(
      &unknown_io,ARG,SP,bf_0011c810_concrete_virtual_executor,&no_scalar);
 CHECK(unresolved.status==BF_0011C810_VIRTUAL_CALL_UNRESOLVED&&m->virtual_calls==0u);
 scenarios++;
 /* Assert the original 9 guest scratch/vector store addresses and order. */
 const uint32_t cases[3]={UINT32_C(0x00000000),UINT32_C(0x80000000),UINT32_C(0x7f800000)};
 for(unsigned fail=1;fail<=9;fail++){
  initialize(m,7);bf_0011c810_guest_bytes io=io_for(m);
  m->fail_write=fail;
  uint32_t fault=0;
  const bool ok=bf_0011c810_original_vector_lanes(0,&io,SP+0x28,cases,&fault);
  CHECK(!ok&&m->writes==fail);
  const uint32_t offsets[9]={0x04u,0x08u,0x14u,0x10u,0x04u,0x30u,0x08u,0x2cu,0x28u};
  CHECK(fault==SP+offsets[fail-1]);
  scenarios++;
 }
 initialize(m,42);bf_0011c810_guest_bytes io=io_for(m);
 const uint32_t nan[3]={0x7fc12345u,0x3f800000u,0x80000000u};
 uint32_t fault=UINT32_MAX;
 CHECK(!bf_0011c810_original_vector_lanes(0,&io,SP+0x28,nan,&fault));
 CHECK(m->writes==0u&&fault==0u);scenarios++;
 const uint32_t unusual[3]={0x80000000u,0x00000001u,0xff800000u};
 CHECK(bf_0011c810_original_vector_lanes(0,&io,SP+0x28,unusual,&fault));
 CHECK(get32(m,SP+0x28)==0u && get32(m,SP+0x2c)==0x80000001u);
 CHECK(get32(m,SP+0x30)==0x7f800000u);
 CHECK(get32(m,SP+0x10)==unusual[1] && get32(m,SP+0x14)==unusual[2]);
 CHECK(get32(m,SP+0x04)==0x7f800000u && get32(m,SP+0x08)==0x80000001u);scenarios++;
 printf("PASS %u XBE-mapped lane scenarios, %u assertions per build (no x87 status/NaN parity)\n",scenarios,checks);
 free(m);return 0;
}
