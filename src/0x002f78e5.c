/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B887C29460A9ACAB5CFD104044C36C35ABBE57F02424B11C5CC4D501AF0CA835
 * Entry: 0x002f78e5, Ghidra index: 10932, label: FUN_002f78e5
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002f78e5(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_002f783f(param_1);
  if (iVar1 == -1) {
    uVar2 = 0;
  }
  else {
    uVar2 = XAPILIB__XLoadSectionByHandle(iVar1);
  }
  return uVar2;
}
