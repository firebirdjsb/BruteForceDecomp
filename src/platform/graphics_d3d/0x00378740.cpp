/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2FB7BB58F52A3BA102F6C77159F14E13E4A235ED88198DCC73C285BB50890494
 * Entry: 0x00378740, Ghidra index: 13473, label: FUN_00378740
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037bb60;
extern uint32_t DAT_0037df70;
extern uint32_t PTR_LAB_00378cc0;
undefined4 FUN_00378740(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x36c) != 0) {
    return param_2;
  }
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffeffbf;
  iVar1 = 0;
  if (DAT_0037df70 != 0) {
    iVar1 = 3;
  }
                    /* WARNING: Could not recover jumptable at 0x003787f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)(&PTR_LAB_00378cc0)[(&DAT_0037bb60)[iVar1 * 0x20] + -1])();
  return uVar2;
}
