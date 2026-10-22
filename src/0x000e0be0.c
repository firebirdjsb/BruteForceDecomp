/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 961C44D1D1545C6FC43A3CEBA7A7B7ED5863E703E70F700AD8C2F260AA5171B1
 * Entry: 0x000e0be0, Ghidra index: 2757, label: FUN_000e0be0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_000e0be0(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int unaff_EDI;
  
  iVar1 = *(int *)(unaff_EDI + 4);
  if (iVar1 != 0) {
    if ((*(int *)(unaff_EDI + 8) - iVar1) / 0x1c != 0) {
      iVar1 = (param_2 - iVar1) / 0x1c;
      goto LAB_000e0c2d;
    }
  }
  iVar1 = 0;
LAB_000e0c2d:
  FUN_000e15d0(unaff_EDI,param_2,1,param_3);
  *param_1 = iVar1 * 0x1c + *(int *)(unaff_EDI + 4);
  return param_1;
}
