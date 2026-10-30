/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 89211A8D94A495F4DD7D76A4F74991BDAE7B9B4EC310D25A5E9083ACC2A44976
 * Entry: 0x000cfbd0, Ghidra index: 2565, label: FUN_000cfbd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000cfcc0(undefined4 *param_1,float *param_2);

void FUN_000cfbd0(int param_1,undefined4 param_2)

{
  int in_EAX;
  int iVar1;
  int unaff_EDI;
  
  iVar1 = param_1 - in_EAX >> 2;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_000cfcc0(iVar1 * 8 + in_EAX,param_2);
    FUN_000cfcc0(iVar1 * 4 + unaff_EDI,param_2);
    FUN_000cfcc0(param_1,param_2);
    FUN_000cfcc0(param_1 + iVar1 * -4,param_2);
    return;
  }
  FUN_000cfcc0(param_1,param_2);
  return;
}
