#define main bf_previous_prefix_tests_main
#include "test_00269600_guest_prefix.c"
#undef main
#include "bf_00269600_downstream_calls.h"

static void verify_three_calls(memory *m,unsigned count,bool df) {
    seed(m,count);
    const bf_002ebea0_guest_mem io={m,rd,wr};
    const bf_00269600_prefix_inputs in={
        EBP,EBX,ORIGINAL_EBX,ORIGINAL_ESI,ORIGINAL_EDI,df
    };
    const bf_00269600_prefix_result prefix=bf_00269600_execute_prefix(&io,in);
    CHECK(prefix.status==BF_00269600_PREFIX_OK);
    const bf_00269600_call_contracts c=bf_00269600_bind_original_downstream(prefix);
    CHECK(c.valid);
    const uint32_t S=EBP-UINT32_C(0x14b4)-UINT32_C(12);
    CHECK(prefix.esp==S-4u);
    CHECK(c.post_probe_stack_esp==S);
    CHECK(c.transform.target_va==UINT32_C(0x269870));
    CHECK(c.transform.return_eip==UINT32_C(0x26965f));
    CHECK(c.transform.entry_esp==S-20u);
    CHECK(c.transform.post_return_esp==S);
    CHECK(c.transform.argument_count==4u&&c.transform.known_reg_mask==15u);
    CHECK(c.transform.args[0]==EBX);
    CHECK(c.transform.args[1]==S+0x578u);
    CHECK(c.transform.args[2]==S+0x10u);
    CHECK(c.transform.args[3]==S+0x60u);
    CHECK(c.transform.ebx==EBX&&c.transform.ecx==S+0x10u);
    CHECK(c.transform.edx==S+0x578u&&c.transform.eax==S+0x60u);
    CHECK(c.scale.target_va==UINT32_C(0x26a780));
    CHECK(c.scale.return_eip==UINT32_C(0x2696c3));
    CHECK(c.scale.entry_esp==S-12u);
    CHECK(c.scale.post_return_esp==S-8u);
    CHECK(c.scale.argument_count==2u && c.scale.known_reg_mask==11u);
    CHECK(c.scale.args[0]==S+0xa90u);
    CHECK(c.scale.args[1]==S+0x60u);
    CHECK(c.scale.ebx==S+0x10u&&c.scale.ecx==S+0xa90u);
    CHECK(c.scale.eax==S+0x60u);
    CHECK(c.combine.target_va==UINT32_C(0x26a810));
    CHECK(c.combine.return_eip==UINT32_C(0x2696e0));
    CHECK(c.combine.entry_esp==S-24u);
    CHECK(c.combine.post_return_esp==S-20u);
    CHECK(c.combine.argument_count==3u && c.combine.known_reg_mask==15u);
    CHECK(c.combine.args[0]==S+0xfa8u);
    CHECK(c.combine.args[1]==S+0xa90u);
    CHECK(c.combine.args[2]==S+0x578u);
    CHECK(c.combine.ebx==S+0x10u);
    CHECK(c.combine.ecx==S+0xfa8u);
    CHECK(c.combine.edx==S+0x578u);
    CHECK(c.combine.eax==S+0xa90u);
    CHECK(c.after_caller_add_esp_14==S);
    CHECK(c.output_dword_count==0x146u);
}
int main(void) {
    memory m={0};m.data=malloc(SIZE);CHECK(m.data);
    for(unsigned n=0;n<=16u;n++)verify_three_calls(&m,n,false);
    verify_three_calls(&m,0x146u,false);
    verify_three_calls(&m,3u,true);
    bf_00269600_prefix_result invalid={0};
    CHECK(!bf_00269600_bind_original_downstream(invalid).valid);
    printf("PASS 00269600 three original downstream caller boundaries: %u assertions\n",checks);
    free(m.data);return 0;
}
