/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B12CE91F6490E35CDFF70374769BDAD590DC3A211E3FE86B246DEF7B6A8A4AA1
 * Entry: 0x00223160, Ghidra index: 7601, label: FUN_00223160
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00223160(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int *unaff_ESI;
  int unaff_EDI;
  undefined1 local_60 [4];
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  
  FUN_00222f60();
  local_58 = param_1;
  local_5c = param_2;
  if (((unaff_EDI != 0) && (*(int *)(unaff_EDI + 0x184) == 0)) &&
     (*(int *)(*(int *)(unaff_EDI + 0xc) + 4) == 3)) {
    (**(code **)(**(int **)(*(int *)(unaff_EDI + 8) + 0xbec) + 0xc))();
  }
  local_54 = 0;
  uStack_50 = (**(code **)(*unaff_ESI + 4))();
  iVar1 = (**(code **)(*unaff_ESI + 4))();
  if (iVar1 != 0) {
    piVar2 = (int *)(**(code **)(*unaff_ESI + 4))();
    (**(code **)(*piVar2 + 0x40))();
  }
  (**(code **)*unaff_ESI)(local_60);
  return;
}
