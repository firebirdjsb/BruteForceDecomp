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
int main(void){
    fixture*f=calloc(1,sizeof *f);CHECK(f);f->data=malloc(SIZE);CHECK(f->data);
    for(unsigned i=0;i<128u;i++)success(f,i);
    chain_faults(f);
    printf("PASS original 001F3AA0 vector/allocator/sparse chain %u assertions\n",checks);
    free(f->data);free(f);return 0;
}
