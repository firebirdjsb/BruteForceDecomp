/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3C775D7A25E3EDE6517498939561C3505A795BFD2FB5A40FCD54A00806F2BFA9
 * Entry: 0x000903b0, Ghidra index: 1765, label: FUN_000903b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_000903b0(int *param_1)

{
  int iVar1;
  int unaff_ESI;
  undefined4 local_4;
  
  local_4 = 0;
  iVar1 = (**(code **)(*param_1 + 0x90))(&local_4);
  if ((int)param_1 < iVar1) {
    return unaff_ESI + (int)param_1 * 0x18;
  }
  return 0;
}
