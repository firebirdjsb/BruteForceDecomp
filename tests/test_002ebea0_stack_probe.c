/* Portable contract tests; formula/trace checks are not a native x86 oracle. */
#include "bf_x86_stack_probe_002ebea0.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CAP 128u
#define SIZE UINT32_C(0x24000)
#define ARITH UINT32_C(0x8d5)
static unsigned checks, runs, caller_frames;
#define CHECK(x) do { ++checks; if (!(x)) { \
    fprintf(stderr, "FAIL line %d: %s\n", __LINE__, #x); exit(1); } } while (0)

typedef struct event {
    uint32_t address, value;
    bool write, success;
    bf_stack_probe_002ebea0_state before;
} event;
typedef struct bus {
    unsigned char bytes[SIZE];
    uint32_t base;
    event log[CAP];
    unsigned count, fail_at;
    bool partial_write;
    unsigned override_at[3];
    uint32_t override_value[3];
} bus;

/* This backend explicitly maps a wrapping interval in a 32-bit address ring.
 * It claims no hardware segment, page, protection or exception behavior. */
static bool mapped(const bus *b, uint32_t address)
{
    return address - b->base <= SIZE - 4u;
}
static uint32_t get(const bus *b, uint32_t address)
{
    const unsigned char *p = b->bytes + (address - b->base);
    return (uint32_t)p[0] | (uint32_t)p[1] << 8 |
           (uint32_t)p[2] << 16 | (uint32_t)p[3] << 24;
}
static void put(bus *b, uint32_t address, uint32_t value, unsigned width)
{
    unsigned char *p = b->bytes + (address - b->base);
    for (unsigned i = 0; i < width; ++i) p[i] = (unsigned char)(value >> (8u*i));
}
static event *attempt(bus *b, uint32_t address, bool write, uint32_t value)
{
    CHECK(b->count < CAP);
    event *e = &b->log[b->count++];
    memset(e, 0, sizeof *e);
    e->address = address; e->write = write; e->value = value;
    e->success = mapped(b, address) && b->count != b->fail_at;
    return e;
}
static bool read32(void *user, uint32_t address, uint32_t *value)
{
    bus *b = user;
    event *e = attempt(b, address, false, 0);
    if (!e->success) return false;
    e->value = get(b, address);
    for (unsigned i = 0; i < 3; ++i)
        if (b->count == b->override_at[i]) e->value = b->override_value[i];
    *value = e->value;
    return true;
}
static bool write32(void *user, uint32_t address, uint32_t value)
{
    bus *b = user;
    event *e = attempt(b, address, true, value);
    if (e->success) put(b, address, value, 4);
    else if (b->partial_write && mapped(b, address)) put(b, address, value, 2);
    return e->success;
}
static void initialize(bus *b, uint32_t base, uint32_t stack)
{
    memset(b, 0, sizeof *b);
    b->base = base;
    for (uint32_t i = 0; i < SIZE; ++i)
        b->bytes[i] = (unsigned char)((i*37u + i/17u + 0x59u) & 255u);
    CHECK(mapped(b, stack));
    put(b, stack, UINT32_C(0x6c39a257), 4);
}
static bf_stack_probe_002ebea0_state initial(uint32_t n, uint32_t stack)
{
    bf_stack_probe_002ebea0_state s = {
        n, UINT32_C(0xf3a45c87), stack, UINT32_C(0x2ebea0),
        UINT32_C(0xa5c3f731), UINT32_C(0x53aa691e)
    };
    return s;
}
static bool same_state(bf_stack_probe_002ebea0_state a,
                       bf_stack_probe_002ebea0_state b)
{
    return a.eax==b.eax && a.ecx==b.ecx && a.esp==b.esp && a.eip==b.eip &&
           a.eflags==b.eflags && a.eflags_defined==b.eflags_defined;
}

/* Independent arithmetic flag calculation: wide signed/unsigned arithmetic,
 * nibble carry/borrow, and explicit popcount (not the header's bit formulas). */
static int64_t signed32(uint32_t x)
{
    return x <= UINT32_C(0x7fffffff) ? (int64_t)x : (int64_t)x-INT64_C(4294967296);
}
static uint32_t szp(uint32_t x)
{
    unsigned ones = 0;
    for (unsigned i=0; i<8; ++i) ones += (x >> i) & 1u;
    return (ones%2u==0 ? 4u:0u) | (x==0 ? 64u:0u) |
           (x>=UINT32_C(0x80000000) ? 128u:0u);
}
static void arithmetic(bf_stack_probe_002ebea0_state *s,
                        uint32_t a, uint32_t b, bool subtract)
{
    const uint32_t r = subtract ? a-b : a+b;
    const int64_t wide = subtract ? signed32(a)-signed32(b) : signed32(a)+signed32(b);
    const bool cf = subtract ? a<b : (uint64_t)a+b>UINT32_MAX;
    const bool af = subtract ? (a&15u)<(b&15u) : (a&15u)+(b&15u)>15u;
    uint32_t f = szp(r) | (cf?1u:0u) | (af?16u:0u) |
        (wide<INT64_C(-2147483648) || wide>INT64_C(2147483647) ? 2048u:0u);
    s->eflags = (s->eflags & ~ARITH) | f;
    s->eflags_defined |= ARITH;
}
static void logical(bf_stack_probe_002ebea0_state *s, uint32_t x)
{
    s->eflags = (s->eflags & ~UINT32_C(0x8c5)) | szp(x);
    s->eflags_defined = (s->eflags_defined | UINT32_C(0x8c5)) & ~UINT32_C(16);
}
static uint32_t expected_access(bus *gold, bf_stack_probe_002ebea0_state s,
                                 uint32_t eip, uint32_t address,
                                 bool write, uint32_t value)
{
    CHECK(mapped(gold,address));
    event *e = attempt(gold,address,write,value);
    s.eip=eip; e->before=s;
    if (write) put(gold,address,value,4);
    else e->value=get(gold,address);
    return e->value;
}

/* Construct only the independent memory trace and its formula-derived prefix
 * states. This is not a second instruction-dispatch interpreter. */
static bf_stack_probe_002ebea0_state expected(bus *gold,
                                             bf_stack_probe_002ebea0_state in)
{
    bf_stack_probe_002ebea0_state s=in;
    const uint32_t n=in.eax, stack=in.esp, final=stack+4u-n;
    uint32_t value, ret;
    if (n==0) {
        logical(&s,0);
        ret=expected_access(gold,s,0x2ebeb8,stack,false,0);
        s.esp=stack+4u; s.eip=ret; return s;
    }
    if (n<4096u) {
        s.eax=final;
        arithmetic(&s,stack-n,4,false);
        value=expected_access(gold,s,0x2ebeb2,final,false,0);
        logical(&s,value&final);
        s.eax=stack; s.esp=final;
        ret=expected_access(gold,s,0x2ebeb5,stack,false,0);
        s.eax=ret;
        expected_access(gold,s,0x2ebeb7,final-4u,true,ret);
        s.esp=final-4u;
        s.eip=expected_access(gold,s,0x2ebeb8,final-4u,false,0);
        s.esp=final; return s;
    }
    arithmetic(&s,n,4096,true);
    expected_access(gold,s,0x2ebeb9,stack-4u,true,in.ecx);
    s.esp=stack-4u;
    const uint32_t pages=n/4096u, remainder=n%4096u;
    for (uint32_t j=1; j<=pages; ++j) {
        s.eax=n-j*4096u; s.ecx=stack+4u-j*4096u;
        arithmetic(&s,n-(j-1u)*4096u,4096,true);
        value=expected_access(gold,s,0x2ebec9,s.ecx,false,0);
        logical(&s,value&s.eax);
        arithmetic(&s,s.eax,4096,true);
    }
    arithmetic(&s,stack+4u-pages*4096u,remainder,true);
    s.ecx=final; s.eax=stack-4u;
    value=expected_access(gold,s,0x2ebed6,final,false,0);
    logical(&s,value&s.eax);
    s.esp=final;
    s.ecx=expected_access(gold,s,0x2ebeda,stack-4u,false,0);
    ret=expected_access(gold,s,0x2ebedc,stack,false,0); s.eax=ret;
    expected_access(gold,s,0x2ebedf,final-4u,true,ret);
    s.esp=final-4u;
    s.eip=expected_access(gold,s,0x2ebee0,final-4u,false,0);
    s.esp=final; return s;
}
static bf_stack_probe_002ebea0_result execute(bus *b,
                                             bf_stack_probe_002ebea0_state in)
{
    const bf_stack_probe_002ebea0_memory mem={b,read32,write32};
    return bf_stack_probe_002ebea0(in,&mem);
}
static void compare_events(const bus *a, const bus *b, unsigned count,
                            bool last_failed)
{
    CHECK(a->count==count);
    for (unsigned i=0; i<count; ++i) {
        CHECK(a->log[i].address==b->log[i].address);
        CHECK(a->log[i].write==b->log[i].write);
        CHECK(a->log[i].success==!(last_failed && i+1u==count));
        if (a->log[i].success || a->log[i].write)
            CHECK(a->log[i].value==b->log[i].value);
    }
}

static void run_case(uint32_t n, uint32_t base, uint32_t stack)
{
    bus *gold=malloc(sizeof *gold), *actual=malloc(sizeof *actual), *prefix=malloc(sizeof *prefix);
    CHECK(gold && actual && prefix);
    initialize(actual,base,stack); *gold=*actual;
    const bf_stack_probe_002ebea0_state in=initial(n,stack);
    const bf_stack_probe_002ebea0_state want=expected(gold,in);
    bf_stack_probe_002ebea0_result result=execute(actual,in);
    CHECK(result.status==BF_STACK_PROBE_OK && result.fault_address==0);
    CHECK(same_state(result.state,want));
    CHECK(result.state.esp==stack+4u-n && result.state.ecx==in.ecx);
    CHECK(result.state.eax==(n==0 ? 0u:UINT32_C(0x6c39a257)));
    CHECK(result.state.eip==UINT32_C(0x6c39a257));
    CHECK((result.state.eflags_defined & 16u)==0);
    CHECK((result.state.eflags_defined & UINT32_C(0x8c5))==UINT32_C(0x8c5));
    CHECK((result.state.eflags & ~ARITH)==(in.eflags & ~ARITH));
    CHECK((result.state.eflags_defined & ~ARITH)==(in.eflags_defined & ~ARITH));
    compare_events(actual,gold,gold->count,false);
    CHECK(memcmp(actual->bytes,gold->bytes,SIZE)==0);
    if (n>=4096u && n%4096u==0) {
        const unsigned k=n/4096u;
        CHECK(gold->log[k].address==gold->log[k+1u].address);
        CHECK(gold->log[k].before.eip==0x2ebec9 && gold->log[k+1u].before.eip==0x2ebed6);
    }
    for (unsigned fail=1; fail<=gold->count; ++fail) {
        for (unsigned partial=0; partial<2; ++partial) {
            initialize(actual,base,stack); *prefix=*actual;
            actual->fail_at=fail; actual->partial_write=partial!=0;
            for (unsigned i=0; i+1u<fail; ++i)
                if (gold->log[i].write) put(prefix,gold->log[i].address,gold->log[i].value,4);
            const event *e=&gold->log[fail-1u];
            if (partial && e->write) put(prefix,e->address,e->value,2);
            result=execute(actual,in);
            CHECK(result.status==(e->write?BF_STACK_PROBE_WRITE_FAULT:BF_STACK_PROBE_READ_FAULT));
            CHECK(result.fault_address==e->address);
            CHECK(same_state(result.state,e->before));
            compare_events(actual,gold,fail,true);
            CHECK(memcmp(actual->bytes,prefix->bytes,SIZE)==0);
            ++runs;
        }
    }
    ++runs;
    free(prefix); free(actual); free(gold);
}

static void scripted_reloads(void)
{
    bus *b=malloc(sizeof *b); CHECK(b);
    const uint32_t stack=0x121000u;
    initialize(b,0x100000u,stack);
    /* For N=4096: write, loop probe, final probe, ECX read, R read,
     * relocated write, RET read. Values intentionally differ from memory. */
    b->override_at[0]=4; b->override_value[0]=0x12345678u;
    b->override_at[1]=5; b->override_value[1]=0x87654321u;
    b->override_at[2]=7; b->override_value[2]=0x11223344u;
    bf_stack_probe_002ebea0_result r=execute(b,initial(4096,stack));
    CHECK(r.status==BF_STACK_PROBE_OK && b->count==7);
    CHECK(r.state.ecx==0x12345678u && r.state.eax==0x87654321u && r.state.eip==0x11223344u);
    CHECK(get(b,stack-4096u)==0x87654321u);
    initialize(b,0x100000u,stack);
    b->override_at[0]=4; b->override_value[0]=0xabcddcbau;
    r=execute(b,initial(1,stack));
    CHECK(r.status==BF_STACK_PROBE_OK && b->count==4);
    CHECK(r.state.eax==0x6c39a257u && r.state.eip==0xabcddcbau);
    initialize(b,0x100000u,stack);
    b->override_at[0]=1; b->override_value[0]=0x5555aaaau;
    r=execute(b,initial(0,stack));
    CHECK(r.status==BF_STACK_PROBE_OK && r.state.eax==0 && r.state.eip==0x5555aaaau);
    free(b); ++runs;
}
static void huge_faults(void)
{
    const uint32_t inputs[]={0x80000000u,0xffffffffu,0x7fffffffu};
    bus *b=malloc(sizeof *b); CHECK(b);
    for (unsigned i=0;i<sizeof inputs/sizeof inputs[0];++i) {
        initialize(b,0x100000u,0x121000u);
        bf_stack_probe_002ebea0_result r=execute(b,initial(inputs[i],0x121000u));
        CHECK(r.status==BF_STACK_PROBE_READ_FAULT && r.state.eip==0x2ebec9u);
        CHECK(!mapped(b,r.fault_address) && b->count<CAP);
        CHECK(b->log[0].write && get(b,0x120ffcu)==0xf3a45c87u);
        CHECK(r.state.esp==0x120ffcu);
        CHECK(r.state.eax==inputs[i]-(b->count-1u)*4096u);
        CHECK(r.state.ecx==0x121004u-(b->count-1u)*4096u);
        ++runs;
    }
    free(b);
}

/* Callsite contracts only, not complete caller execution. EBP is explicitly
 * supplied by this fixture; no existing C entry is assumed to expose it.
 * 0x33FB4D and 0x2C255B CALL with pre-CALL ESP=EBP-0x20. The fixture places
 * CALL's return DWORD at that ESP-4 before invoking the helper state model.
 * No subsequent copy, zeroing, opaque helper or caller cleanup is executed. */
static void caller_frame(uint32_t raw, uint32_t want_n, uint32_t return_address)
{
    const uint32_t ebp=0x121020u, before_call=ebp-0x20u;
    const uint32_t n=(raw+3u)&UINT32_C(0xfffffffc);
    bus *b=malloc(sizeof *b);
    CHECK(b); CHECK(n==want_n);
    initialize(b,0x100000u,before_call-4u);
    const uint32_t entry_sp=before_call-4u;
    put(b,entry_sp,return_address,4); /* explicit original CALL effect */
    bf_stack_probe_002ebea0_result r=execute(b,initial(n,entry_sp));
    if (n<=32768u) {
        CHECK(r.status==BF_STACK_PROBE_OK);
        CHECK(r.state.esp==ebp-0x20u-n && r.state.eip==return_address);
        CHECK(r.state.eax==(n==0?0u:return_address));
        CHECK(r.state.ecx==0xf3a45c87u);
        if (n==0) CHECK(b->count==1 && b->log[0].address==entry_sp);
        if (n!=0) CHECK(get(b,before_call-n-4u)==return_address);
    } else {
        /* Negative sign-extended WORDs round to huge unsigned sizes.
         * The small mapped backend faults on the first unavailable
         * probe; no VLA, host stack allocation or artificial size cap. */
        CHECK(r.status==BF_STACK_PROBE_READ_FAULT && r.state.eip==0x2ebec9u);
        CHECK(!mapped(b,r.fault_address) && b->count<CAP);
        CHECK(r.state.esp==entry_sp-4u);
        CHECK(get(b,entry_sp-4u)==0xf3a45c87u);
        CHECK(r.state.eax==n-(b->count-1u)*4096u);
        CHECK(r.state.ecx==entry_sp+4u-(b->count-1u)*4096u);
    }
    free(b); ++runs; ++caller_frames;
}
static void caller_contracts(void)
{
    /* Unsigned length at 0x33FB45..0x33FB4A, after capacity<length.
     * The last case deliberately wraps ADD EAX,3 to a rounded zero. */
    /* Capacity>=length bypass is instruction evidence only; this test does
     * not claim coverage of that caller path without executing caller code. */
    static const uint32_t lengths[]={1,3,4,4095,4096,4097,0xffffffffu};
    static const uint32_t rounded[]={4,4,4,4096,4096,4100,0};
    for (unsigned i=0;i<sizeof lengths/sizeof lengths[0];++i) {
        const uint32_t length=lengths[i];
        const uint32_t smaller_capacity=length-1u;
        CHECK(smaller_capacity<length);
        caller_frame(length,rounded[i],0x33fb52u);
    }
    /* MOVSX EDI,WORD at 0x2C254C, then DWORD ADD/AND at 0x2C2555/58.
     * Derive sign extension arithmetically without an out-of-range signed
     * conversion. The callee always gets CALLed, including rounded zero. */
    static const int32_t words[]={0,1,32767,-1,-4,-32768};
    static const uint32_t signed_rounded[]={0,4,32768,0,0xfffffffcu,0xffff8000u};
    for (unsigned i=0;i<sizeof words/sizeof words[0];++i) {
        const uint32_t raw=(uint32_t)words[i];
        const uint16_t bits=(uint16_t)raw;
        const uint32_t sign_extended=(bits&0x8000u)!=0 ?
            UINT32_C(0xffff0000)|(uint32_t)bits : (uint32_t)bits;
        CHECK(raw==sign_extended);
        caller_frame(sign_extended,signed_rounded[i],0x2c2560u);
    }
}

#ifdef BF_STACK_PROBE_NATIVE
extern int bf_stack_probe_native_suite(void);
#endif
int main(void)
{
    const uint32_t cases[]={0,1,2,3,4,15,16,4095,4096,4097,8191,8192,8193,16384,65537};
    for (unsigned i=0;i<sizeof cases/sizeof cases[0];++i) {
        run_case(cases[i],0x100000u,0x121000u);
        run_case(cases[i],0xffff0000u,0x11000u);
    }
    /* Explicit backend mapping includes accesses starting near UINT32_MAX
     * whose four-byte extent crosses zero. This is backend policy only. */
    for (uint32_t n=0;n<=4;++n) run_case(n,0xfffff000u,0xfffffffeu);
    scripted_reloads(); huge_faults(); caller_contracts();
#ifdef BF_STACK_PROBE_NATIVE
    CHECK(bf_stack_probe_native_suite()==0);
#endif
    printf("PASS: %u portable scenarios (%u caller frames), %u checks; formula/trace/fault contracts\n",
           runs,caller_frames,checks);
    return 0;
}
