/* Verify the 2696AD..2696C3 real guest PUSH/CALL handoff into 26A780.
 * Reuse bounded isolated x87 fixture without claiming Xbox FPU parity. */
#define main bf_previous_scale_test_main
#include "test_0026a780_guest_scale.c"
#undef main
#include "bf_00269600_scale_call.h"

static bf_00269600_call_contracts contract(void){
    bf_00269600_prefix_result p={0};
    p.status=BF_00269600_PREFIX_OK;
    p.continuation_eip=UINT32_C(0x00269610);
    p.probe.regs.next_eip=UINT32_C(0x00269610);
    p.esp=ENTRY+8u;
    p.ebx=ENTRY+12u+0x10u;
    return bf_00269600_bind_original_downstream(p);
}
static void setup(fixture*f,unsigned rows,unsigned cols){
    seed(f,0,0,OUTPUT);
    const uint32_t S=ENTRY+12u;
    const uint32_t obj=S+0x60u;
    const uint32_t wg=S+0x10u;
    put(f,obj+0x510u,rows);
    put(f,obj+0x514u,cols);
    for(unsigned i=0;i<cols;i++)put(f,wg+i*4u,bits((float)(i+1u)));
    for(unsigned row=0;row<rows;row++)
        for(unsigned i=0;i<cols;i++)
            put(f,obj+row*0x48u+i*4u,bits((float)(row*10u+10u+i)));
}
static bf_00269600_scale_call_result call(fixture*f,
                                          bf_00269600_call_contracts *c){
    const bf_0026a780_guest_io mem={f,read32,write32};
    const bf_0026a780_x87_ops fpu={f,fld,mul,pop};
    return bf_00269600_execute_scale_call(&mem,&fpu,c,
        UINT32_C(0xabcddcba),UINT32_C(0x11223344),
        UINT32_C(0x88776655),false);
}
static void examples(fixture*f){
    const uint32_t S=ENTRY+12u;
    bf_00269600_call_contracts c=contract();
    CHECK(c.valid&&c.scale.entry_esp==ENTRY);
    CHECK(c.scale.args[0]==S+0xa90u&&c.scale.args[1]==S+0x60u);
    CHECK(c.scale.ebx==S+0x10u);
    for(unsigned rows=0;rows<=3u;rows++)for(unsigned cols=0;cols<=4u;cols++){
        setup(f,rows,cols);
        const bf_00269600_scale_call_result r=call(f,&c);
        CHECK(r.status==BF_00269600_SCALE_OK);
        CHECK(r.after_return_esp==S-8u);
        CHECK(r.callee.next_eip==UINT32_C(0x002696c3));
        CHECK(r.callee.final_esp==S-8u);
        CHECK(r.callee.float_products==rows*cols);
        CHECK(r.callee.words_copied==UINT32_C(0x146));
        CHECK(get(f,ENTRY)==UINT32_C(0x002696c3));
        CHECK(get(f,ENTRY+4u)==c.scale.args[0]);
        CHECK(get(f,ENTRY+8u)==c.scale.args[1]);
        CHECK(get(f,c.scale.args[0]+0x144u*4u)==rows);
        CHECK(get(f,c.scale.args[0]+0x145u*4u)==cols);
        for(unsigned row=0;row<rows;row++)
            for(unsigned i=0;i<cols;i++){
                float expect=(float)(row*10u+10u+i)*(float)(i+1u);
                CHECK(get(f,c.scale.args[0]+row*0x48u+i*4u)==bits(expect));
            }
    }
}
static void faults(fixture*f){
    bf_00269600_call_contracts c=contract();
    setup(f,1,1);
    f->fail_write=ENTRY+8u;
    bf_00269600_scale_call_result r=call(f,&c);
    CHECK(r.status==BF_00269600_SCALE_PUSH_FAULT);
    CHECK(r.fault_guest_va==ENTRY+8u);
    CHECK(f->reads==0u);
    setup(f,1,1);f->fail_read=c.scale.args[1]+0x510u;
    r=call(f,&c);
    CHECK(r.status==BF_00269600_SCALE_CALLEE_FAULT);
    CHECK(r.callee.status==BF_0026A780_READ_FAULT);
    CHECK(r.fault_guest_va==c.scale.args[1]+0x510u);
    setup(f,0,0);
    c.scale.args[0]=ENTRY; /* output overlaps original CALL return slot */
    r=call(f,&c);
    CHECK(r.status==BF_00269600_SCALE_RETURN_MISMATCH);
    CHECK(r.callee.next_eip!=UINT32_C(0x002696c3));
    c.valid=false;
    CHECK(call(f,&c).status==BF_00269600_SCALE_INVALID);
}
int main(void){
    fixture f={0};f.bytes=malloc(SIZE);CHECK(f.bytes);
    examples(&f);faults(&f);
    printf("PASS 00269600 original 26A780 scale call boundary: %u assertions\n",checks);
    free(f.bytes);
    return 0;
}
