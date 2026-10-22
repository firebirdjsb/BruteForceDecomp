/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9F1D1146C5322EE9DC93D16DE0F924342BC57FB9C9D7B3DC8E98D64B5171FE38
 * Entry: 0x000fe630, Ghidra index: 3184, label: FUN_000fe630
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_000fe630(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_EDX;
  undefined4 *puVar4;
  int unaff_EBX;
  int iVar5;
  int iVar6;
  
  puVar3 = *(undefined4 **)(in_EDX + 8);
  iVar6 = 0;
  iVar2 = 0;
  iVar5 = 0;
  puVar4 = (undefined4 *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)*puVar3;
  }
  if (puVar3 != puVar4) {
    do {
      puVar3 = (undefined4 *)puVar3[1];
      iVar1 = puVar3[2];
      if (*(int *)(iVar1 + 0x60) == unaff_EBX) {
        if (iVar5 == 0) {
          iVar5 = iVar1;
        }
        if ((iVar2 == 0) && ((*(byte *)(iVar1 + 0x65) & 8) != 0)) {
          iVar2 = iVar1;
        }
        if ((iVar6 == 0) && (*(int *)(iVar1 + 0x24) == -0x20e7933)) {
          iVar6 = iVar1;
        }
      }
    } while (puVar3 != puVar4);
    if (iVar6 != 0) {
      return iVar6;
    }
    if (iVar2 != 0) {
      return iVar2;
    }
  }
  return iVar5;
}
