/* 001F3AA0 authentic allocator callsite, followed by already
 * verified 256 sparse DWORD writes. Synthetic allocator reference. */
#define main bf_previous_allocator_test_main
#include "test_002b8d60_guest_alloc.c"
#undef main
#include "bf_001f3aa0_allocator_call.h"

static bf_001f3aa0_allocator_result call(memory*m,uint32_t ebp,uint32_t esp){
    const bf_002b8d60_guest_io io={m,rd,wr,allocator};
    return bf_001f3aa0_execute_allocator_call(&io,ebp,esp,
        UINT32_C(0x12345678),UINT32_C(0x87654321),false);
}
static void success(memory*m){
    const uint32_t S=ENTRY;
    const uint32_t EBP=S+UINT32_C(0x20b0);
    reset(m,0u);
    bf_001f3aa0_allocator_result r=call(m,EBP,S);
    CHECK(r.status==BF_001F3AA0_ALLOC_OK);
    CHECK(r.instruction_va==UINT32_C(0x001f3b4a));
    CHECK(r.after_return_esp==S);
    CHECK(r.output_object_guest==S+0x90u);
    CHECK(r.callee.final_eax==S+0x90u&&r.callee.final_esp==S);
    CHECK(r.callee.next_eip==UINT32_C(0x001f3b4a));
    CHECK(r.callee.alloc_calls==2u);
    CHECK(r.callee.first_zeros==8u&&r.callee.second_zeros==16u);
    CHECK(get(m,S+0x40u)==UINT32_C(0x0039efc8));
    CHECK(get(m,S-4u)==UINT32_C(0x001f3b4a));
    CHECK(get(m,S+0x90u)==8u);
    CHECK(get(m,S+0x94u)==SECOND);
    CHECK(get(m,S+0x98u)==SECOND+32u);
    CHECK(get(m,S+0x9cu)==FIRST);
    CHECK(get(m,S+0xa0u)==0u);
    CHECK(m->sizes[0]==32u&&m->sizes[1]==64u);
    CHECK(m->entry_stacks[0]==S-20u&&m->entry_stacks[1]==S-24u);
    for(uint32_t i=0;i<8u;i++)CHECK(get(m,FIRST+4u*i)==0u);
    for(uint32_t i=0;i<16u;i++)CHECK(get(m,SECOND+4u*i)==0u);
    const bf_002ebea0_guest_mem guest={m,rd,wr};
    bf_001f3aa0_sparse_site_result sparse=
        bf_001f3aa0_execute_sparse_site(&guest,EBP,r.after_return_esp);
    CHECK(sparse.accepted&&sparse.storage.status==BF_002EBEA0_OK);
    CHECK(sparse.storage.written==256u);
    CHECK(sparse.first_write_guest==S+0xb0u);
    CHECK(sparse.last_write_guest==S+0x2090u);
    CHECK(get(m,S+0x90u)==8u);
}
static void faults(memory*m){
    const uint32_t S=ENTRY,EBP=S+UINT32_C(0x20b0);
    reset(m,0);m->fail_write=S+0x40u;
    bf_001f3aa0_allocator_result r=call(m,EBP,S);
    CHECK(r.status==BF_001F3AA0_ALLOC_WRITE_FAULT);
    CHECK(r.fault_guest_va==S+0x40u&&m->calls==0u);
    reset(m,0);m->fail_write=S-4u;
    r=call(m,EBP,S);
    CHECK(r.status==BF_001F3AA0_ALLOC_WRITE_FAULT);
    CHECK(r.fault_guest_va==S-4u&&m->calls==0u);
    reset(m,0);m->fail_call=2u;
    r=call(m,EBP,S);
    CHECK(r.status==BF_001F3AA0_ALLOC_CALLEE_FAULT);
    CHECK(r.callee.alloc_calls==1u&&m->calls==2u);
    reset(m,0);
    r=call(m,EBP,S+4u);
    CHECK(r.status==BF_001F3AA0_ALLOC_INVALID);
    CHECK(m->writes==0u);
}
int main(void){
    memory m={0};m.b=malloc(SIZE);CHECK(m.b);
    success(&m);faults(&m);
    printf("PASS 001F3AA0 2B8D60 allocator call and sparse frame: %u assertions\n",checks);
    free(m.b);return 0;
}
