/* Raw returned-base read contract; synthetic inputs are not object schemas. */
#define main bf_00155840_tail_tests_not_run_here
#include "test_00155840_tail_operation.c"
#undef main
#include "bf_00155840_concrete_virtual.h"

typedef void (*matrix_oracle_fn)(void *,void *,void *);
static void matrix_case(fixture *t,matrix_oracle_fn oracle,unsigned seed_value,
                        uint32_t primary) {
    uint32_t expected[3], actual[3];
    seed(t,seed_value);
    /* Arbitrary observed/runtime DWORDs after the primary-table word. No
     * constructor, matrix semantics or initialization is inferred for them. */
    for(unsigned i=0;i<12;i++) {
        uint32_t w=0x3d800001u+((seed_value*2246822519u+i*3266489917u)&0x03ffffffu);
        if((seed_value+i)&1u) w|=0x80000000u;
        memcpy(t->bytes+0x180+4u*i,&w,4);
    }
    memcpy(t->bytes+0x180,&primary,4);
    if(seed_value&8u) {
        const uint32_t partial_word=UINT32_C(0x1234ffff);
        const uint32_t all_ones=UINT32_MAX;
        memcpy(t->bytes+0x198,&all_ones,4);
        memcpy(t->bytes+0x1a0,&partial_word,4);
    }
    reset_x87();configure_x87(seed_value&3u);push_sentinel();
    oracle(t->bytes+0xd4,t->bytes+0x180,t->bytes+0x98);
    check_sentinel();memcpy(expected,t->bytes+0xd4,12);
    memset(t->bytes+0xd4,0xa5,12);
    reset_x87();configure_x87(seed_value&3u);push_sentinel();t->depth=1;
    const bf_621c0_guest_words memory={t,rd,wr};
    const bf_621c0_x87_operations floating={t,fld,mul,addp,add,pop};
    const bf_00155840_call_621c0_inputs registers={t->base+0x180u,t->base+0x98u,t->base+0xd4u};
    CHECK(bf_00155840_execute_621c0(&memory,&floating,registers,t->base+0x28u,NULL)==BF_621C0_OK);
    CHECK(t->depth==1);check_sentinel();
    memcpy(actual,t->bytes+0xd4,12);
    CHECK(memcmp(actual,expected,12)==0);
    const unsigned coefficient_offsets[]={8,4,0,36,20,12,16,40,32,24,28,44};
    const unsigned read_indices[]={0,2,4,6,7,9,11,13,14,16,18,20};
    unsigned reads=0;
    for(unsigned i=0;i<t->count;i++) {
        if(t->events[i]!='R') continue;
        for(unsigned c=0;c<12;c++)
            if(reads==read_indices[c]) CHECK(t->addresses[i]==t->base+0x180u+coefficient_offsets[c]);
        ++reads;
    }
    CHECK(reads==23);
}

int main(void) {
    unsigned char *memory=NULL;
    for(uintptr_t hint=0x11000000u;hint<0x70000000u&&!memory;hint+=0x10000u)
        memory=VirtualAlloc((void *)hint,4096,MEM_RESERVE|MEM_COMMIT,PAGE_READWRITE);
    CHECK(memory && (uintptr_t)memory<=UINT32_MAX-512u);
    fixture t={0};t.bytes=memory;t.base=(uint32_t)(uintptr_t)memory;
    void *code=VirtualAlloc(NULL,sizeof matrix_oracle_bytes,MEM_RESERVE|MEM_COMMIT,PAGE_READWRITE);
    CHECK(code!=NULL);memcpy(code,matrix_oracle_bytes,sizeof matrix_oracle_bytes);
    DWORD protection;CHECK(VirtualProtect(code,sizeof matrix_oracle_bytes,PAGE_EXECUTE_READ,&protection));
    CHECK(FlushInstructionCache(GetCurrentProcess(),code,sizeof matrix_oracle_bytes));
    matrix_oracle_fn oracle;memcpy(&oracle,&code,sizeof oracle);
    const uint32_t layouts[]={BF_00155840_PRIMARY_22D330,BF_00155840_PRIMARY_149F10,BF_00155840_PRIMARY_162E90};
    for(unsigned i=0;i<3;i++)for(unsigned n=1;n<=512;n++)matrix_case(&t,oracle,n,layouts[i]);
    reset_x87();CHECK(VirtualFree(code,0,MEM_RELEASE));CHECK(VirtualFree(memory,0,MEM_RELEASE));
    printf("PASS raw returned-base621C0: %u assertions;1536 original-byte cases;3primary-table words;4rounding modes\n",checks);
    return 0;
}
