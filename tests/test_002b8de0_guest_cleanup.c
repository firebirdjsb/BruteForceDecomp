#include "bf_002b8de0_guest_cleanup.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define BASE UINT32_C(0x100000)
#define SIZE UINT32_C(0x310000)
#define ESP UINT32_C(0x205000)
#define OBJECT UINT32_C(0x206000)
#define ARRAY UINT32_C(0x207000)
#define SECOND UINT32_C(0x208000)
#define NODE1 UINT32_C(0x209000)
#define NODE2 UINT32_C(0x209100)
#define RETURN UINT32_C(0x001f3bc1)
#define FREE UINT32_C(0x00667788)
#define CHECK(x) do{++checks;if(!(x)){fprintf(stderr,"FAIL %d %s\n",__LINE__,#x);exit(1);}}while(0)
typedef struct mem {
 unsigned char*data;unsigned reads,writes,calls;
 uint32_t last_target[8],last_ptr[8],last_esp[8];
 uint32_t fail_read,fail_write;unsigned fail_call;bool bad_return;
} mem;
static unsigned checks;
static bool inside(uint32_t a){return a>=BASE&&(uint64_t)(a-BASE)+4u<=SIZE;}
static void put(mem*m,uint32_t a,uint32_t v){CHECK(inside(a));memcpy(m->data+a-BASE,&v,4);}
static uint32_t get(mem*m,uint32_t a){uint32_t v;CHECK(inside(a));memcpy(&v,m->data+a-BASE,4);return v;}
static bool rd(void*p,uint32_t a,uint32_t*v){mem*m=p;m->reads++;if(!inside(a)||a==m->fail_read)return false;*v=get(m,a);return true;}
static bool wr(void*p,uint32_t a,uint32_t v){mem*m=p;m->writes++;if(!inside(a)||a==m->fail_write)return false;put(m,a,v);return true;}
static bool fre(void*p,uint32_t target,uint32_t ptr,uint32_t esp,
                uint32_t *return_ip,uint32_t *return_esp){
    mem*m=p;CHECK(m->calls<8u);const unsigned i=m->calls++;
    m->last_target[i]=target;m->last_ptr[i]=ptr;m->last_esp[i]=esp;
    CHECK(get(m,esp+4u)==ptr);
    CHECK(get(m,esp)==(target==0x2ea018u?0x2b8e08u:
          (ptr==ARRAY?0x2b8e28u:0x2b8e40u)));
    *return_ip=get(m,esp);*return_esp=esp+4u;
    if(m->bad_return)*return_ip+=4u;
    return m->fail_call!=i+1u;
}
static void seed(mem*m,unsigned count,bool nodes){
 memset(m->data,0xa5,SIZE);m->reads=m->writes=m->calls=0;
 m->fail_read=m->fail_write=m->fail_call=0;m->bad_return=false;
 put(m,ESP,RETURN);put(m,OBJECT,count);put(m,OBJECT+4u,SECOND);
 put(m,OBJECT+12u,ARRAY);put(m,0x3bc654u,FREE);
 for(unsigned i=0;i<count;i++)put(m,ARRAY+i*4u,0u);
 if(nodes&&count>=2){put(m,ARRAY+4u,NODE1);put(m,NODE1,NODE2);put(m,NODE2,0u);}
}
static bf_002b8de0_result run(mem*m,unsigned count,unsigned nodes){
 const bf_002b8de0_memory io={m,rd,wr,fre};
 const bf_002b8de0_entry in={ESP,OBJECT,UINT32_C(0xabc12340),
                              UINT32_C(0x123ff005),count+1u,nodes};
 return bf_002b8de0_execute(&io,in);
}
static void normal(mem*m){
 for(unsigned count=0;count<16;count++){
    seed(m,count,false);
    const bf_002b8de0_result r=run(m,count,8);
    CHECK(r.status==BF_002B8DE0_OK&&r.pc==0x2b8e4au);
    CHECK(r.next_eip==RETURN&&r.final_esp==ESP+4u);
    CHECK(r.final_ebx==0xabc12340u&&r.final_esi==0x123ff005u);
    CHECK(r.buckets_visited==count&&r.nodes_freed==0u);
    CHECK(r.arrays_freed==2u&&m->calls==2u);
    CHECK(get(m,OBJECT+4u)==0u&&get(m,OBJECT+12u)==0u);
    CHECK(get(m,OBJECT)==count);
    CHECK(m->last_ptr[0]==ARRAY&&m->last_ptr[1]==SECOND);
    CHECK(m->last_target[0]==FREE&&m->last_target[1]==FREE);
 }
 seed(m,4,true);
 bf_002b8de0_result r=run(m,4,2);
 CHECK(r.status==BF_002B8DE0_OK);
 CHECK(r.buckets_visited==4u&&r.nodes_freed==2u&&r.arrays_freed==2u);
 CHECK(m->calls==4u);
 CHECK(m->last_ptr[0]==NODE1&&m->last_ptr[1]==NODE2);
 CHECK(m->last_target[0]==0x2ea018u&&m->last_target[1]==0x2ea018u);
 CHECK(m->last_ptr[2]==ARRAY&&m->last_ptr[3]==SECOND);
 CHECK(m->last_esp[0]==ESP-16u&&m->last_esp[2]==ESP-8u);
}
static void faults(mem*m){
 seed(m,4,true);m->fail_read=NODE1;
 bf_002b8de0_result r=run(m,4,2);
 CHECK(r.status==BF_002B8DE0_READ_FAULT&&r.fault_address==NODE1&&m->calls==0);
 seed(m,4,true);m->fail_call=2u;
 r=run(m,4,2);
 CHECK(r.status==BF_002B8DE0_CALL_UNRESOLVED&&r.nodes_freed==1u);
 CHECK(get(m,OBJECT+12u)==ARRAY&&m->calls==2u);
 seed(m,4,true);r=run(m,4,1);
 CHECK(r.status==BF_002B8DE0_BUDGET_EXHAUSTED&&r.nodes_freed==1u);
 seed(m,4,false);m->fail_write=OBJECT+12u;
 r=run(m,4,2);
 CHECK(r.status==BF_002B8DE0_WRITE_FAULT&&r.arrays_freed==0u);
 CHECK(m->calls==1u&&get(m,OBJECT+12u)==ARRAY);
 seed(m,4,true);m->bad_return=true;
 r=run(m,4,2);
 CHECK(r.status==BF_002B8DE0_RETURN_MISMATCH&&m->calls==1u);
 seed(m,4,true);const bf_002b8de0_memory io={m,rd,wr,fre};
 const bf_002b8de0_entry in={ESP,OBJECT,0,0,1,8};
 r=bf_002b8de0_execute(&io,in);
 CHECK(r.status==BF_002B8DE0_BUDGET_EXHAUSTED&&r.buckets_visited==1u);
 CHECK(bf_002b8de0_execute(NULL,in).status==BF_002B8DE0_INVALID);
}
int main(void){
 mem*m=calloc(1,sizeof *m);CHECK(m);m->data=malloc(SIZE);CHECK(m->data);
 normal(m);faults(m);
 printf("PASS 002B8DE0 guest cleanup %u assertions\n",checks);
 free(m->data);free(m);return 0;
}
