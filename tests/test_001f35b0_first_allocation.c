#define main previous_heap_wrapper_main
#include "test_heap_wrapper_guest.c"
#undef main
#include "bf_001f35b0_first_allocation.h"

static bool first_inner(void *context,uint32_t target,uint32_t entry,
                        uint32_t *eax,uint32_t *eip,uint32_t *esp)
{
    fixture*f=context;++f->calls;f->target=target;f->esp=entry;
    CHECK(target==UINT32_C(0x2f6e31));
    CHECK(get(f,entry+4u)==UINT32_C(0x8765));
    CHECK(get(f,entry+8u)==0u&&get(f,entry+12u)==8u);
    *eax=UINT32_C(0x1c0000);
    *eip=get(f,entry);*esp=entry+16u;
    return true;
}
static void verify_first(fixture*f,bool original_target){
    seed(f,8u);
    const uint32_t F=E+UINT32_C(0x200);
    bf_001f35b0_result gate={0};
    gate.status=BF_001F35B0_NEEDS_ALLOCATOR;
    gate.pc=UINT32_C(0x1f35e4);gate.esp=F;
    if(!original_target)put(f,UINT32_C(0x3bc650),UINT32_C(0x238100));
    const bf_heap_guest_io io={f,rd,wr,first_inner};
    const bf_first_alloc_result r=bf_001f35b0_allocate_first(&io,gate);
    if(!original_target){
        CHECK(r.status==BF_FIRST_ALLOC_HEAP_FAILED);
        CHECK(r.heap.status==BF_HEAP_GUEST_PATCHED_TARGET);
        CHECK(f->calls==0u);
        return;
    }
    CHECK(r.status==BF_FIRST_ALLOC_OK);
    CHECK(r.pc==UINT32_C(0x1f35ee)&&r.esp==F);
    CHECK(get(f,F-4u)==8u&&get(f,F-8u)==UINT32_C(0x1f35eb));
    CHECK(get(f,F-12u)==1u&&get(f,F-16u)==8u);
    CHECK(get(f,F-20u)==UINT32_C(0x2ea028));
    CHECK(get(f,F-24u)==8u&&get(f,F-28u)==UINT32_C(0x67cdb));
    CHECK(r.heap.called_inner&&r.heap.inner_target==UINT32_C(0x2f6e31));
    CHECK(r.allocated_guest==UINT32_C(0x1c0000)&&f->calls==1u);
}
int main(void){
    fixture f={0};f.mem=malloc(SIZE);CHECK(f.mem);
    verify_first(&f,false);
    verify_first(&f,true);
    printf("PASS 1F35B0 first heap allocation chain %u assertions\n",checks);
    free(f.mem);return 0;
}
