/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 633C649C970AF93F5BC0B316C53FBF1EB4635F720B2FEB28DFB62CA3429920A9
 * Entry: 0x00382218, Ghidra index: 13586, label: FUN_00382218
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00412723;
extern uint32_t DAT_00412754;
extern uint32_t DAT_00412770;
extern uint32_t DAT_00412798;
void FUN_00382218(int param_1,int param_2)

{
  DAT_00412723 = 0x81;
  if (param_1 < 0) {
    FUN_0038267d(0,param_2);
  }
  else {
    if (param_1 == 0x1000000) {
      *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 0x80;
    }
    DAT_00412798 = 2;
    KeSetTimer(&DAT_00412770,0xfffe7960,0xffffffff,&DAT_00412754);
  }
  return;
}
