/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1163C6601D2709F35DAD55B73908487370C0A03AF0CAC46B67063122182CD245
 * Entry: 0x00250f60, Ghidra index: 8357, label: FUN_00250f60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00250f60(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_3 - param_1 >> 2;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_00251200(param_1);
    FUN_00251200(param_2 + iVar1 * -4);
    FUN_00251200(param_3 + iVar1 * -8);
    FUN_00251200(iVar1 * 4 + param_1);
    return;
  }
  FUN_00251200(param_1);
  return;
}
