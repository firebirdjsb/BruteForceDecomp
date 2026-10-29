/* Bounded native x87 replay. Generated oracle bytes stay private/temporary.
 * This test is x86-64 Windows-specific; production operation is ISO C11. */
#include "bf_00155840_tail_operation.h"
#include <windows.h>
#include <xmmintrin.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tail_private_oracle.h"
#define CHECK(x) do { ++checks; if (!(x)) { fprintf(stderr,"FAIL %d: %s\n",__LINE__,#x); exit(1); } } while (0)
static unsigned checks;
typedef struct fixture {
    unsigned char *bytes;
    uint32_t base;
    unsigned accesses, fail_at, xops, fail_xop, rsqrts, getter_calls;
    uint32_t rsqrt_inputs[2];
    unsigned fail_rsqrt;
    bool fail_getter;
    int depth;
    uint8_t flag;
    char events[512];
    uint32_t addresses[512];
    unsigned count;
} fixture;
static void event(fixture *t,char op,uint32_t a) { CHECK(t->count<512); t->events[t->count]=op; t->addresses[t->count++]=a; }
static bool access_ok(fixture *t) { return ++t->accesses!=t->fail_at; }
static bool rd(void *v,uint32_t a,uint32_t *w) {
    fixture *t=v; event(t,'R',a); if (!access_ok(t)||a<t->base||a-t->base>508) return false;
    memcpy(w,t->bytes+(a-t->base),4); return true;
}
static bool wr(void *v,uint32_t a,uint32_t w) {
    fixture *t=v; event(t,'W',a); if (!access_ok(t)||a<t->base||a-t->base>508) return false;
    memcpy(t->bytes+(a-t->base),&w,4); return true;
}
static bool byte_rd(void *v,uint32_t a,uint8_t *w) {
    fixture *t=v; event(t,'B',a); if (!access_ok(t)||a!=0x37bd48u) return false; *w=t->flag; return true;
}
static bool fp_ok(fixture *t) { return ++t->xops!=t->fail_xop; }
/* Hardware x87 holds extended values across these integer-only callbacks.
 * Exact opcode for FSUBP avoids assembler mnemonic direction ambiguity. */
static bool fld(void *v,uint32_t w) { fixture *t=v; if (!fp_ok(t)||t->depth>=8) return false; __asm__ volatile("flds %0"::"m"(w)); ++t->depth; return true; }
static bool mul(void *v,uint32_t w) { fixture *t=v; if (!fp_ok(t)||!t->depth) return false; __asm__ volatile("fmuls %0"::"m"(w)); return true; }
static bool add(void *v,uint32_t w) { fixture *t=v; if (!fp_ok(t)||!t->depth) return false; __asm__ volatile("fadds %0"::"m"(w)); return true; }
static bool divide(void *v,uint32_t w) { fixture *t=v; if (!fp_ok(t)||!t->depth) return false; __asm__ volatile("fdivs %0"::"m"(w)); return true; }
static bool pop(void *v,uint32_t *w) { fixture *t=v; if (!fp_ok(t)||!t->depth) return false; __asm__ volatile("fstps %0":"=m"(*w)); --t->depth; return true; }
static bool store(void *v,uint32_t *w) { fixture *t=v; if (!fp_ok(t)||!t->depth) return false; __asm__ volatile("fsts %0":"=m"(*w)); return true; }
static bool addp(void *v) { fixture *t=v; if (!fp_ok(t)||t->depth<2) return false; __asm__ volatile(".byte 0xde,0xc1"); --t->depth; return true; }
static bool subp(void *v) { fixture *t=v; if (!fp_ok(t)||t->depth<2) return false; __asm__ volatile(".byte 0xde,0xe9"); --t->depth; return true; }
static bool discard(void *v) { fixture *t=v; if (!fp_ok(t)||!t->depth) return false; __asm__ volatile(".byte 0xdd,0xd8"); --t->depth; return true; }
static bool dup(void *v,unsigned i) { fixture *t=v; if (!fp_ok(t)||i>2||t->depth<=(int)i||t->depth>=8) return false;
    if(i==0) { __asm__ volatile(".byte 0xd9,0xc0"); }
    else if(i==1) { __asm__ volatile(".byte 0xd9,0xc1"); }
    else { __asm__ volatile(".byte 0xd9,0xc2"); } ++t->depth; return true; }
static bool mul_st(void *v,unsigned i) { fixture *t=v; if (!fp_ok(t)||i<1||i>2||t->depth<=(int)i) return false;
    if(i==1) { __asm__ volatile(".byte 0xd8,0xc9"); } else { __asm__ volatile(".byte 0xd8,0xca"); } return true; }
static bool exchange(void *v,unsigned i) { fixture *t=v; if (!fp_ok(t)||i!=1||t->depth<2) return false; __asm__ volatile(".byte 0xd9,0xc9"); return true; }
static bool rsqrt(void *v,uint32_t w,uint32_t *out) { fixture *t=v;
    CHECK(t->rsqrts<2); t->rsqrt_inputs[t->rsqrts++]=w;
    if(t->rsqrts==t->fail_rsqrt) return false;
    const __m128 x=_mm_castsi128_ps(_mm_cvtsi32_si128((int)w));
    *out=(uint32_t)_mm_cvtsi128_si32(_mm_castps_si128(_mm_rsqrt_ss(x))); return true; }
/* Getter callback reproduces 0001FC40 scratch reads/writes and FLD/FSTP,
 * using synthetic private scratch below frame. This is not a guest CALL model. */
static bool getter(void *v,uint32_t eax,uint32_t ecx) {
    fixture *t=v; uint32_t z,y,w; ++t->getter_calls;
    if(t->fail_getter) return false;
    const uint32_t scratch=t->base+0x20u;
    if(!rd(t,ecx+0x1cu,&w)||!fld(t,w)||!pop(t,&w)||!wr(t,scratch+4u,w)||
       !rd(t,ecx+0x10u,&w)||!fld(t,w)||!rd(t,scratch+4u,&z)||!pop(t,&w)||!wr(t,scratch,w)||
       !rd(t,ecx+4u,&w)||!fld(t,w)||!rd(t,scratch,&y)||!pop(t,&w)||
       !wr(t,eax,w)||!wr(t,eax+4u,y)||!wr(t,eax+8u,z)) return false;
    return true;
}
static bf_00155840_tail_result execute(fixture *t) {
    const bf_621c0_guest_words m={t,rd,wr};
    const bf_00155840_tail_x87 f={{t,fld,mul,addp,add,pop},divide,subp,store,dup,mul_st,exchange,discard};
    const bf_00155840_tail_external e={t,getter,rsqrt,byte_rd};
    return bf_00155840_execute_tail(&m,&f,&e,t->base+0x100u,t->base+0x180u);
}
static void seed(fixture *t,unsigned n) {
    unsigned char *p=t->bytes; uint32_t b=t->base;
    memset(t,0,sizeof *t); t->bytes=p;t->base=b;
    memset(p,0xa5,512); t->flag=(n&1u)?0x10u:0;
    /* Finite binary32 words, including non-dyadic mantissas and cancellation. */
    const unsigned offsets[]={0xe4,0xfc,0xe8,0xd4,0xd8,0xdc,0x184,0x190,0x19c};
    for(unsigned i=0;i<9;i++) {
        uint32_t w=0x3e800001u+((n*2654435761u+i*97781173u)&0x017fffffu);
        if(i>=3 && ((n>>(i%8u))&1u)) w|=0x80000000u;
        memcpy(p+offsets[i],&w,4);
    }
    /* All other frame words remain nonzero sentinels. */
}
static void reset_x87(void) { __asm__ volatile("fninit"); }
static void configure_x87(unsigned mode) {
    const uint16_t control=(uint16_t)(0x037fu|((mode&3u)<<10));
    __asm__ volatile("fldcw %0"::"m"(control));
}
static void push_sentinel(void) {
    const uint64_t sentinel=UINT64_C(0x4045000000000000); /* exactly 42.0 F64 */
    __asm__ volatile("fldl %0"::"m"(sentinel));
}
static void check_sentinel(void) {
    uint64_t sentinel; __asm__ volatile("fstpl %0":"=m"(sentinel));
    CHECK(sentinel==UINT64_C(0x4045000000000000));
}
typedef unsigned char (*oracle_fn)(void *,void *,void *);
int main(void) {
    unsigned char *memory=NULL;
    for(uintptr_t hint=0x10000000u;hint<0x70000000u&&!memory;hint+=0x10000u)
        memory=VirtualAlloc((void *)hint,4096,MEM_RESERVE|MEM_COMMIT,PAGE_READWRITE);
    CHECK(memory && (uintptr_t)memory<=UINT32_MAX-512u);
    fixture t={0}; t.bytes=memory;t.base=(uint32_t)(uintptr_t)memory;
    void *code=VirtualAlloc(NULL,sizeof tail_oracle_bytes,MEM_RESERVE|MEM_COMMIT,PAGE_READWRITE);
    CHECK(code!=NULL); memcpy(code,tail_oracle_bytes,sizeof tail_oracle_bytes);
    DWORD old; CHECK(VirtualProtect(code,sizeof tail_oracle_bytes,PAGE_EXECUTE_READ,&old));
    CHECK(FlushInstructionCache(GetCurrentProcess(),code,sizeof tail_oracle_bytes));
    oracle_fn oracle; memcpy(&oracle,&code,sizeof oracle);
    unsigned char initial[512], expected[512]; unsigned differences=0;
    for(unsigned n=1;n<=4096;n++) {
        seed(&t,n); memcpy(initial,memory,512); reset_x87();configure_x87(n&3u);push_sentinel();
        unsigned char tested=oracle(memory+0x100,memory+0x180,&t.flag);
        check_sentinel();
        memcpy(expected,memory,512); memcpy(memory,initial,512);reset_x87();configure_x87(n&3u);push_sentinel();t.depth=1;
        const bf_00155840_tail_result r=execute(&t);
        CHECK(r.status==BF_00155840_TAIL_OK && t.depth==1);check_sentinel();
        CHECK(t.rsqrts==2 && t.getter_calls==1);
        CHECK(memcmp(t.rsqrt_inputs,expected+0x130,8)==0);
        CHECK(r.test_al_10_nonzero==(tested!=0));
        /* Getter scratch is synthetic; compare actual original frame only. */
        if(memcmp(memory+0x98,expected+0x98,0x68)!=0) ++differences;
        CHECK(memcmp(memory+0x98,expected+0x98,0x68)==0);
    }
    CHECK(differences==0);
    seed(&t,17); reset_x87(); CHECK(execute(&t).status==BF_00155840_TAIL_OK);
    const unsigned accesses=t.accesses,xops=t.xops;
    CHECK(t.count==sizeof expected_tail_events/sizeof expected_tail_events[0]);
    for(unsigned i=0;i<t.count;i++) {
        CHECK(t.events[i]==expected_tail_events[i]);
        CHECK(t.addresses[i]==(expected_tail_offsets[i]==0x37bd48u ?
              0x37bd48u:t.base+expected_tail_offsets[i]));
    }
    char events[512];uint32_t addresses[512];unsigned count=t.count;
    memcpy(events,t.events,count);memcpy(addresses,t.addresses,count*sizeof *addresses);
    for(unsigned i=1;i<=accesses;i++) {
        seed(&t,17);t.fail_at=i;reset_x87();bf_00155840_tail_result r=execute(&t);
        CHECK(r.status!=BF_00155840_TAIL_OK);CHECK(t.accesses==i);
        CHECK(t.count==i);CHECK(memcmp(t.events,events,i)==0);
        CHECK(memcmp(t.addresses,addresses,i*sizeof *addresses)==0);
        if(r.status==BF_00155840_TAIL_READ_FAILED||r.status==BF_00155840_TAIL_WRITE_FAILED)
            CHECK(r.fault_guest_addr==addresses[i-1]);
    }
    for(unsigned i=1;i<=xops;i++) {
        seed(&t,17);t.fail_xop=i;reset_x87();bf_00155840_tail_result r=execute(&t);
        CHECK(r.status==BF_00155840_TAIL_X87_FAILED||r.status==BF_00155840_TAIL_GETTER_FAILED);
        CHECK(t.xops==i);
    }
    for(unsigned i=1;i<=2;i++) {
        seed(&t,17);t.fail_rsqrt=i;reset_x87();
        CHECK(execute(&t).status==BF_00155840_TAIL_SSE_FAILED);
        CHECK(t.rsqrts==i);
    }
    seed(&t,17);t.fail_getter=true;reset_x87();
    CHECK(execute(&t).status==BF_00155840_TAIL_GETTER_FAILED);CHECK(t.getter_calls==1);
    CHECK(bf_00155840_execute_tail(NULL,NULL,NULL,0,0).status==BF_00155840_TAIL_INVALID_INTERFACE);
    reset_x87();CHECK(VirtualFree(code,0,MEM_RELEASE));CHECK(VirtualFree(memory,0,MEM_RELEASE));
    printf("PASS tail: %u assertions; 4096 original-instruction differential cases; %u access faults; %u x87 faults\n",checks,accesses,xops);
    return 0;
}
