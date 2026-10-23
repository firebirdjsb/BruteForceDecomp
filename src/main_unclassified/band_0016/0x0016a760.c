/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9E6865B517212A3157D9B97DB463AA4F7EBED08DEB10D07097184A4A7A9F3C21
 * Entry: 0x0016a760, Ghidra index: 4767, label: FUN_0016a760
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0016a760(int param_1)

{
  int iVar1;
  int *piVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  
  if (in_EAX == 0) {
    return 0;
  }
  iVar1 = *(int *)(in_EAX + 0x90);
  if (iVar1 != 0) {
    if ((*(int *)(param_1 + 0x1c) == 0) && (*(short *)(iVar1 + 0x162) != 0)) {
      iVar4 = 0;
      do {
        piVar2 = *(int **)(*(int *)(iVar1 + 0x164) + iVar4 * 4);
        iVar3 = (**(code **)(*piVar2 + 0x14))();
        if (iVar3 == 1000) {
          *(int **)(param_1 + 0x1c) = piVar2;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)(uint)*(ushort *)(iVar1 + 0x162));
    }
    if (*(int *)(param_1 + 0x1c) != 0) {
      FUN_002bd570();
      FUN_002be050(*(undefined4 *)(iVar1 + 0x170),iVar1);
      return 1;
    }
  }
  return 0;
}
