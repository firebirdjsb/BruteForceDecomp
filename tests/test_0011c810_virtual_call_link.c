#include "bf_0011c810_virtual_call_link.h"
#include "bf_0011c810_register_calls.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BASE UINT32_C(0x10000)
#define SP UINT32_C(0x13000)
#define ARG UINT32_C(0x17000)
#define VT UINT32_C(0x19000)
#define SRC UINT32_C(0x1e000)
#define CHECK(c) do {++checks;if(!(c)){fprintf(stderr,"FAIL %d: %s\n",__LINE__,#c);exit(1);}}while(0)
typedef struct bus {unsigned char mem[65536];unsigned event,fail,called;bool reject,bad_esp,second;} bus;
static unsigned checks;
static bool in_bounds(uint32_t a,size_t n){return a>=BASE&&(uint64_t)(a-BASE)+n<=65536u;}
static bool rd(void *p,uint32_t a,void *out,size_t n){bus*b=p;++b->event;if(b->event==b->fail||!in_bounds(a,n))return false;memcpy(out,b->mem+(a-BASE),n);return true;}
static bool wr(void *p,uint32_t a,const void *src,size_t n){bus*b=p;++b->event;if(b->event==b->fail||!in_bounds(a,n))return false;memcpy(b->mem+(a-BASE),src,n);return true;}
static bf_0011c810_guest_bytes ops(bus*b){const bf_0011c810_guest_bytes io={b,rd,wr};return io;}
static void put32(bus*b,uint32_t a,uint32_t v){CHECK(in_bounds(a,4));for(unsigned i=0;i<4;i++)b->mem[a-BASE+i]=(unsigned char)(v>>(8*i));}
static bool virtual_method(void *p,const bf_0011c810_virtual_request*q,bf_0011c810_virtual_response*r){
 bus*b=p;++b->called;
 CHECK(q->receiver_ecx==ARG+0x1b4u&&q->method_guest_va==0x12345678u);
 CHECK(q->guest_esp_s==SP&&q->guest_esp_after_argument_push==SP-4u);
 CHECK(q->argument_guest_va==SP+(b->second?0x1cu:0x28u));
 if(b->reject)return false;
 r->eax_after_return=SRC;r->esp_after_return=SP-(b->bad_esp?4u:0u);return true;
}
static void init(bus*b){memset(b,0,sizeof *b);put32(b,ARG+0x1b4u,VT);put32(b,VT+0x30u,0x12345678u);}
int main(void){
 bus*b=malloc(sizeof *b);CHECK(b!=NULL);
 const bf_0011c810_frame f=bf_0011c810_frame_at(SP);bf_0011c810_guest_bytes io=ops(b);
 for(unsigned seed=1;seed<=1024;seed++){
  init(b);const float xyz[]={1.0f+(seed%17)*.125f,.125f*(seed%11+1),.0625f*(seed%13+1)};
  const float vec[]={-.25f*(seed%9+1),.125f*(seed%7+1),.03125f*(seed%19+1)};
  float expected_matrix[9],expected_out[3];FUN_0001d0c0(xyz,expected_matrix);
  FUN_0012b2a0(expected_out,vec,expected_matrix);
  memcpy(b->mem+(SRC-BASE),xyz,12);
  bf_0011c810_virtual_result r=bf_0011c810_first_virtual_to_matrix(&io,ARG,SP,virtual_method,b);
  CHECK(r.status==BF_0011C810_VIRTUAL_OK&&r.producer.status==BF_0011C810_COPIED);
  CHECK(r.response.eax_after_return==SRC&&b->called==1&&b->event==10);
  CHECK(memcmp(b->mem+(f.producer_xyz9-BASE),expected_matrix,36)==0);
  CHECK(memcmp(b->mem+(f.consumer_xyz9-BASE),expected_matrix,36)==0);
  memcpy(b->mem+(f.helper_vec3-BASE),vec,12);
  CHECK(bf_0011c810_dot_output(&io,SP).status==BF_0011C810_COPIED);
  CHECK(memcmp(b->mem+(f.helper_out3-BASE),expected_out,12)==0);
  b->second=true;unsigned before=b->event;
  r=bf_0011c810_dispatch_virtual(&io,ARG,SP,BF_0011C810_SECOND_VIRTUAL,virtual_method,b);
  CHECK(r.status==BF_0011C810_VIRTUAL_OK&&r.request.argument_guest_va==SP+0x1cu);
  CHECK(b->event==before+2u&&b->called==2u);
 }
 for(unsigned n=1;n<=10;n++){
  init(b);b->fail=n;
  const bf_0011c810_virtual_result r=bf_0011c810_first_virtual_to_matrix(&io,ARG,SP,virtual_method,b);
  CHECK(r.status==(n<=2?BF_0011C810_VIRTUAL_READ_FAULT:BF_0011C810_VIRTUAL_PRODUCER_ERROR));
  CHECK(b->event==n&&b->called==(n>2?1u:0u));
 }
 init(b);b->reject=true;CHECK(bf_0011c810_first_virtual_to_matrix(&io,ARG,SP,virtual_method,b).status==BF_0011C810_VIRTUAL_CALL_UNRESOLVED);
 init(b);b->bad_esp=true;CHECK(bf_0011c810_first_virtual_to_matrix(&io,ARG,SP,virtual_method,b).status==BF_0011C810_VIRTUAL_ESP_NOT_RESTORED);
 init(b);CHECK(bf_0011c810_first_virtual_to_matrix(&io,ARG,SP,NULL,b).status==BF_0011C810_VIRTUAL_INVALID_ARGUMENT);
 init(b);put32(b,ARG+0x1b4u,UINT32_MAX);
 bf_0011c810_virtual_result r=bf_0011c810_first_virtual_to_matrix(&io,ARG,SP,virtual_method,b);
 CHECK(r.status==BF_0011C810_VIRTUAL_READ_FAULT&&r.fault_guest_va==0x2fu);
 printf("PASS 1038 virtual-to-real-source bridge scenarios; %u assertions (synthetic virtual executor)\n",checks);
 free(b);return 0;
}
