/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 934FF93B661D27E0188DEE355A0F25071509C0E0BC72C52895C07A3E43FCE12C
 * Entry: 0x002adcb0, Ghidra index: 9701, label: FUN_002adcb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002adcb0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00307640;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x10) {
    FUN_002adc80(param_4);
    param_3 = param_3 + 0x10;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}
