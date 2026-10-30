/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 055795EBBFAE95466553C75C332F0FE4FE2AB277AB06DE54EFD87E75D3E7AD93
 * Entry: 0x00263cc0, Ghidra index: 8693, label: FUN_00263cc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00263cc0(int param_1,undefined4 param_2)

{
  int *unaff_EBX;
  int unaff_ESI;
  int iVar1;
  
  iVar1 = *(int *)(unaff_ESI + 4);
  if ((iVar1 == 0) || (*(int *)(unaff_ESI + 8) - iVar1 >> 3 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_1 - iVar1 >> 3;
  }
  FUN_00263ec0(param_1,param_2);
  *unaff_EBX = *(int *)(unaff_ESI + 4) + iVar1 * 8;
  return;
}
