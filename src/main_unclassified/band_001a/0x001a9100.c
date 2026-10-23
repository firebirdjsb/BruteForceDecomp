/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C96716C20DC4BC8924E82D7D6086CCD31A132E2B103087E0CA3FFE0004C3A4FA
 * Entry: 0x001a9100, Ghidra index: 5456, label: FUN_001a9100
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001a9100(undefined4 param_1)

{
  int in_EAX;
  int iVar1;
  
  if (*(int *)(in_EAX + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(int *)(in_EAX + 8) - *(int *)(in_EAX + 4)) / 0x24;
    if (iVar1 != 0) goto LAB_001a913e;
  }
  FUN_001afaa0(param_1);
LAB_001a913e:
  FUN_001b4cd0();
  return *(int *)(in_EAX + 4) + iVar1 * 0x24;
}
