/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8DD38A201F0603A11A86BC9B32CAFB7B38E18A29F9F677F8FE0B6669D53A5249
 * Entry: 0x00164a40, Ghidra index: 4684, label: FUN_00164a40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_00164a40(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *unaff_EBX;
  
  *param_1 = *unaff_EBX;
  param_1[1] = 0;
  FUN_000fdba0();
  puVar2 = param_1 + 2;
  iVar1 = 8 - (int)puVar2;
  iVar3 = 4;
  do {
    *puVar2 = *(undefined4 *)((int)unaff_EBX + iVar1 + (int)puVar2);
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return param_1;
}
