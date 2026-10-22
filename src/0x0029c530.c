/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 09E03595EA8D8C9271EDD8FE79625EADAAADAC47050CC460EAF7E6655376B746
 * Entry: 0x0029c530, Ghidra index: 9440, label: FUN_0029c530
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_0029c530(undefined4 *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *unaff_EBX;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  do {
    if (param_2 == 0) {
      return 0;
    }
    if (*unaff_EBX == 0) {
      iVar1 = (*(code *)unaff_EBX[2])();
      if (iVar1 == -1) {
        return param_2;
      }
      *unaff_EBX = *unaff_EBX + 1;
      unaff_EBX[1] = unaff_EBX[1] - 1;
    }
    uVar2 = *unaff_EBX;
    if ((int)param_2 <= (int)*unaff_EBX) {
      uVar2 = param_2;
    }
    puVar4 = (undefined4 *)unaff_EBX[1];
    puVar5 = param_1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    for (uVar3 = uVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    param_1 = (undefined4 *)((int)param_1 + uVar2);
    param_2 = param_2 - uVar2;
    *unaff_EBX = *unaff_EBX - uVar2;
    unaff_EBX[1] = unaff_EBX[1] + uVar2;
  } while( true );
}
