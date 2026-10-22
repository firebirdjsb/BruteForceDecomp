/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 405024FF24CBF9CB4AF525973091FDF5C6C2894C7326FB063785CA086780AA4F
 * Entry: 0x0034ddfb, Ghidra index: 13014, label: FUN_0034ddfb
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0034ddfb(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined2 *puVar4;
  int in_ECX;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  uVar5 = 0;
  piVar2 = (int *)(in_ECX + 0x8d8);
  do {
    if (*piVar2 == 0) break;
    uVar5 = uVar5 + 1;
    piVar2 = piVar2 + 1;
  } while (uVar5 < 4);
  if (uVar5 == 0) {
    FUN_0034dd57(param_1,0x2af9);
  }
  else {
    uVar1 = *(undefined4 *)(in_ECX + 0x8d8 + ((uint)*(byte *)(param_1 + 0x18) % uVar5) * 4);
    uVar5 = FUN_0034dcf3();
    iVar3 = FUN_0034cb5a(0x7554454e,0x10040003,uVar5 + 0x10,0,0,0);
    if (iVar3 != 0) {
      puVar4 = (undefined2 *)FUN_0034c855();
      *puVar4 = 0xe804;
      puVar4[1] = 0x3500;
      *(undefined4 *)(puVar4 + 4) = 0;
      *(undefined4 *)(puVar4 + 6) = 0;
      *(undefined4 *)(puVar4 + 8) = 0;
      puVar4[4] = *(undefined2 *)(param_1 + 0x1a);
      puVar4[5] = 1;
      puVar4[6] = 0x100;
      puVar7 = *(undefined4 **)(param_1 + 0x14);
      puVar8 = (undefined4 *)(puVar4 + 10);
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      puVar4 = (undefined2 *)((int)(puVar4 + 10) + uVar5);
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      *puVar4 = 0x100;
      puVar4[1] = 0x100;
      FUN_0034c3bf(param_1 + 4,(uint)*(byte *)(in_ECX + 0x3d) * 5);
      FUN_0034a7ce(iVar3,uVar1,0x11,0);
    }
  }
  return;
}
