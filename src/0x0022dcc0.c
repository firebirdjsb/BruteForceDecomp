/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2EF1B059A28D41DBA5DF2D96683781EDC0831543C67E142E9E1C74EF45457395
 * Entry: 0x0022dcc0, Ghidra index: 7716, label: FUN_0022dcc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_0022dcc0(void)

{
  int in_EAX;
  int iVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  
  uVar2 = *(uint *)(in_EAX + 0x184);
  if (uVar2 == 0) {
    iVar1 = *(int *)(in_EAX + 0x1b0);
    uVar2 = 0;
    if (iVar1 == 0) goto LAB_0022dd63;
    if (*(int *)(iVar1 + 8) == 0) {
      if ((*(int *)(iVar1 + 0x10) == 0) ||
         (iVar1 = *(int *)(*(int *)(iVar1 + 0x10) + 0xb0), *(int *)(*(int *)(iVar1 + 0xc) + 4) != 3)
         ) {
        iVar1 = 0;
      }
    }
    else {
      iVar1 = *(int *)(*(int *)(iVar1 + 8) + 0x1d4);
    }
    uVar2 = (**(code **)(**(int **)(*(int *)(iVar1 + 8) + 0xbec) + 0xc))(iVar1);
    uVar5 = uVar2;
  }
  else {
    uVar5 = *(uint *)(uVar2 + 0x1c);
  }
  if (uVar5 != 0) {
    iVar1 = *(int *)(*(int *)(in_EAX + 8) + 0xbf0);
    uVar2 = FUN_0008b790();
    if (uVar2 != 0) {
      iVar3 = 0;
      puVar4 = (uint *)(iVar1 + 0x38);
      do {
        if (*puVar4 == uVar2) {
          uVar2 = FUN_0008b880();
          return uVar2;
        }
        iVar3 = iVar3 + 1;
        puVar4 = puVar4 + 2;
      } while (iVar3 < 7);
    }
    return uVar2 & 0xffffff00;
  }
LAB_0022dd63:
  return uVar2 & 0xffffff00;
}
