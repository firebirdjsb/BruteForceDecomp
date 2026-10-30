#include "bf_002b8c60_guest_dispatch.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define BASE UINT32_C(0x100000)
#define SIZE UINT32_C(0x210000)
#define E UINT32_C(0x110000)
#define OBJECT UINT32_C(0x120000)
#define INPUT UINT32_C(0x130000)
#define RECEIVER UINT32_C(0x140000)
#define VTABLE UINT32_C(0x150000)
#define VIRTUAL UINT32_C(0x00123450)
#define RETURN UINT32_C(0x00269685)
#define CHECK(x) do{++checks;if(!(x)){fprintf(stderr,"FAIL %d: %s\n",__LINE__,#x);exit(1);}}while(0)
typedef struct fixture {
    unsigned char *data;
    unsigned calls,reads,read8s,writes;
    uint32_t target,esi,eax,ecx,entry;
    bool bad_return;
} fixture;
static unsigned checks;
static bool mapped(uint32_t addr,unsigned size){
    return addr>=BASE && (uint64_t)(addr-BASE)+size<=SIZE;
}
static bool read32(void*v,uint32_t addr,uint32_t*out){
    fixture*f=v;++f->reads;if(!mapped(addr,4))return false;
    memcpy(out,f->data+addr-BASE,4);return true;
}
static bool read8(void*v,uint32_t addr,uint8_t*out){
    fixture*f=v;++f->read8s;if(!mapped(addr,1))return false;
    *out=f->data[addr-BASE];return true;
}
static bool write32(void*v,uint32_t addr,uint32_t word){
    fixture*f=v;++f->writes;if(!mapped(addr,4))return false;
    memcpy(f->data+addr-BASE,&word,4);return true;
}
static void put(fixture*f,uint32_t addr,uint32_t word){
    CHECK(mapped(addr,4));memcpy(f->data+addr-BASE,&word,4);
}
static uint32_t get(fixture*f,uint32_t addr){
    uint32_t word;CHECK(mapped(addr,4));memcpy(&word,f->data+addr-BASE,4);return word;
}
static bool dispatch(void*v,uint32_t target,uint32_t entry,
    uint32_t esi,uint32_t eax,uint32_t ecx,uint32_t*eip,uint32_t*esp)
{
    fixture*f=v;++f->calls;f->target=target;f->entry=entry;
    f->esi=esi;f->eax=eax;f->ecx=ecx;
    CHECK(get(f,entry+4u)==esi&&get(f,entry+8u)==eax);
    *eip=get(f,entry);*esp=entry+12u;
    if(f->bad_return)*esp-=4u;
    return true;
}
static void seed(fixture*f,unsigned type,unsigned mask,bool flag){
    memset(f->data,0x9a,SIZE);
    f->calls=f->reads=f->read8s=f->writes=0;f->bad_return=false;
    put(f,E,RETURN);put(f,INPUT+8u,mask);
    put(f,OBJECT+4u,type);put(f,OBJECT+0x18u,0u);
    put(f,OBJECT+0x70u,flag?0x10u:0u);
    put(f,OBJECT+0x7cu,RECEIVER);put(f,RECEIVER,VTABLE);
    put(f,VTABLE+0x18u,VIRTUAL);
}
static bf_002b8c60_result run(fixture*f,uint32_t eax){
    const bf_002b8c60_io io={f,read32,read8,write32,dispatch};
    const bf_002b8c60_entry in={E,eax,INPUT,UINT32_C(0xbadc0ded)};
    return bf_002b8c60_execute(&io,in);
}
int main(void){
    fixture f={0};f.data=malloc(SIZE);CHECK(f.data);
    for(unsigned type=0;type<5u;type++)
      for(unsigned mask=0;mask<8u;mask++)
        for(unsigned flag=0;flag<2u;flag++){
            seed(&f,type,mask,flag!=0u);
            const bf_002b8c60_result r=run(&f,OBJECT);
            const bool permit=(!(mask&2u)||flag!=0u)&&(!(mask&4u)||flag==0u);
            const bool invoked=permit&&(type==2u||type==3u);
            CHECK(r.status==BF_002B8C60_OK);
            CHECK(r.next_eip==RETURN&&r.final_esp==E+4u);
            CHECK(r.final_ebx==UINT32_C(0xbadc0ded));
            CHECK(r.call_count==(invoked?1u:0u));
            CHECK(f.calls==(invoked?1u:0u));
            CHECK(get(&f,E-4u)==UINT32_C(0xbadc0ded));
            if(invoked){
                CHECK(r.concrete_target==(type==2u?VIRTUAL:UINT32_C(0x2b89f0)));
                CHECK(f.eax==OBJECT&&f.esi==INPUT);
                CHECK(f.ecx==(type==2u?RECEIVER:0u));
                CHECK(f.entry==E-16u);
                CHECK(get(&f,E-16u)==(type==2u?UINT32_C(0x2b8ca8):UINT32_C(0x2b8c9c)));
            }
        }
    seed(&f,3u,1u,false);put(&f,OBJECT+0x18u,123u);
    bf_002b8c60_result r=run(&f,OBJECT);
    CHECK(r.status==BF_002B8C60_OK&&r.call_count==0u);
    seed(&f,3u,0u,false);f.bad_return=true;r=run(&f,OBJECT);
    CHECK(r.status==BF_002B8C60_BAD_RETURN);
    seed(&f,2u,0u,false);r=run(&f,0u);
    CHECK(r.status==BF_002B8C60_READ_FAULT&&r.fault_address==4u);
    CHECK(r.pc==UINT32_C(0x2b8c8a));
    seed(&f,2u,0u,false);r=run(&f,OBJECT);
    CHECK(r.status==BF_002B8C60_OK&&r.dispatch_kind==2u);
    const bf_002b8c60_entry bad={E,OBJECT,INPUT,0u};
    CHECK(bf_002b8c60_execute(NULL,bad).status==BF_002B8C60_INVALID);
    printf("PASS 002B8C60 original guest dispatch %u assertions\n",checks);
    free(f.data);return 0;
}
