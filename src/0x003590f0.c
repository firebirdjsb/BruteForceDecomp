/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DE478185A049035A7A980CAB0ECF0ECD91EE93C5C780F1A263CAAC3997FF7EE3
 * Entry: 0x003590f0, Ghidra index: 13164, label: FUN_003590f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_003590f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  int iVar2;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x2f8) != 0)) {
    iVar2 = FUN_003590b0();
    if (iVar2 != -1) {
      iVar2 = iVar2 * 0x178 + *(int *)(param_1 + 0x300);
      pcVar1 = *(code **)(iVar2 + 0x20);
      if (pcVar1 != (code *)0x0) {
        (*pcVar1)(iVar2,param_3,param_4);
      }
    }
  }
  return;
}
