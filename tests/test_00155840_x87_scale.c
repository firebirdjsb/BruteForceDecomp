/* 0x00155BDD..0x00155C1B original adjacent scale/add frame operations.
 * Synthetic long-double arithmetic only; no original Xbox x87 environment,
 * branch gating, or guest fault restart claim.
 */
#define main bf_00155840_existing_test_main
#include "test_00155840_x87_call_bridge.c"
#undef main
#include "bf_00155840_frame_x87_scale.h"

static void setup(mem_model *m, fp_model *f, float input[3],
                  float vector[3], float scale, float advance)
{
    const float unused_matrix[12]={0};
    seed(m,(float *)unused_matrix,input);
    memset(f,0,sizeof *f);
    put(m,EBP-0x0cu,bits(scale));
    put(m,EBP-0x04u,bits(advance));
    for(unsigned i=0;i<3;i++)
        put(m,EBP-0x2cu+4u*i,bits(vector[i]));
}

static void check_combined(void)
{
    mem_model m;
    fp_model f={0};
    const bf_621c0_guest_words guest={&m,rd,wr};
    const bf_621c0_x87_operations x87={&f,fld,mul,addp,add,pop};
    uint32_t fault=UINT32_MAX;
    for(unsigned n=1;n<=1024;n++){
        float input[3],vector[3];
        const float scale=(float)((int)(n%19u)-9)*0.125f;
        const float advance=(float)((int)(n%17u)-8)*0.125f;
        for(unsigned i=0;i<3;i++){
            input[i]=(float)((int)((n+11u*i)%37u)-18)*0.0625f;
            vector[i]=(float)((int)((n+7u*i)%29u)-14)*0.0625f;
        }
        setup(&m,&f,input,vector,scale,advance);
        CHECK(bf_00155840_x87_scale_then_add(&guest,&x87,EBP,&fault)==BF_621C0_OK);
        CHECK(fault==0&&f.depth==0&&m.rn==15&&m.wn==6);
        CHECK(f.instructions==21);
        CHECK(memcmp(f.ops,"LMSLMSLMSLMASLMASLMAS",21)==0);
        for(unsigned i=0;i<3;i++){
            const uint32_t v=EBP-0x2cu+4u*i;
            const uint32_t p=EBP-0x68u+4u*i;
            const float scaled=(float)((long double)scale*(long double)vector[i]);
            const float expected=(float)((long double)scaled*(long double)advance+
                                         (long double)input[i]);
            CHECK(get(&m,v)==bits(scaled));
            CHECK(get(&m,p)==bits(expected));
            CHECK(m.wa[i]==v&&m.wa[i+3]==p);
            CHECK(m.ra[2*i]==EBP-0x0cu&&m.ra[2*i+1]==v);
            CHECK(m.ra[6+3*i]==v);
            CHECK(m.ra[6+3*i+1]==EBP-0x04u);
            CHECK(m.ra[6+3*i+2]==p);
        }
    }
}

static void check_faults(void)
{
    mem_model m;
    fp_model f={0};
    float input[3]={1.f,2.f,3.f};
    float vector[3]={4.f,5.f,6.f};
    const bf_621c0_guest_words guest={&m,rd,wr};
    const bf_621c0_x87_operations x87={&f,fld,mul,addp,add,pop};
    uint32_t fault=0;
    const uint32_t stores[6]={EBP-0x2cu,EBP-0x28u,EBP-0x24u,
                               EBP-0x68u,EBP-0x64u,EBP-0x60u};
    for(unsigned fail=1;fail<=6;fail++){
        setup(&m,&f,input,vector,2.f,0.5f);
        m.fail_write=fail;
        CHECK(bf_00155840_x87_scale_then_add(&guest,&x87,EBP,&fault)
              ==BF_621C0_GUEST_WRITE_FAILED);
        CHECK(fault==stores[fail-1]&&m.wn==fail);
    }
    setup(&m,&f,input,vector,2.f,0.5f);
    CHECK(bf_00155840_x87_scale_then_add(NULL,&x87,EBP,&fault)
          ==BF_621C0_INVALID_INTERFACE);
    CHECK(bf_00155840_x87_scale_then_add(&guest,NULL,EBP,&fault)
          ==BF_621C0_INVALID_INTERFACE);
    CHECK(bf_00155840_x87_scale_direction(&guest,&x87,0u,&fault)
          ==BF_621C0_GUEST_READ_FAILED);
    CHECK(fault==UINT32_C(0xfffffff4));
    setup(&m,&f,input,vector,2.f,0.5f);
    f.depth=8;
    CHECK(bf_00155840_x87_scale_then_add(&guest,&x87,EBP,&fault)
          ==BF_621C0_X87_BACKEND_FAILED);
    CHECK(m.wn==0);
}

int main(void)
{
    check_combined();
    check_faults();
    printf("PASS original 00155BDD scale/add guest operations: %u assertions\n",checks);
    return 0;
}
