/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AC6F7D5740122A99DA800A1CCD653D3CC490655095551FD31EF83A91A0575D99
 * Entry: 0x00235c00, Ghidra index: 7821, label: FUN_00235c00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00235c00(void)

{
  undefined4 *puVar1;
  int iVar2;
  int unaff_EBX;
  undefined4 *puVar3;
  
  if (*(int *)(unaff_EBX + 0x10) == 0) {
    puVar1 = (undefined4 *)FUN_002ea01d(0x68);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      puVar1[0xf] = 0;
      puVar1[0x10] = 0;
      puVar1[0x11] = 0;
      puVar3 = puVar1;
      for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      puVar3 = puVar1 + 0x12;
      for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      puVar1[0x19] = 0;
      puVar1[0x15] = 0x3f800000;
      *(undefined4 **)(unaff_EBX + 0x10) = puVar1;
      FUN_00235c70();
      return;
    }
    *(undefined4 *)(unaff_EBX + 0x10) = 0;
  }
  FUN_00235c70();
  return;
}
