/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9087AA9A15CC57D1B63BDA7F1297B901CE06E1F9AE1AD3BF98F36FAB4A6A8469
 * Entry: 0x00336922, Ghidra index: 12457, label: FUN_00336922
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-draft declaration only; Xbox x86 guest ABI_UNVERIFIED. */
extern undefined4 FUN_0033633a(uint param_1,uint param_2);
void FUN_00336922(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(ushort *)(param_1 + 0xc) != 0) {
    piVar1 = (int *)(param_1 + 0x30);
    do {
      if ((*piVar1 == param_2) && (piVar1[1] == param_3)) {
        iVar2 = uVar3 * 0x74 + param_1;
        *(byte *)(iVar2 + 0x4f) = *(byte *)(iVar2 + 0x4f) | 8;
        *(undefined4 *)(iVar2 + 0x50) = param_7;
        *(undefined4 *)(iVar2 + 0x54) = param_8;
        *(undefined4 *)(iVar2 + 0x60) = param_4;
        *(undefined4 *)(iVar2 + 0x58) = param_5;
        *(undefined4 *)(iVar2 + 0x5c) = param_6;
        *(undefined4 *)(iVar2 + 0x98) = param_5;
        *(undefined4 *)(iVar2 + 0x9c) = param_6;
        FUN_0033633a(param_1,uVar3);
        return;
      }
      uVar3 = uVar3 + 1;
      piVar1 = piVar1 + 0x1d;
    } while (uVar3 < *(ushort *)(param_1 + 0xc));
  }
  return;
}
