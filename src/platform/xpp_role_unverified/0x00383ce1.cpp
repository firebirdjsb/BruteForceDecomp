/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 01FBBD0CD6E7C5F34816F2C47D6AD09AEC2660073B9CB6C64F2FD0C7FFE32042
 * Entry: 0x00383ce1, Ghidra index: 13634, label: FUN_00383ce1
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00412870;
extern uint32_t DAT_00412898;
extern uint32_t DAT_004128b4;
extern uint32_t DAT_004128b8;
void FUN_00383ce1(int param_1)

{
  undefined4 uVar1;
  
  if (DAT_004128b8 != 0) {
    KeCancelTimer(&DAT_00412870);
    FUN_00383c3a(DAT_004128b8,0);
    DAT_004128b8 = 0;
  }
  if (param_1 == 0) {
    uVar1 = 0xfa0a1f00;
  }
  else {
    uVar1 = 0xfff48e50;
    if (param_1 != 3) {
      uVar1 = 0xffb3b4c0;
    }
  }
  DAT_004128b4 = param_1;
  KeSetTimer(&DAT_00412870,uVar1,0xffffffff,&DAT_00412898);
  return;
}
