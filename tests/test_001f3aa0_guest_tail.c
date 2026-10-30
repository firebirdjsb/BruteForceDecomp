#include "bf_001f3aa0_guest_tail.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BASE UINT32_C(0x100000)
#define SIZE UINT32_C(0x310000)
#define EBP UINT32_C(0x230000)
#define L (EBP-UINT32_C(0x20b0))
#define OWNER UINT32_C(0x250000)
#define SOURCE UINT32_C(0x251000)
#define BUCKET UINT32_C(0x260000)
#define DATA UINT32_C(0x261000)
#define TARGET_NODE UINT32_C(0x262000)
#define ACTUAL_NODE UINT32_C(0x263000)
#define FREE UINT32_C(0x00234567)
#define RET UINT32_C(0x001fac00)
#define CHECK(x) do{++checks;if(!(x)){fprintf(stderr,"FAIL line %d: %s\n",__LINE__,#x);exit(1);}}while(0)
typedef struct fixture {
 unsigned char *b;unsigned rd,wr,branches,frees,depth,loads,adds,subs,pops;
 uint32_t failed_read,failed_write,failed_target,failed_free;
 uint32_t called_target[4],called_stack[4],called_esi[4];
 bool set_owner_pointer, mutate_result, bad_branch_return;
 long double st[8];
} fixture;
static unsigned checks;
static bool mapped(uint32_t a){return a>=BASE&&(uint64_t)(a-BASE)+4u<=SIZE;}
static uint32_t bits(float f){uint32_t w;memcpy(&w,&f,4);return w;}
static float from_bits(uint32_t w){float f;memcpy(&f,&w,4);return f;}
static uint32_t get(fixture*f,uint32_t a){uint32_t w;CHECK(mapped(a));memcpy(&w,f->b+a-BASE,4);return w;}
static void put(fixture*f,uint32_t a,uint32_t w){CHECK(mapped(a));memcpy(f->b+a-BASE,&w,4);}
static bool read32(void*v,uint32_t a,uint32_t*w){fixture*f=v;f->rd++;if(!mapped(a)||a==f->failed_read)return false;*w=get(f,a);return true;}
static bool write32(void*v,uint32_t a,uint32_t w){fixture*f=v;f->wr++;if(!mapped(a)||a==f->failed_write)return false;put(f,a,w);return true;}
static bool free_cb(void*v,uint32_t target,uint32_t ptr,uint32_t esp,
                    uint32_t*return_ip,uint32_t*return_esp){
    fixture*f=v;f->frees++;
    CHECK(get(f,esp+4u)==ptr);
    CHECK(get(f,esp)==(ptr==BUCKET?0x2b8e28u:0x2b8e40u));
    CHECK(target==FREE);
    *return_ip=get(f,esp);*return_esp=esp+4u;
    return !(f->failed_free && (uint32_t)f->frees==f->failed_free);
}
static bool branch(void*v,uint32_t target,uint32_t esp,uint32_t esi,uint32_t eax,
                   uint32_t *next,uint32_t *after){
    fixture*f=v;CHECK(f->branches<4u);
    f->called_target[f->branches]=target;
    f->called_stack[f->branches]=esp;
    f->called_esi[f->branches]=esi;
    ++f->branches;
    if(target==0x1f35b0u){
        CHECK(esp==L-8u&&esi==OWNER&&eax==0u);
        CHECK(get(f,esp)==0x1f3b75u&&get(f,esp+4u)==0x3f800000u);
        if(f->set_owner_pointer)put(f,OWNER+8u,ACTUAL_NODE);
        *next=0x1f3b75u;*after=L;
    } else {
        CHECK(target==0x2b8c60u&&esp==L-4u&&esi==L+0x40u);
        CHECK(get(f,esp)==0x1f3b85u&&eax==ACTUAL_NODE);
        if(f->mutate_result){put(f,DATA+4u,TARGET_NODE);put(f,TARGET_NODE+12u,ACTUAL_NODE);}
        *next=0x1f3b85u;*after=L;
    }
    if(f->bad_branch_return)*after+=4u;
    return f->failed_target!=target;
}
static bool fld(void*v,uint32_t w){fixture*f=v;f->loads++;if(f->depth>=8)return false;f->st[f->depth++]=(long double)from_bits(w);return true;}
static bool add(void*v,uint32_t w){fixture*f=v;f->adds++;if(!f->depth)return false;f->st[f->depth-1]+=(long double)from_bits(w);return true;}
static bool sub(void*v,uint32_t w){fixture*f=v;f->subs++;if(!f->depth)return false;f->st[f->depth-1]-=(long double)from_bits(w);return true;}
static bool pop(void*v,uint32_t *w){fixture*f=v;f->pops++;if(!f->depth)return false;*w=bits((float)f->st[--f->depth]);return true;}
static void seed(fixture*f){
 memset(f->b,0xa5,SIZE);
 f->rd=f->wr=f->branches=f->frees=f->depth=f->loads=f->adds=f->subs=f->pops=0;
 f->failed_read=f->failed_write=f->failed_target=f->failed_free=0;
 f->set_owner_pointer=f->mutate_result=f->bad_branch_return=false;
 put(f,L,0x12345678u);put(f,L+4u,0x87654321u);
 put(f,EBP,0x56780000u);put(f,EBP+4u,RET);
 put(f,L+0x14u,0xff7fffffu);
 put(f,L+0x90u,8u);put(f,L+0x94u,DATA);put(f,L+0x98u,DATA+32u);
 put(f,L+0x9cu,BUCKET);put(f,L+0xa0u,0u);
 for(unsigned i=0;i<8u;i++)put(f,BUCKET+i*4u,0u);
 put(f,OWNER+8u,0u);put(f,OWNER+0x38u,SOURCE);
 put(f,SOURCE+4u,bits(2.5f));put(f,0x3a4f78u,bits(1.f));
 put(f,DATA+4u,0u);put(f,TARGET_NODE+12u,0u);
 put(f,ACTUAL_NODE+0x1cu,bits(0.75f));
 put(f,0x3bc654u,FREE);
}
static bf_001f3aa0_tail_result run(fixture*f){
 const bf_001f3aa0_tail_io io={{f,read32,write32,free_cb},branch};
 const bf_001f3aa0_tail_x87 fp={f,fld,add,sub,pop};
 const bf_001f3aa0_tail_entry in={L,EBP,OWNER,0x19191919u,0x29292929u,9u,16u};
 return bf_001f3aa0_execute_tail(&io,&fp,in);
}
static void check_result(fixture*f,bf_001f3aa0_tail_result r,uint32_t expect){
 CHECK(r.status==BF_001F3AA0_TAIL_OK&&r.pc==0x1f3bcau);
 CHECK(r.final_esp==EBP+16u&&r.return_eip==RET);
 CHECK(r.final_ebp==0x56780000u);
 CHECK(r.final_edi==0x12345678u&&r.final_esi==0x87654321u);
 CHECK(r.loaded_final_float_bits==expect);
 CHECK(f->depth==1u&&r.cleanup.status==BF_002B8DE0_OK);
 CHECK(r.cleanup.buckets_visited==8u&&r.cleanup.arrays_freed==2u);
 CHECK(r.cleanup.next_eip==0x1f3bc1u&&r.cleanup.final_esp==L);
 CHECK(f->frees==2u&&get(f,L+0x94u)==0u&&get(f,L+0x9cu)==0u);
 CHECK(get(f,L+0x40u)==0x39efc8u);
 CHECK(get(f,EBP+4u)==RET);
 CHECK(bits((float)f->st[0])==expect);
}
static void cases(fixture*f){
 seed(f);
 bf_001f3aa0_tail_result r=run(f);
 check_result(f,r,0xff7fffffu);
 CHECK(f->branches==1u&&r.branch_1f35b0_calls==1u&&r.branch_2b8c60_calls==0u);
 CHECK(r.result_float_writes==0u);
 seed(f);f->set_owner_pointer=true;
 r=run(f);check_result(f,r,0xff7fffffu);
 CHECK(f->branches==2u&&r.branch_1f35b0_calls==1u&&r.branch_2b8c60_calls==1u);
 CHECK(f->called_target[0]==0x1f35b0u&&f->called_target[1]==0x2b8c60u);
 seed(f);put(f,OWNER+8u,ACTUAL_NODE);
 f->mutate_result=true;
 r=run(f);check_result(f,r,bits(2.75f));
 CHECK(f->branches==1u&&r.branch_1f35b0_calls==0u&&r.branch_2b8c60_calls==1u);
 CHECK(r.result_float_writes==1u&&f->loads==2u&&f->adds==1u&&f->subs==1u&&f->pops==1u);
 seed(f);f->set_owner_pointer=true;f->mutate_result=true;
 r=run(f);check_result(f,r,bits(2.75f));
 CHECK(r.branch_1f35b0_calls==1u&&r.branch_2b8c60_calls==1u);
 seed(f);put(f,DATA+4u,TARGET_NODE);put(f,TARGET_NODE+12u,0u);
 r=run(f);check_result(f,r,0xff7fffffu);
 CHECK(r.result_float_writes==0u);
}
static void failures(fixture*f){
 seed(f);f->failed_target=0x1f35b0u;
 bf_001f3aa0_tail_result r=run(f);
 CHECK(r.status==BF_001F3AA0_TAIL_BRANCH_UNRESOLVED&&f->frees==0u);
 seed(f);f->bad_branch_return=true;
 r=run(f);CHECK(r.status==BF_001F3AA0_TAIL_BRANCH_RETURN_MISMATCH&&f->frees==0u);
 seed(f);f->failed_read=OWNER+8u;
 r=run(f);CHECK(r.status==BF_001F3AA0_TAIL_READ_FAULT&&r.pc==0x1f3b62u);
 seed(f);f->failed_write=L+0x40u;
 r=run(f);CHECK(r.status==BF_001F3AA0_TAIL_WRITE_FAULT&&r.pc==0x1f3bb4u&&f->frees==0u);
 seed(f);f->failed_free=1u;
 r=run(f);CHECK(r.status==BF_001F3AA0_TAIL_CLEANUP_FAILED&&r.cleanup.status==BF_002B8DE0_CALL_UNRESOLVED);
 seed(f);const bf_001f3aa0_tail_io io={{f,read32,write32,free_cb},branch};
 const bf_001f3aa0_tail_x87 fp={f,fld,add,sub,pop};
 const bf_001f3aa0_tail_entry wrong={L+4u,EBP,OWNER,0,0,9u,16u};
 r=bf_001f3aa0_execute_tail(&io,&fp,wrong);
 CHECK(r.status==BF_001F3AA0_TAIL_INVALID);
}
int main(void){
 fixture*f=calloc(1,sizeof *f);CHECK(f);f->b=malloc(SIZE);CHECK(f->b);
 cases(f);failures(f);
 printf("PASS 001F3AA0 guest conditional/x87/cleanup/RET8 %u assertions\n",checks);
 free(f->b);free(f);return 0;
}
