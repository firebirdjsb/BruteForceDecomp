/* Original CALL 0x0026A810 argument and result handoff, using the
 * bounded x87/guest-memory fixture from the standalone matrix test.
 */
#define main bf_previous_matrix_test_main
#define cases bf_previous_matrix_cases
#define faults bf_previous_matrix_faults
#include "test_0026a810_guest_matrix.c"
#undef faults
#undef cases
#undef main
#include "bf_00269600_combine_call.h"

static bf_00269600_call_contracts contract(void){
    bf_00269600_prefix_result prefix={0};
    prefix.status=BF_00269600_PREFIX_OK;
    prefix.continuation_eip=UINT32_C(0x269610);
    prefix.probe.regs.next_eip=UINT32_C(0x269610);
    prefix.esp=ENTRY+20u;
    prefix.ebx=ENTRY+28u;
    return bf_00269600_bind_original_downstream(prefix);
}
static void setup(fixture*f,bf_00269600_call_contracts *c,
                  unsigned m,unsigned n,unsigned k){
    seed(f,0,0,0);
    const uint32_t left=c->combine.args[1];
    const uint32_t right=c->combine.args[2];
    put(f,left+UINT32_C(0x510),m);
    put(f,left+UINT32_C(0x514),k);
    put(f,right+UINT32_C(0x510),55u);
    put(f,right+UINT32_C(0x514),n);
    for(unsigned row=0;row<m;row++)
      for(unsigned j=0;j<k;j++)
        put(f,left+row*0x48u+j*4u,bits((float)(10u+row*10u+j)));
    for(unsigned row=0;row<n;row++)
      for(unsigned j=0;j<k;j++)
        put(f,right+row*0x48u+j*4u,bits((float)(1u+row+j)));
}
static bf_00269600_combine_result perform(
    fixture*f,bf_00269600_call_contracts *c){
    const bf_0026a810_mem mem={f,rd,wr};
    const bf_0026a810_x87 fp={f,fld,fmul,faddp,fstp};
    return bf_00269600_execute_combine_call(
        &mem,&fp,c,0x11112222u,0x33334444u,
        0x55556666u,0x77778888u,false);
}
static void cases(fixture*f){
    bf_00269600_call_contracts c=contract();
    CHECK(c.valid);
    CHECK(c.combine.entry_esp==ENTRY);
    CHECK(c.combine.post_return_esp==ENTRY+4u);
    CHECK(c.combine.args[0]==ENTRY+24u+0xfa8u);
    CHECK(c.combine.args[1]==ENTRY+24u+0xa90u);
    CHECK(c.combine.args[2]==ENTRY+24u+0x578u);
    for(unsigned m=0;m<3u;m++)for(unsigned n=0;n<4u;n++)
      for(unsigned k=0;k<5u;k++){
        setup(f,&c,m,n,k);
        const bf_00269600_combine_result r=perform(f,&c);
        CHECK(r.status==BF_00269600_COMBINE_OK);
        CHECK(r.after_return_esp==ENTRY+4u);
        CHECK(r.callee.next_eip==UINT32_C(0x2696e0));
        CHECK(r.callee.eax==c.combine.args[0]);
        CHECK(r.callee.products==m*n*k);
        CHECK(r.callee.copied_words==UINT32_C(0x146));
        CHECK(get(f,ENTRY)==UINT32_C(0x2696e0));
        CHECK(get(f,ENTRY+4u)==c.combine.args[0]);
        CHECK(get(f,ENTRY+8u)==c.combine.args[1]);
        CHECK(get(f,ENTRY+12u)==c.combine.args[2]);
        CHECK(get(f,c.combine.args[0]+0x144u*4u)==m);
        CHECK(get(f,c.combine.args[0]+0x145u*4u)==55u);
        for(unsigned row=0;row<m;row++)
          for(unsigned col=0;col<n;col++){
            long double sum=0;
            for(unsigned x=0;x<k;x++)
              sum+=(long double)(10u+row*10u+x)*(1u+col+x);
            CHECK(get(f,c.combine.args[0]+row*0x48u+4u*col)
                  ==bits((float)sum));
          }
      }
}
static void faults(fixture*f){
    bf_00269600_call_contracts c=contract();
    setup(f,&c,1u,1u,1u);
    f->fail_write=ENTRY+12u;
    bf_00269600_combine_result r=perform(f,&c);
    CHECK(r.status==BF_00269600_COMBINE_PUSH_FAULT);
    CHECK(r.fault_address==ENTRY+12u&&f->reads==0u);
    setup(f,&c,1u,1u,1u);
    f->fail_write=c.combine.args[0];
    r=perform(f,&c);
    CHECK(r.status==BF_00269600_COMBINE_CALLEE_FAULT);
    CHECK(r.fault_address==c.combine.args[0]);
    setup(f,&c,0u,0u,0u);
    c.combine.args[0]=ENTRY; /* genuine alias: output overwrites RET */
    r=perform(f,&c);
    CHECK(r.status==BF_00269600_COMBINE_RETURN_MISMATCH);
    CHECK(r.callee.next_eip!=UINT32_C(0x2696e0));
    c.valid=false;
    CHECK(perform(f,&c).status==BF_00269600_COMBINE_INVALID);
}
int main(void){
    fixture f={0};f.data=malloc(SIZE);CHECK(f.data);
    cases(&f);faults(&f);
    printf("PASS 00269600 original 26A810 CALL integration: %u assertions\n",checks);
    free(f.data);return 0;
}
