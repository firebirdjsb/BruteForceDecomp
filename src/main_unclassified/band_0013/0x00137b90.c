/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D0CB46765C38A8FA04C41FBC1D60D3312D6AC2CD86E0758B009F52B6FCD80157
 * Entry: 0x00137b90, Ghidra index: 3914, label: FUN_00137b90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00137b90(int param_1,undefined4 param_2)

{
  int *unaff_EBX;
  int iVar1;
  int unaff_EDI;
  
  iVar1 = *(int *)(unaff_EDI + 4);
  if ((iVar1 == 0) || (*(int *)(unaff_EDI + 8) - iVar1 >> 4 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_1 - iVar1 >> 4;
  }
  FUN_00137ec0(param_1,param_2);
  *unaff_EBX = iVar1 * 0x10 + *(int *)(unaff_EDI + 4);
  return;
}
