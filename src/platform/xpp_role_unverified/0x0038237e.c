/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2E5E3A9D033EC88CA6C2A0FC9D12EFC57D8597C9A0C3560A731F86594F436ADA
 * Entry: 0x0038237e, Ghidra index: 13592, label: thunk_FUN_00382218
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
void thunk_FUN_00382218(int param_1,int param_2)

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
