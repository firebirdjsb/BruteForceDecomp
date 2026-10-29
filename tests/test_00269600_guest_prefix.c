/* Cross-operation guest frame test; reuses original REP test memory fixture. */
#define main bf_00269600_previous_rep_main
#include "test_00269600_guest_rep.c"
#undef main
#include "bf_00269600_guest_prefix.h"

#define ORIGINAL_EBX UINT32_C(0x1234fedc)
#define ORIGINAL_ESI UINT32_C(0xabcd0123)
#define ORIGINAL_EDI UINT32_C(0xdeadbeef)
#define GUEST_COUNT UINT32_C(0x10)

static void verify_prefix(memory*m,uint32_t receiver,unsigned count,bool df) {
    seed(m,count);
    put(m,receiver+UINT32_C(0x514),(uint32_t)count);
    const bf_002ebea0_guest_mem io={m,rd,wr};
    const bf_00269600_prefix_inputs in={
        EBP,receiver,ORIGINAL_EBX,ORIGINAL_ESI,ORIGINAL_EDI,df
    };
    const bf_00269600_prefix_result r=bf_00269600_execute_prefix(&io,in);
    const uint32_t post_probe=EBP-UINT32_C(0x14b4);
    const uint32_t saved_esp=post_probe-UINT32_C(12);
    CHECK(r.status==BF_00269600_PREFIX_OK);
    CHECK(r.fault_address==0u);
    CHECK(r.probe.regs.next_eip==UINT32_C(0x00269610));
    CHECK(r.probe.regs.esp==post_probe);
    CHECK(r.esp==saved_esp-4u); /* 0x26963B PUSH EAX */
    CHECK(r.ebx==receiver && r.edx==count && r.ecx==0u);
    CHECK(r.eax==saved_esp+0x60u); /* 0x269637 LEA EAX */
    CHECK(get(m,saved_esp-4u)==saved_esp+0x60u);
    CHECK(r.copies.source_count==count);
    CHECK(r.esi==receiver+(df?-UINT32_C(0x518):UINT32_C(0x518)));
    CHECK(r.edi==saved_esp+UINT32_C(0x578)+(df?-UINT32_C(0x518):UINT32_C(0x518)));
    /* When DF=1, REP STOSD moves backward from post_probe+4.
     * The third DWORD is saved EBX; fourth/fifth reach ESI/EDI. */
    CHECK(get(m,post_probe-4u)==(df&&count>=3u ? 0u : ORIGINAL_EBX));
    CHECK(get(m,post_probe-8u)==(df&&count>=4u ? 0u : ORIGINAL_ESI));
    CHECK(get(m,post_probe-12u)==(df&&count>=5u ? 0u : ORIGINAL_EDI));
    /* Original MOV EDX,[EBX+0x514] is before the pushes.
     * All 326 source reads and writes are performed in REP order. */
    for(uint32_t i=0;i<UINT32_C(0x146);i++){
        const uint32_t displacement=df?(UINT32_C(0)-4u*i):4u*i;
        CHECK(get(m,saved_esp+UINT32_C(0x578)+displacement)==
              get(m,receiver+displacement));
    }
}
static void verify_alias(memory*m){
    const uint32_t receiver=EBP-UINT32_C(0x14b4)-8u-UINT32_C(0x514);
    seed(m,0u);
    /* Original EDX read before PUSH ESI observes 2, not ORIGINAL_ESI.
     * The subsequently saved ESI and copied data may overlap this word. */
    put(m,receiver+UINT32_C(0x514),2u);
    const bf_002ebea0_guest_mem io={m,rd,wr};
    const bf_00269600_prefix_inputs in={
        EBP,receiver,ORIGINAL_EBX,ORIGINAL_ESI,ORIGINAL_EDI,false
    };
    const bf_00269600_prefix_result r=bf_00269600_execute_prefix(&io,in);
    CHECK(r.status==BF_00269600_PREFIX_OK);
    CHECK(r.edx==2u&&r.copies.source_count==2u);
    CHECK(get(m,receiver+0x514u)==ORIGINAL_ESI);
    /* EDI for REP MOVSD was captured before PUSH EAX; the live ESP
     * is now four bytes lower, so the same destination is ESP+0x57C. */
    CHECK(get(m,r.esp+0x57cu+0x514u)==ORIGINAL_ESI);
}
static void verify_faults(memory*m){
    const bf_002ebea0_guest_mem io={m,rd,wr};
    const bf_00269600_prefix_inputs in={
        EBP,EBX,ORIGINAL_EBX,ORIGINAL_ESI,ORIGINAL_EDI,false
    };
    seed(m,3u);
    m->fail_write=1u;
    bf_00269600_prefix_result r=bf_00269600_execute_prefix(&io,in);
    CHECK(r.status==BF_00269600_PREFIX_CALL_WRITE_FAULT);
    CHECK(r.fault_address==EBP-4u);
    CHECK(m->reads==0u && m->writes==1u);
    seed(m,3u);
    m->fail_read=1u;
    r=bf_00269600_execute_prefix(&io,in);
    CHECK(r.status==BF_00269600_PREFIX_PROBE_FAULT);
    CHECK(r.fault_address==EBP-4u-UINT32_C(0x1000)+4u);
    /* 1 CALL push + 2 probe pushes + 3 saved-register pushes,
     * 1 count store + 3 STOSD writes = 10 completed writes.
     * The 11th write is precisely the missing 0x26963B PUSH EAX. */
    seed(m,3u);
    m->fail_write=11u;
    r=bf_00269600_execute_prefix(&io,in);
    CHECK(r.status==BF_00269600_PREFIX_PUSH_FAULT);
    CHECK(r.fault_address==(EBP-UINT32_C(0x14b4)-16u));
    CHECK(r.copies.repeat.words_completed==3u);
    seed(m,3u);
    /* Probe has multiple reads; inject error at original count read
     * by recognizing the guest address instead of a guessed read number. */
    CHECK(bf_00269600_execute_prefix(NULL,in).status==BF_00269600_PREFIX_INVALID);
}
int main(void){
    memory m={0};m.data=malloc(SIZE);CHECK(m.data);
    for(unsigned count=0u;count<=16u;++count)verify_prefix(&m,EBX,count,false);
    verify_prefix(&m,EBX,UINT32_C(0x146),false);
    verify_prefix(&m,EBX,3u,true);
    verify_alias(&m);
    verify_faults(&m);
    printf("PASS complete 00269600 CALL-to-REP guest prefix: %u assertions\n",checks);
    free(m.data);return 0;
}
