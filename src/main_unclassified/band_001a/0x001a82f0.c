/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 28B2D1222670178E7F86F517725648341CD93B00A4960249D81847AD159D2ADB
 * Entry: 0x001a82f0, Ghidra index: 5434, label: FUN_001a82f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001a82f0(undefined4 param_1)

{
  int in_EAX;
  int iVar1;
  
  if (*(int *)(in_EAX + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(int *)(in_EAX + 8) - *(int *)(in_EAX + 4)) / 0x30;
    if (iVar1 != 0) goto LAB_001a832e;
  }
  FUN_001ad6d0(param_1);
LAB_001a832e:
  FUN_001b3640(0);
  return iVar1 * 0x30 + *(int *)(in_EAX + 4);
}
