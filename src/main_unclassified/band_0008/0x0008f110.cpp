/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AFCC530EE2006DA6719EEF12441676F8B49A29B610956B588F2F4C7161B548FB
 * Entry: 0x0008f110, Ghidra index: 1742, label: FUN_0008f110
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_002f254a(void);
extern void FUN_002f258a(void);
extern void FUN_00087810(int param_1,uint param_2,uint param_3);

void FUN_0008f110(uint param_1)

{
  uint in_EAX;
  uint uVar1;
  undefined4 *puVar2;
  int in_ECX;
  uint uVar3;
  undefined4 *puVar4;
  int unaff_EBX;
  int iVar5;
  undefined4 *puVar6;
  
  if (*(uint *)(in_ECX + 0x14) < param_1) {
    FUN_002f254a();
  }
  uVar1 = *(int *)(in_ECX + 0x14) - param_1;
  if (uVar1 < in_EAX) {
    in_EAX = uVar1;
  }
  if (-*(int *)(unaff_EBX + 0x14) - 1U <= in_EAX) {
    FUN_002f258a();
  }
  if (in_EAX != 0) {
    uVar1 = *(int *)(unaff_EBX + 0x14) + in_EAX;
    if (0x7ffffffe < uVar1) {
      FUN_002f258a();
    }
    if (*(uint *)(unaff_EBX + 0x18) < uVar1) {
      FUN_00087810(unaff_EBX,uVar1,*(undefined4 *)(unaff_EBX + 0x14));
    }
    else if (uVar1 == 0) {
      *(undefined4 *)(unaff_EBX + 0x14) = 0;
      if (*(uint *)(unaff_EBX + 0x18) < 8) {
        *(undefined2 *)(unaff_EBX + 4) = 0;
        return;
      }
      **(undefined2 **)(unaff_EBX + 4) = 0;
      return;
    }
    if (uVar1 != 0) {
      if (*(uint *)(in_ECX + 0x18) < 8) {
        iVar5 = in_ECX + 4;
      }
      else {
        iVar5 = *(int *)(in_ECX + 4);
      }
      puVar4 = (undefined4 *)(unaff_EBX + 4);
      puVar2 = puVar4;
      if (7 < *(uint *)(unaff_EBX + 0x18)) {
        puVar2 = (undefined4 *)*puVar4;
      }
      puVar6 = (undefined4 *)(iVar5 + param_1 * 2);
      puVar2 = (undefined4 *)((int)puVar2 + *(int *)(unaff_EBX + 0x14) * 2);
      for (uVar3 = (in_EAX & 0x7fffffff) >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar2 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar2 = puVar2 + 1;
      }
      for (uVar3 = in_EAX * 2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar2 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar2 = (undefined4 *)((int)puVar2 + 1);
      }
      *(uint *)(unaff_EBX + 0x14) = uVar1;
      if (7 < *(uint *)(unaff_EBX + 0x18)) {
        puVar4 = (undefined4 *)*puVar4;
      }
      *(undefined2 *)((int)puVar4 + uVar1 * 2) = 0;
    }
  }
  return;
}
