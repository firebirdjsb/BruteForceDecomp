/* Bounded original x86 guest allocator test; allocator target is a
 * SYNTHETIC callback, NOT a verified Xbox platform implementation. */
#include "bf_002b8d60_guest_alloc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BASE UINT32_C(0x100000)
#define SIZE UINT32_C(0x400000)
#define ENTRY UINT32_C(0x125000)
#define OBJECT UINT32_C(0x130000)
#define FIRST UINT32_C(0x140000)
#define SECOND UINT32_C(0x150000)
#define RET UINT32_C(0x001f3b4a)
#define TARGET UINT32_C(0x00222222)
#define CHECK(x) do{++checks;if(!(x)){fprintf(stderr,"FAIL %d: %s\n",__LINE__,#x);exit(1);}}while(0)
static unsigned checks;
typedef struct memory {
 unsigned char *b;unsigned reads,writes,calls;
 uint32_t fail_read,fail_write,fail_call;
 uint32_t allocations[2],sizes[2],entry_stacks[2];bool mutate_return;
} memory;
static bool mapped(uint32_t a){return a>=BASE&&(uint64_t)(a-BASE)+4u<=SIZE;}
static uint32_t get(memory*m,uint32_t a){uint32_t x;CHECK(mapped(a));memcpy(&x,m->b+a-BASE,4);return x;}
static void put(memory*m,uint32_t a,uint32_t x){CHECK(mapped(a));memcpy(m->b+a-BASE,&x,4);}
static bool rd(void*v,uint32_t a,uint32_t*x){
 memory*m=v;m->reads++;
 if(a==m->fail_read||!mapped(a))return false;
 *x=get(m,a);return true;
}
static bool wr(void*v,uint32_t a,uint32_t x){
 memory*m=v;m->writes++;
 if(a==m->fail_write||!mapped(a))return false;
 put(m,a,x);return true;
}
static bool allocator(void*v,uint32_t target,uint32_t bytes,uint32_t esp,uint32_t*out){
 memory*m=v;CHECK(m->calls<2u);
 const unsigned i=m->calls++;
 CHECK(target==TARGET&&get(m,esp+4u)==bytes);
 m->sizes[i]=bytes;m->entry_stacks[i]=esp;
 if(m->fail_call==i+1u)return false;
 if(m->mutate_return)put(m,esp,UINT32_C(0x55667788));
 *out=m->allocations[i];return true;
}
static void reset(memory*m,uint32_t count){
 memset(m->b,0xa5,SIZE);
 m->reads=m->writes=m->calls=0;
 m->fail_read=m->fail_write=m->fail_call=0;m->mutate_return=false;
 m->allocations[0]=FIRST;m->allocations[1]=SECOND;
 put(m,ENTRY,RET);put(m,UINT32_C(0x003bc650),TARGET);
 put(m,OBJECT,count);
}
static bf_002b8d60_result run(memory*m,uint32_t n,bool df){
 const bf_002b8d60_guest_io io={m,rd,wr,allocator};
 const bf_002b8d60_regs regs={
    ENTRY,n,OBJECT,UINT32_C(0x12345678),UINT32_C(0x87654321),df
 };
 return bf_002b8d60_execute(&io,regs);
}
static void normal(memory*m,uint32_t n){
 reset(m,n);
 const bf_002b8d60_result r=run(m,n,false);
 CHECK(r.status==BF_002B8D60_OK&&r.next_eip==RET);
 CHECK(r.final_esp==ENTRY+4u&&r.final_eax==OBJECT&&r.final_esi==OBJECT);
 CHECK(r.final_ebx==UINT32_C(0x12345678)&&r.final_edi==UINT32_C(0x87654321));
 CHECK(r.first_buffer==FIRST&&r.second_buffer==SECOND&&r.alloc_calls==2u);
 CHECK(r.first_bytes==(n<<2)&&r.second_bytes==(n<<3));
 CHECK(r.first_zeros==(n<<2)/4u&&r.second_zeros==(n<<3)/4u);
 CHECK(m->calls==2u&&m->sizes[0]==n*4u&&m->sizes[1]==n*8u);
 CHECK(m->entry_stacks[0]==ENTRY-16u&&m->entry_stacks[1]==ENTRY-20u);
 CHECK(get(m,OBJECT)==n&&get(m,OBJECT+4u)==SECOND);
 CHECK(get(m,OBJECT+8u)==SECOND+(n<<2));
 CHECK(get(m,OBJECT+12u)==FIRST&&get(m,OBJECT+16u)==0u);
 for(unsigned i=0;i<(n<<2)/4u;i++)CHECK(get(m,FIRST+4u*i)==0u);
 for(unsigned i=0;i<(n<<3)/4u;i++)CHECK(get(m,SECOND+4u*i)==0u);
 if(n<32u){
    CHECK(get(m,FIRST+n*4u)==UINT32_C(0xa5a5a5a5));
    CHECK(get(m,SECOND+n*8u)==UINT32_C(0xa5a5a5a5));
 }
}
static void failures(memory*m){
 reset(m,3u);m->fail_call=1u;
 bf_002b8d60_result r=run(m,3u,false);
 CHECK(r.status==BF_002B8D60_ALLOCATOR_UNRESOLVED);
 CHECK(r.alloc_calls==0u&&m->calls==1u);
 reset(m,3u);m->fail_call=2u;r=run(m,3u,false);
 CHECK(r.status==BF_002B8D60_ALLOCATOR_UNRESOLVED);
 CHECK(r.alloc_calls==1u&&get(m,OBJECT+12u)==FIRST);
 reset(m,3u);m->fail_write=FIRST;r=run(m,3u,false);
 CHECK(r.status==BF_002B8D60_WRITE_FAULT&&r.fault_guest_va==FIRST);
 CHECK(r.first_zeros==0u&&r.alloc_calls==1u);
 reset(m,3u);m->mutate_return=true;r=run(m,3u,false);
 CHECK(r.status==BF_002B8D60_CALLEE_CONTROL_TRANSFER);
 CHECK(r.next_eip==UINT32_C(0x55667788));
 reset(m,3u);m->allocations[0]=OBJECT;r=run(m,3u,false);
 CHECK(r.status==BF_002B8D60_OK&&r.second_bytes==0u);
 CHECK(get(m,OBJECT+12u)==OBJECT);
 reset(m,3u);r=run(m,3u,true);
 CHECK(r.status==BF_002B8D60_OK);
 CHECK(get(m,FIRST)==0&&get(m,FIRST-4u)==0);
 CHECK(get(m,SECOND)==0&&get(m,SECOND-4u)==0);
 bf_002b8d60_regs regs={ENTRY,0u,OBJECT,0u,0u,false};
 CHECK(bf_002b8d60_execute(NULL,regs).status==BF_002B8D60_INVALID);
}
int main(void){
 memory m={0};m.b=malloc(SIZE);CHECK(m.b);
 for(uint32_t n=0;n<32u;n++)normal(&m,n);
 normal(&m,UINT32_C(0x40000000)); /* 32-bit size wrap; no REP writes */
 failures(&m);
 printf("PASS original 0x002B8D60 guest allocator: %u assertions\n",checks);
 free(m.b);return 0;
}
