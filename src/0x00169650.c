/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 17E8FB38A635D022B25C28EA49E3D30C85D4C065F8765D3EA5E8315E6DAC36C2
 * Entry: 0x00169650, Ghidra index: 4751, label: FUN_00169650
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined1 FUN_00169650(void)

{
  int *piVar1;
  int iVar2;
  undefined1 uVar3;
  char cVar4;
  int in_EAX;
  int iVar5;
  
  piVar1 = *(int **)(in_EAX + 4);
  iVar2 = *(int *)(piVar1[3] + 4);
  if (iVar2 == 2) {
    return 0;
  }
  if (iVar2 == 0x1a) {
    return 0;
  }
  if (iVar2 == 0x1f) {
    return 0;
  }
  if (iVar2 != 0x16) {
    iVar2 = piVar1[0x1b];
    if ((iVar2 != 0) && (iVar2 != -1)) {
      iVar5 = iVar2;
      if (*(int *)(iVar2 + 0x10) != 0) {
        iVar5 = *(int *)(iVar2 + 8);
      }
      if (((iVar5 != 0) && (iVar5 != -1)) && (iVar5 != iVar2)) {
        if (*(int *)(iVar5 + 0x5c) == 0) {
          return 0;
        }
        if (*(int *)(*(int *)(*(int *)(iVar5 + 0x5c) + 0xc) + 4) == 3) {
          uVar3 = (**(code **)(*piVar1 + 0xd8))();
          return uVar3;
        }
        cVar4 = FUN_001546b0();
        if (cVar4 != '\0') {
          return 0;
        }
      }
    }
    return 1;
  }
  return 0;
}
