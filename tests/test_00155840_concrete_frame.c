/* Scoped regression: one constructor-backed virtual chain plus 3 x87 frame writes.
 * Reuse existing test-only long-double backend; not original Xbox FPU parity.
 */
#define main bf_00155840_previous_test_main
#include "test_00155840_x87_call_bridge.c"
#undef main
#include "bf_00155840_concrete_virtual.h"
#include "bf_00155840_frame_x87_increment.h"

static bool dispatch_rd(void *v, uint32_t a, uint32_t *out) {
    if (a==UINT32_C(0x0039adec)+0x14u) {
        *out=BF_00155840_KNOWN_METHOD_ENTRY;return true;
    }
    if (a==UINT32_C(0x0039adec)+4u) {
        *out=BF_00155840_KNOWN_METHOD_IMPL;return true;
    }
    return rd(v,a,out);
}
static void concrete_case(void) {
    mem_model m;fp_model f={0};uint32_t fault=0;
    const uint32_t object=BASE+0x3000u;
    float matrix[12]={1,0,0,0,1,0,0,0,1,2,3,4};
    float input[3]={5,6,7};
    seed(&m,matrix,input);
    for(unsigned i=0;i<12;i++)put(&m,object+4u*i,bits(matrix[i]));
    put(&m,object+0x48u,BF_00155840_KNOWN_SUBOBJECT_TABLE);
    put(&m,EBP+8u,object);
    const bf_621c0_guest_words guest={&m,dispatch_rd,wr};
    const bf_621c0_x87_operations x87={&f,fld,mul,addp,add,pop};
    const bf_00155840_guest_virtual method={
        (void*)&guest,bf_00155840_known_matrix_virtual
    };
    bf_00155840_virtual_621c0_result r=bf_00155840_execute_virtual_621c0(
        &guest,&x87,&method,EBP,ENTRY_ESP);
    CHECK(r.status==BF_00155840_V621C0_OK);
    CHECK(r.method_target_va==BF_00155840_KNOWN_METHOD_ENTRY);
    CHECK(r.matrix_eax==object);
    CHECK(get(&m,EBP-0x2cu)==bits(7.f));
    CHECK(get(&m,EBP-0x28u)==bits(9.f));
    CHECK(get(&m,EBP-0x24u)==bits(11.f));
    put(&m,object+0x48u,UINT32_C(0x0039adf8));
    CHECK(!bf_00155840_known_matrix_virtual((void*)&guest,
       BF_00155840_KNOWN_METHOD_ENTRY,object+0x48u,&fault));
    CHECK(!bf_00155840_known_matrix_virtual((void*)&guest,
       UINT32_C(0x00012345),object+0x48u,&fault));
}
static void increment_case(void) {
    mem_model m;fp_model f={0};uint32_t fault=0;
    float matrix[12]={0};float vector[3]={1,2,3};
    seed(&m,matrix,vector);
    float transform[3]={4,5,6};
    put(&m,EBP-4u,bits(.5f));
    for(unsigned i=0;i<3;i++)put(&m,EBP-0x2cu+4u*i,bits(transform[i]));
    const bf_621c0_guest_words guest={&m,rd,wr};
    const bf_621c0_x87_operations x87={&f,fld,mul,addp,add,pop};
    CHECK(bf_00155840_x87_add_vector(&guest,&x87,EBP,&fault)==BF_621C0_OK);
    CHECK(f.depth==0&&m.rn==9&&m.wn==3);
    CHECK(f.instructions==12);
    CHECK(memcmp(f.ops,"LMASLMASLMAS",12)==0);
    CHECK(get(&m,EBP-0x68u)==bits(3.f));
    CHECK(get(&m,EBP-0x64u)==bits(4.5f));
    CHECK(get(&m,EBP-0x60u)==bits(6.f));
    for(unsigned i=0;i<3;i++) {
       CHECK(m.wa[i]==EBP-0x68u+4u*i);
       for(unsigned j=0;j<3;j++) {
          const uint32_t expected=j==0?EBP-0x2cu+4u*i:
             j==1? EBP-4u:EBP-0x68u+4u*i;
          CHECK(m.ra[3*i+j]==expected);
       }
    }
    for(unsigned i=1;i<=3;i++) {
       seed(&m,matrix,vector);
       memset(&f,0,sizeof f);m.fail_write=i;
       put(&m,EBP-4u,bits(.5f));
       for(unsigned j=0;j<3;j++)put(&m,EBP-0x2cu+4u*j,bits(transform[j]));
       CHECK(bf_00155840_x87_add_vector(&guest,&x87,EBP,&fault)==BF_621C0_GUEST_WRITE_FAILED);
       CHECK(fault==EBP-0x68u+4u*(i-1u));
    }
}
int main(void){
    concrete_case();increment_case();
    printf("PASS concrete virtual and frame increment: %u assertions\n",checks);
    return 0;
}
