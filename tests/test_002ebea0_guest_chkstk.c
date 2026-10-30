#include "bf_002ebea0_guest_chkstk.h"
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BASE UINT32_C(0x00100000)
#define SIZE 65536u
#define ESP (BASE + UINT32_C(0xd000))
#define RET UINT32_C(0x00345678)
#define ECX UINT32_C(0x00dcba98)
#define CHECK(condition) do {++assertions;if(!(condition)){fprintf(stderr,"FAIL line %d: %s\n",__LINE__,#condition);exit(1);}}while(0)
typedef struct fixture {
    unsigned char *words;
    uint32_t addr[64];
    uint8_t type[64];
    unsigned events;
    unsigned fail_read,fail_write,reads,writes;
} fixture;
static unsigned assertions;
static bool within(uint32_t a) {return a >= BASE && (uint64_t)(a-BASE) + 4u <= SIZE;}
static bool read_word(void *arg, uint32_t a, uint32_t *out) {
    fixture *f=arg;
    CHECK(f->events<64u);
    f->type[f->events]=1;f->addr[f->events++]=a;
    ++f->reads;
    if (!within(a) || f->reads==f->fail_read) return false;
    memcpy(out, f->words + (a-BASE),4);return true;
}
static bool write_word(void *arg, uint32_t a, uint32_t w) {
    fixture *f=arg;
    CHECK(f->events<64u);
    f->type[f->events]=2;f->addr[f->events++]=a;
    ++f->writes;
    if (!within(a) || f->writes==f->fail_write) return false;
    memcpy(f->words+(a-BASE),&w,4);return true;
}
static void put(fixture *f,uint32_t addr,uint32_t w) {CHECK(within(addr));memcpy(f->words+(addr-BASE),&w,4);}
static uint32_t get(fixture*f,uint32_t addr) {uint32_t w;CHECK(within(addr));memcpy(&w,f->words+(addr-BASE),4);return w;}
static void reset(fixture*f){memset(f->words,0xa5,SIZE);f->events=f->fail_read=f->fail_write=f->reads=f->writes=0;put(f,ESP,RET);}
static bf_002ebea0_result invoke(fixture *f,uint32_t n) {
    const bf_002ebea0_guest_mem io={f,read_word,write_word};
    const bf_002ebea0_regs registers={n,ECX,ESP,0};
    return bf_002ebea0_execute(&io, registers);
}
static void successful(fixture*f,uint32_t n){
    reset(f);bf_002ebea0_result r=invoke(f,n);
    CHECK(r.status==BF_002EBEA0_OK);
    CHECK(r.regs.ecx==ECX);
    CHECK(r.regs.esp==ESP+4u-n);
    CHECK(r.regs.next_eip==RET);
    CHECK(r.eflags_defined==UINT32_C(0x8c5));
    /* For n=1..3, the relocated return address overwrites some old
     * return-address bytes; this aliasing is original x86 behavior. */
    if(n==0 || n>=4u) CHECK(get(f,ESP)==RET);
    if(n==0){
        CHECK(r.eflags_values==UINT32_C(0x44));
        CHECK(r.regs.eax==0u);
        CHECK(r.stack_probe_reads==0u);
        CHECK(f->events==1u);
        CHECK(f->reads==1u&&f->writes==0u);
        return;
    }
    CHECK(r.regs.eax==RET);
    CHECK(get(f,ESP-n)==RET);
    if(n < 0x1000u){
        CHECK(r.stack_probe_reads==1u);
        CHECK(f->events==4u);
        CHECK(f->type[0]==1&&f->addr[0]==ESP+4u-n);
        CHECK(f->type[1]==1&&f->addr[1]==ESP);
        CHECK(f->type[2]==2&&f->addr[2]==ESP-n);
        CHECK(f->type[3]==1&&f->addr[3]==ESP-n);
    } else {
        const unsigned iterations=n/0x1000u;
        CHECK(r.stack_probe_reads==iterations+1u);
        CHECK(f->type[0]==2&&f->addr[0]==ESP-4u);
        for(unsigned i=0;i<iterations;i++){
            CHECK(f->type[i+1u]==1);
            CHECK(f->addr[i+1u]==ESP+4u-(i+1u)*0x1000u);
        }
        CHECK(f->type[iterations+1u]==1&&f->addr[iterations+1u]==ESP+4u-n);
        CHECK(f->type[iterations+2u]==1&&f->addr[iterations+2u]==ESP-4u);
        CHECK(f->type[iterations+3u]==1&&f->addr[iterations+3u]==ESP);
        CHECK(f->type[iterations+4u]==2&&f->addr[iterations+4u]==ESP-n);
        CHECK(f->type[iterations+5u]==1&&f->addr[iterations+5u]==ESP-n);
    }
}
static void failing(fixture*f){
    reset(f);f->fail_write=1;
    bf_002ebea0_result r=invoke(f,0x1000u);
    CHECK(r.status==BF_002EBEA0_WRITE_FAULT&&r.fault_address==ESP-4u);
    CHECK(f->events==1u&&f->type[0]==2);
    reset(f);f->fail_read=1;
    r=invoke(f,0x1000u);
    CHECK(r.status==BF_002EBEA0_READ_FAULT&&r.fault_address==ESP+4u-0x1000u);
    CHECK(f->events==2u&&f->type[1]==1);
    reset(f);f->fail_read=1;
    r=invoke(f,63u);
    CHECK(r.status==BF_002EBEA0_READ_FAULT&&r.fault_address==ESP+4u-63u);
    CHECK(f->writes==0u);
    reset(f);f->fail_read=2;
    r=invoke(f,0x2001u);
    CHECK(r.status==BF_002EBEA0_READ_FAULT&&r.fault_address==ESP+4u-0x2000u);
    reset(f);f->fail_write=2;
    r=invoke(f,0x1000u);
    CHECK(r.status==BF_002EBEA0_WRITE_FAULT&&r.fault_address==ESP-0x1000u);
    reset(f);
    r=invoke(f,0xd100u); /* below allocated virtual test range */
    CHECK(r.status==BF_002EBEA0_READ_FAULT);
    const bf_002ebea0_regs regs={1u,ECX,ESP,0u};
    CHECK(bf_002ebea0_execute(NULL,regs).status==BF_002EBEA0_INVALID_IO);
}
int main(void){
    fixture f={0};f.words=malloc(SIZE);CHECK(f.words);
    const uint32_t cases[]={0,1,2,3,4,7,0xfff,0x1000,0x1001,0x1fff,0x2000,0x2001,0x20a8,0x14b4,0x3000,0x4fff};
    for(unsigned repeat=0;repeat<128;repeat++)
        for(unsigned i=0;i<sizeof cases/sizeof cases[0];i++)successful(&f,cases[i]);
    reset(&f);
    bf_002ebea0_result one=invoke(&f,0x1000u);
    CHECK(one.eflags_values==bf_002ebea0_test_flags(UINT32_C(0xa5a5a5a5)&(ESP-4u)));
    CHECK(bf_002ebea0_test_flags(0)==UINT32_C(0x44));
    CHECK(bf_002ebea0_test_flags(1)==0u);
    CHECK(bf_002ebea0_test_flags(3)==4u);
    CHECK(bf_002ebea0_test_flags(UINT32_C(0x80000000))==UINT32_C(0x84));
    failing(&f);free(f.words);
    printf("PASS 002ebea0 guest stack probe: %u assertions\n",assertions);
    return 0;
}
