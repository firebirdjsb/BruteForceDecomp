/* Real Xbox 001F3AA0 producer -> 002B7970 vector -> 002B8D60
 * indirect guest allocator -> 256 sparse DWORD frame writes.
 * The allocator is an explicit synthetic guest callback for this test.
 */
#define main bf_previous_tail_reference_main
#include "test_002b7970_guest_tail.c"
#undef main
#include "bf_001f3aa0_vector_alloc_sparse.h"

#define OWNER (BASE+UINT32_C(0x24000))
#define OWNER_DATA (BASE+UINT32_C(0x25000))
#define LIVE (E+UINT32_C(16))
#define EBP (LIVE+UINT32_C(0x20b0))
#define ALLOC_FIRST (BASE+UINT32_C(0x2c000))
#define ALLOC_SECOND (BASE+UINT32_C(0x2d000))
#define ALLOC_METHOD UINT32_C(0x00222222)
static unsigned allocations;
static unsigned fail_allocation;
static bool add_x87(void*v,uint32_t w){
    fixture*f=v;if(f->depth==0u)return false;
    f->st[f->depth-1]+=(long double)val(w);return true;
}
static bool sub_x87(void*v,uint32_t w){
    fixture*f=v;if(f->depth==0u)return false;
    f->st[f->depth-1]-=(long double)val(w);return true;
}
static bool exch_x87(void*v){
    fixture*f=v;if(f->depth<2u)return false;
    long double z=f->st[f->depth-1];
    f->st[f->depth-1]=f->st[f->depth-2];
    f->st[f->depth-2]=z;return true;
}
static bool allocator(void *ctx,uint32_t target,uint32_t bytes,
                      uint32_t entry_esp,uint32_t *out){
    fixture*f=ctx;++allocations;
    CHECK(target==ALLOC_METHOD);
    CHECK(get(f,entry_esp+4u)==bytes);
    CHECK(get(f,entry_esp)==(allocations==1u?
          UINT32_C(0x002b8d85):UINT32_C(0x002b8daa)));
    if(allocations==fail_allocation)return false;
    *out=allocations==1u?ALLOC_FIRST:ALLOC_SECOND;
    return true;
}
static void prepare(fixture*f,unsigned value){
    seed(f,value);allocations=0;fail_allocation=0;
    put(f,EBP+8u,bits(1.f));put(f,EBP+0xcu,bits(2.f));
    put(f,OWNER+0x38u,OWNER_DATA);
    put(f,OWNER_DATA+4u,bits(1.f+(float)(value%16u)*0.25f));
    put(f,OWNER_DATA+8u,bits(0.5f));
    put(f,UINT32_C(0x003a4f78),bits(1.f));
    put(f,UINT32_C(0x003bc650),ALLOC_METHOD);
}
static bf_001f3aa0_producer_result produce(fixture*f){
    const bf_002ebea0_guest_mem guest={f,rd32,wr32};
    const bf_001f3aa0_x87_backend fp={f,fld,add_x87,sub_x87,fstp};
    return bf_001f3aa0_make_2b7970_args(&guest,&fp,EBP,LIVE,OWNER);
}
static bf_001f3aa0_chain_result chain(
    fixture*f,const bf_001f3aa0_producer_result *prod){
    const bf_002b7970_tail_io mem={{f,rd32,wr32},rd64,wr64};
    const bf_002b7970_x87 base={f,fld,exch_x87,fstp};
    const bf_002b7970_tail_ops tail={f,fld,fmul,fstp,mulps,addps};
    bf_002b7970_xmm xmm=start_xmm();
    return bf_001f3aa0_execute_vector_alloc_sparse(
        &mem,&base,&tail,prod,&xmm,EBP,UINT32_C(0x11223344),
        false,allocator);
}
static void success(fixture*f,unsigned value){
    prepare(f,value);
    const bf_001f3aa0_producer_result prod=produce(f);
    CHECK(prod.status==BF_001F3AA0_PRODUCER_OK&&f->depth==0u);
    const bf_001f3aa0_chain_result r=chain(f,&prod);
    CHECK(r.status==BF_001F3AA0_CHAIN_OK);
    CHECK(r.instruction_va==UINT32_C(0x001f3b62));
    CHECK(r.vector.callee.return_eip==UINT32_C(0x001f3b31));
    CHECK(r.vector.callee.final_esp==LIVE);
    CHECK(r.allocation.callee.next_eip==UINT32_C(0x001f3b4a));
    CHECK(r.allocation.after_return_esp==LIVE);
    CHECK(r.allocated_object_guest==LIVE+0x90u);
    CHECK(r.live_guest_esp==LIVE);
    CHECK(r.allocation.callee.first_bytes==32u);
    CHECK(r.allocation.callee.second_bytes==64u);
    CHECK(r.allocation.callee.alloc_calls==2u&&allocations==2u);
    CHECK(r.sparse.accepted&&r.sparse.storage.written==256u);
    CHECK(r.sparse.first_write_guest==LIVE+0xb0u);
    CHECK(r.sparse.last_write_guest==LIVE+0x2090u);
    CHECK(get(f,LIVE+0x40u)==UINT32_C(0x0039efc8));
    CHECK(get(f,LIVE+0x90u)==8u);
    CHECK(get(f,LIVE+0x94u)==ALLOC_SECOND);
    CHECK(get(f,LIVE+0x98u)==ALLOC_SECOND+32u);
    CHECK(get(f,LIVE+0x9cu)==ALLOC_FIRST);
    CHECK(get(f,LIVE+0xa0u)==0u);
    for(unsigned i=0;i<8u;i++)CHECK(get(f,ALLOC_FIRST+4u*i)==0u);
    for(unsigned i=0;i<16u;i++)CHECK(get(f,ALLOC_SECOND+4u*i)==0u);
    for(unsigned i=0;i<256u;i++){
        const uint32_t address=LIVE+0xb0u+32u*i;
        CHECK(get(f,address)==0u);
        CHECK(get(f,address+4u)==UINT32_C(0xa5a5a5a5));
    }
}
static void chain_faults(fixture*f){
    prepare(f,0u);
    bf_001f3aa0_producer_result prod=produce(f);
    fail_allocation=2u;
    const bf_001f3aa0_chain_result r=chain(f,&prod);
    CHECK(r.status==BF_001F3AA0_CHAIN_ALLOCATOR_FAILED);
    CHECK(allocations==2u);
    CHECK(get(f,LIVE+0xb0u)==UINT32_C(0xa5a5a5a5));
    prepare(f,0u);prod=produce(f);
    f->write_fault=LIVE+0xb0u;
    const bf_001f3aa0_chain_result sparse=chain(f,&prod);
    CHECK(sparse.status==BF_001F3AA0_CHAIN_SPARSE_FAILED);
    CHECK(sparse.fault_guest_va==LIVE+0xb0u);
    CHECK(sparse.sparse.storage.written==0u);
    prepare(f,0u);prod=produce(f);
    f->write_fault=LIVE-12u;
    const bf_001f3aa0_chain_result early=chain(f,&prod);
    CHECK(early.status==BF_001F3AA0_CHAIN_VECTOR_FAILED);
    CHECK(allocations==0u);
}
/* Complete after-producer execution, including both conditional
 * callees, x87 result, cleanup and original final RET 8.
 * Branch and free callbacks are SYNTHETIC guest implementations. */
#include "bf_001f3aa0_complete_guest.h"
#define FAKE_BRANCH_OBJECT (BASE+UINT32_C(0x2e000))
#define FAKE_RESULT_NODE (BASE+UINT32_C(0x2f000))
#define FAKE_RESULT_VALUE (BASE+UINT32_C(0x2f100))
#define HEAP_FREE_TARGET UINT32_C(0x00334567)
static bool branch_sets_object,branch_sets_result,branch_fails;
static unsigned branches_taken,heap_frees;

static bool full_branch(void *ctx,uint32_t target,uint32_t guest_esp,
                        uint32_t esi,uint32_t eax,
                        uint32_t *next_eip,uint32_t *next_esp)
{
    fixture*f=ctx;++branches_taken;
    if(target==UINT32_C(0x001f35b0)){
        CHECK(guest_esp==LIVE-8u&&esi==OWNER&&eax==0u);
        CHECK(get(f,guest_esp)==UINT32_C(0x001f3b75));
        CHECK(get(f,guest_esp+4u)==bits(1.f));
        if(branch_sets_object)put(f,OWNER+8u,FAKE_BRANCH_OBJECT);
        *next_eip=UINT32_C(0x001f3b75);*next_esp=LIVE;
    }else{
        CHECK(target==UINT32_C(0x002b8c60));
        CHECK(guest_esp==LIVE-4u&&esi==LIVE+0x40u);
        CHECK(eax==FAKE_BRANCH_OBJECT);
        CHECK(get(f,guest_esp)==UINT32_C(0x001f3b85));
        if(branch_sets_result){
            put(f,ALLOC_SECOND+4u,FAKE_RESULT_NODE);
            put(f,FAKE_RESULT_NODE+12u,FAKE_RESULT_VALUE);
            put(f,FAKE_RESULT_VALUE+0x1cu,bits(0.75f));
        }
        *next_eip=UINT32_C(0x001f3b85);*next_esp=LIVE;
    }
    return !branch_fails;
}
static bool full_heap_free(void *ctx,uint32_t target,uint32_t ptr,
                           uint32_t guest_esp,uint32_t *next_eip,
                           uint32_t *next_esp)
{
    fixture*f=ctx;++heap_frees;
    CHECK(target==HEAP_FREE_TARGET);
    CHECK(ptr==(heap_frees==1u?ALLOC_FIRST:ALLOC_SECOND));
    CHECK(get(f,guest_esp+4u)==ptr);
    CHECK(get(f,guest_esp)==(heap_frees==1u?
        UINT32_C(0x002b8e28):UINT32_C(0x002b8e40)));
    *next_eip=get(f,guest_esp);*next_esp=guest_esp+4u;
    return true;
}
static void full_execution_case(fixture*f,unsigned value,
                                bool set_object,bool set_result)
{
    prepare(f,value);
    branch_sets_object=set_object;branch_sets_result=set_result;
    branch_fails=false;branches_taken=heap_frees=0u;
    put(f,OWNER+8u,set_object?0u:FAKE_BRANCH_OBJECT);
    put(f,UINT32_C(0x003bc654),HEAP_FREE_TARGET);
    put(f,LIVE,UINT32_C(0x0badf00d));
    put(f,LIVE+4u,UINT32_C(0x0ddba11a));
    put(f,EBP,UINT32_C(0x12121212));
    put(f,EBP+4u,UINT32_C(0x00123456));
    const bf_001f3aa0_producer_result prod=produce(f);
    CHECK(prod.status==BF_001F3AA0_PRODUCER_OK);
    const bf_002b7970_tail_io mem={{f,rd32,wr32},rd64,wr64};
    const bf_002b7970_x87 base={f,fld,exch_x87,fstp};
    const bf_002b7970_tail_ops vt={f,fld,fmul,fstp,mulps,addps};
    const bf_001f3aa0_tail_x87 fp={f,fld,add_x87,sub_x87,fstp};
    bf_002b7970_xmm xmm=start_xmm();
    const bf_001f3aa0_complete_result r=
        bf_001f3aa0_execute_after_producer(
            &mem,&base,&vt,&fp,&prod,&xmm,EBP,
            UINT32_C(0x11223344),false,
            allocator,full_branch,full_heap_free,9u,16u);
    CHECK(r.status==BF_001F3AA0_COMPLETE_OK);
    CHECK(r.pc==UINT32_C(0x001f3bca));
    CHECK(r.next_eip==UINT32_C(0x00123456));
    CHECK(r.final_esp==EBP+16u);
    CHECK(r.prefix.sparse.storage.written==256u);
    CHECK(r.tail.cleanup.nodes_freed==0u&&r.tail.cleanup.arrays_freed==2u);
    CHECK(r.tail.cleanup.buckets_visited==8u&&heap_frees==2u);
    CHECK(r.tail.final_esi==UINT32_C(0x0ddba11a));
    CHECK(r.tail.final_edi==UINT32_C(0x0badf00d));
    CHECK(r.tail.final_ebp==UINT32_C(0x12121212));
    CHECK(r.tail.branch_1f35b0_calls==(set_object?1u:0u));
    CHECK(r.tail.branch_2b8c60_calls==1u);
    CHECK(branches_taken==(set_object?2u:1u));
    CHECK(f->depth==1u);
    const uint32_t expected=set_result?
        bits((1.f+(float)(value%16u)*0.25f)+1.f-0.75f):
        UINT32_C(0xff7fffff);
    CHECK(r.x87_final_bits==expected);
    CHECK(bits((float)f->st[0])==expected);
    CHECK(get(f,LIVE+0x94u)==0u&&get(f,LIVE+0x9cu)==0u);
    CHECK(get(f,LIVE+0x40u)==UINT32_C(0x0039efc8));
}
static void full_execution_failures(fixture*f){
    prepare(f,1u);branches_taken=heap_frees=0u;
    branch_sets_object=false;branch_sets_result=false;branch_fails=true;
    put(f,OWNER+8u,0u);put(f,UINT32_C(0x003bc654),HEAP_FREE_TARGET);
    const bf_001f3aa0_producer_result prod=produce(f);
    const bf_002b7970_tail_io mem={{f,rd32,wr32},rd64,wr64};
    const bf_002b7970_x87 base={f,fld,exch_x87,fstp};
    const bf_002b7970_tail_ops vt={f,fld,fmul,fstp,mulps,addps};
    const bf_001f3aa0_tail_x87 fp={f,fld,add_x87,sub_x87,fstp};
    bf_002b7970_xmm xmm=start_xmm();
    const bf_001f3aa0_complete_result r=
        bf_001f3aa0_execute_after_producer(
            &mem,&base,&vt,&fp,&prod,&xmm,EBP,
            UINT32_C(0x11223344),false,
            allocator,full_branch,full_heap_free,9u,16u);
    CHECK(r.status==BF_001F3AA0_COMPLETE_TAIL_FAILED);
    CHECK(r.tail.status==BF_001F3AA0_TAIL_BRANCH_UNRESOLVED);
    CHECK(r.prefix.status==BF_001F3AA0_CHAIN_OK);
    CHECK(heap_frees==0u);
}
int main(void){
    fixture*f=calloc(1,sizeof *f);CHECK(f);f->data=malloc(SIZE);CHECK(f->data);
    for(unsigned i=0;i<128u;i++)success(f,i);
    chain_faults(f);
    for(unsigned i=0;i<32u;i++){
        full_execution_case(f,i,true,true);
        full_execution_case(f,i,true,false);
        full_execution_case(f,i,false,true);
    }
    full_execution_failures(f);
    printf("PASS original 001F3AA0 vector/allocator/sparse chain %u assertions\n",checks);
    free(f->data);free(f);return 0;
}
