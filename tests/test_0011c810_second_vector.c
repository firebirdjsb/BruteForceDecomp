#include "bf_0011c810_second_vector.h"
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
#define CHECK(x) do{checks++;if(!(x)){fprintf(stderr,"FAIL line %d: %s\n",__LINE__,#x);exit(1);}}while(0)
static unsigned checks=0,scenarios=0;
typedef struct bus {unsigned char mem[0x10000];unsigned events,fail,called;bool reject,bad_esp,alternate;} bus;
static bool mapped(uint32_t va,size_t n){return va>=BASE&&(uint64_t)(va-BASE)+n<=0x10000u;}
static bool read_cb(void *p,uint32_t va,void *dest,size_t n){
 bus*b=p;b->events++;if(b->events==b->fail||!mapped(va,n))return false;
 memcpy(dest,b->mem+(va-BASE),n);return true;
}
static bool write_cb(void *p,uint32_t va,const void *src,size_t n){
 bus*b=p;b->events++;if(b->events==b->fail||!mapped(va,n))return false;
 memcpy(b->mem+(va-BASE),src,n);return true;
}
static bf_0011c810_guest_bytes io_for(bus*b){const bf_0011c810_guest_bytes io={b,read_cb,write_cb};return io;}
static void put32(bus*b,uint32_t addr,uint32_t value){
 CHECK(mapped(addr,4));for(unsigned i=0;i<4;i++)b->mem[addr-BASE+i]=(unsigned char)(value>>(8*i));
}
static uint32_t get32(const bus*b,uint32_t addr){
 CHECK(mapped(addr,4));uint32_t v=0;for(unsigned i=0;i<4;i++)v|=(uint32_t)b->mem[addr-BASE+i]<<(8*i);return v;
}
static uint32_t bits(float x){uint32_t w;memcpy(&w,&x,4);return w;}
static float frombits(uint32_t w){float x;memcpy(&x,&w,4);return x;}
static bool fake_method(void *p,const bf_0011c810_virtual_request*q,bf_0011c810_virtual_response*r){
 bus*b=p;b->called++;
 CHECK(q->receiver_ecx==ARG+0x1b4u&&q->method_guest_va==0x23456789u);
 CHECK(q->guest_esp_s==SP&&q->guest_esp_after_argument_push==SP-4u);
 CHECK(q->argument_guest_va==SP+(b->called==1?0x28u:0x1cu));
 if(b->reject)return false;
 /* Synthetic virtual executor writes a recognizable second output slot. */
 if(b->called==2)put32(b,q->argument_guest_va,0x11223344u);
 r->eax_after_return=SRC;r->esp_after_return=SP-(b->bad_esp?4u:0u);
 return true;
}
/* Fixture-only lane mapping. No claim that either permutation is the
 * original x86 0x0011C810 vector construction. Its true map is deferred. */
static bool synthetic_vector_stage(void *context,const bf_0011c810_guest_bytes *io,
 uint32_t vector_guest_va,const uint32_t component_words[3],uint32_t *fault_va){
 bus*b=context;
 for(unsigned i=0;i<3u;i++){
  const unsigned index=b->alternate?i:2u-i;
  const uint32_t addr=vector_guest_va+4u*i;
  if(!bf_0011c810_store_guest_u32(io,addr,component_words[index]^UINT32_C(0x80000000))){
   *fault_va=addr;return false;
  }
 }
 return true;
}
static void initialize(bus*b,unsigned seed){
 memset(b,0,sizeof *b);
 put32(b,ARG+0x1b4u,VT);put32(b,VT+0x30u,0x23456789u);
 put32(b,ARG+0x6cu,OBJ);
 const float xyz[3]={1.f+(seed%29)*.03125f, (seed%17+1)*.0625f, (seed%11+2)*.03125f};
 memcpy(b->mem+(SRC-BASE),xyz,12);
 /* Meaningfully different source components make reversed lanes detectable. */
 put32(b,OBJ+0x34u,bits((float)((int)(seed%31)-15)*.125f));
 put32(b,OBJ+0x28u,bits((float)((int)(seed%19)-9)*.09375f));
 put32(b,OBJ+0x1cu,bits((float)((int)(seed%13)-6)*.15625f));
}
int main(void){
 bus*b=malloc(sizeof *b);CHECK(b!=NULL);
 const bf_0011c810_frame frame=bf_0011c810_frame_at(SP);
 for(unsigned seed=1;seed<=4096;seed++){
  initialize(b,seed);bf_0011c810_guest_bytes io=io_for(b);
  bf_0011c810_virtual_result first=bf_0011c810_first_virtual_to_matrix(&io,ARG,SP,fake_method,b);
  CHECK(first.status==BF_0011C810_VIRTUAL_OK&&b->events==10u&&b->called==1u);
  float matrix[9];memcpy(matrix,b->mem+(frame.consumer_xyz9-BASE),36);
  const uint32_t orig[3]={get32(b,OBJ+0x34),get32(b,OBJ+0x28),get32(b,OBJ+0x1c)};
  const float vector[3]={frombits(orig[0]^0x80000000u),frombits(orig[1]^0x80000000u),frombits(orig[2]^0x80000000u)};
  float expected[3];FUN_0012b2a0(expected,vector,matrix);
  put32(b,frame.helper_out3+8u,0x76543210u); /* scratch from earlier lifetime */
  const bf_0011c810_second_result r=bf_0011c810_second_virtual_to_dot(&io,ARG,SP,fake_method,b,synthetic_vector_stage,b);
  CHECK(r.status==BF_SECOND_OK&&r.virtual_call.status==BF_0011C810_VIRTUAL_OK);
  CHECK(r.components.status==BF_0011C810_COPIED&&r.dot.status==BF_0011C810_COPIED);
  CHECK(b->called==2u&&b->events==26u);
  CHECK(get32(b,SP+0x1cu)==0x11223344u);
  CHECK(r.components.object_guest_va==OBJ);
  for(unsigned i=0;i<3;i++){
   CHECK(r.components.component_words[i]==orig[2u-i]);
   CHECK(get32(b,frame.helper_vec3+4u*i)==(orig[i]^0x80000000u));
   CHECK(get32(b,frame.helper_out3+4u*i)==bits(expected[i]));
  }
  CHECK(r.scalar_first_bits==bits(expected[0]));
  CHECK(r.scalar_third_bits==bits(expected[2]));
  CHECK(get32(b,frame.helper_out3+8u)!=0x76543210u);
  scenarios++;
 }
 /* All 16 modeled read/write events after successful first virtual. */
 for(unsigned fail=1;fail<=16;fail++){
  initialize(b,1);bf_0011c810_guest_bytes io=io_for(b);
  CHECK(bf_0011c810_first_virtual_to_matrix(&io,ARG,SP,fake_method,b).status==BF_0011C810_VIRTUAL_OK);
  b->events=0;b->fail=fail;
  const bf_0011c810_second_result r=bf_0011c810_second_virtual_to_dot(&io,ARG,SP,fake_method,b,synthetic_vector_stage,b);
  CHECK(r.status==(fail<=2?BF_SECOND_VIRTUAL_ERROR:
            fail<=6?BF_SECOND_COMPONENT_ERROR:fail<=9?BF_SECOND_VECTOR_UNRESOLVED:
            fail<=14?BF_SECOND_DOT_ERROR:BF_SECOND_READ_OUTPUT_ERROR));
  CHECK(b->events==fail);
  if(fail>=3&&fail<=9){
    const uint32_t addresses[7]={ARG+0x6cu,OBJ+0x1cu,OBJ+0x28u,OBJ+0x34u,
                                 SP+0x28u,SP+0x2cu,SP+0x30u};
    CHECK((fail<=6?r.components.fault_guest_va:r.fault_guest_va)==addresses[fail-3]);
    if(fail<=6)CHECK(r.components.status==BF_0011C810_READ_FAULT);
  }
  scenarios++;
 }
 initialize(b,10);bf_0011c810_guest_bytes io=io_for(b);
 CHECK(bf_0011c810_first_virtual_to_matrix(&io,ARG,SP,fake_method,b).status==BF_0011C810_VIRTUAL_OK);
 b->reject=true;
 CHECK(bf_0011c810_second_virtual_to_dot(&io,ARG,SP,fake_method,b,synthetic_vector_stage,b).virtual_call.status==BF_0011C810_VIRTUAL_CALL_UNRESOLVED);scenarios++;
 initialize(b,10);io=io_for(b);
 CHECK(bf_0011c810_first_virtual_to_matrix(&io,ARG,SP,fake_method,b).status==BF_0011C810_VIRTUAL_OK);
 b->bad_esp=true;
 CHECK(bf_0011c810_second_virtual_to_dot(&io,ARG,SP,fake_method,b,synthetic_vector_stage,b).virtual_call.status==BF_0011C810_VIRTUAL_ESP_NOT_RESTORED);scenarios++;
 initialize(b,10);io=io_for(b);
 CHECK(bf_0011c810_read_components(NULL,ARG).status==BF_0011C810_INVALID_IO);scenarios++;
 put32(b,ARG+0x6cu,UINT32_MAX);
 bf_0011c810_components_result vector=bf_0011c810_read_components(&io,ARG);
 CHECK(vector.status==BF_0011C810_READ_FAULT&&vector.fault_guest_va==0x1bu);scenarios++;
 /* Raw component reads preserve signed zero and NaN payload bits without
  * any guest scalar reinterpretation or assumed lane permutation. */
 initialize(b,42);io=io_for(b);
 const uint32_t unusual[3]={0x00000000u,0x80000000u,0x7fc01234u};
 for(unsigned i=0;i<3;i++){
  const uint32_t offsets[3]={0x34,0x28,0x1c};put32(b,OBJ+offsets[i],unusual[i]);
 }
 vector=bf_0011c810_read_components(&io,ARG);
 CHECK(vector.status==BF_0011C810_COPIED);
 for(unsigned i=0;i<3;i++) CHECK(vector.component_words[i]==unusual[2u-i]);scenarios++;
 /* When no authenticated lane mapper is provided, refuse to synthesize the
  * helper's vector and leave its output untouched. */
 initialize(b,17);io=io_for(b);
 CHECK(bf_0011c810_first_virtual_to_matrix(&io,ARG,SP,fake_method,b).status==BF_0011C810_VIRTUAL_OK);
 bf_0011c810_second_result unresolved=bf_0011c810_second_virtual_to_dot(&io,ARG,SP,fake_method,b,NULL,b);
 CHECK(unresolved.status==BF_SECOND_VECTOR_UNRESOLVED&&b->events==16u);
 scenarios++;
 /* A deliberately different fixture mapping must flow through unchanged;
  * the bridge itself is not allowed to choose the actual original mapping. */
 initialize(b,27);io=io_for(b);
 CHECK(bf_0011c810_first_virtual_to_matrix(&io,ARG,SP,fake_method,b).status==BF_0011C810_VIRTUAL_OK);
 b->alternate=true;
 const float source_vec[3]={-frombits(get32(b,OBJ+0x1c)),
                            -frombits(get32(b,OBJ+0x28)),
                            -frombits(get32(b,OBJ+0x34))};
 float source_matrix[9],mapped_expected[3];
 memcpy(source_matrix,b->mem+(frame.consumer_xyz9-BASE),36);
 FUN_0012b2a0(mapped_expected,source_vec,source_matrix);
 const bf_0011c810_second_result alternate=bf_0011c810_second_virtual_to_dot(&io,ARG,SP,fake_method,b,synthetic_vector_stage,b);
 CHECK(alternate.status==BF_SECOND_OK);
 for(unsigned i=0;i<3;i++)CHECK(get32(b,frame.helper_out3+4u*i)==bits(mapped_expected[i]));
 scenarios++;
 printf("PASS %u second-virtual/output projections; %u assertions (lane map still UNVERIFIED)\n",scenarios,checks);
 free(b);return 0;
}
