/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2C0694F8BAE3C0A7E213BAF173C83577A2A91A3582CED63592CA1EA4547044E3
 * Entry: 0x001eb4b0, Ghidra index: 6880, label: FUN_001eb4b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001eb4b0(uint param_1,int param_2,uint param_3)

{
  uint in_EAX;
  uint uVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int unaff_EBX;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  if ((*(uint *)(unaff_EBX + 0x14) < param_1) || (*(uint *)(param_2 + 0x14) < param_3)) {
    FUN_002f254a();
  }
  uVar1 = *(int *)(param_2 + 0x14) - param_3;
  if (uVar1 < in_EAX) {
    in_EAX = uVar1;
  }
  if (-*(int *)(unaff_EBX + 0x14) - 1U <= in_EAX) {
    FUN_002f258a();
  }
  if (in_EAX != 0) {
    uVar1 = *(int *)(unaff_EBX + 0x14) + in_EAX;
    if (uVar1 == 0xffffffff) {
      FUN_002f258a();
    }
    if (*(uint *)(unaff_EBX + 0x18) < uVar1) {
      FUN_0001f730(uVar1,*(undefined4 *)(unaff_EBX + 0x14));
    }
    else if (uVar1 == 0) {
      *(undefined4 *)(unaff_EBX + 0x14) = 0;
      if (0xf < *(uint *)(unaff_EBX + 0x18)) {
        **(undefined1 **)(unaff_EBX + 4) = 0;
        return;
      }
      *(undefined1 *)(unaff_EBX + 4) = 0;
      return;
    }
    if (uVar1 != 0) {
      piVar5 = (int *)(unaff_EBX + 4);
      piVar2 = piVar5;
      piVar3 = piVar5;
      if (0xf < *(uint *)(unaff_EBX + 0x18)) {
        piVar2 = (int *)*piVar5;
        piVar3 = (int *)*piVar5;
      }
      _memmove((void *)((int)piVar2 + in_EAX + param_1),(void *)((int)piVar3 + param_1),
               *(int *)(unaff_EBX + 0x14) - param_1);
      if (unaff_EBX == param_2) {
        if (param_1 < param_3) {
          param_3 = param_3 + in_EAX;
        }
        if (*(uint *)(unaff_EBX + 0x18) < 0x10) {
          _memmove((void *)((int)piVar5 + param_1),(void *)((int)piVar5 + param_3),in_EAX);
        }
        else {
          _memmove((void *)(*piVar5 + param_1),(void *)(*piVar5 + param_3),in_EAX);
        }
      }
      else {
        if (*(uint *)(param_2 + 0x18) < 0x10) {
          param_2 = param_2 + 4;
        }
        else {
          param_2 = *(int *)(param_2 + 4);
        }
        piVar3 = piVar5;
        if (0xf < *(uint *)(unaff_EBX + 0x18)) {
          piVar3 = (int *)*piVar5;
        }
        puVar6 = (undefined4 *)(param_3 + param_2);
        puVar7 = (undefined4 *)(param_1 + (int)piVar3);
        for (uVar4 = in_EAX >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        for (uVar4 = in_EAX & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        }
      }
      *(uint *)(unaff_EBX + 0x14) = uVar1;
      if (0xf < *(uint *)(unaff_EBX + 0x18)) {
        piVar5 = (int *)*piVar5;
      }
      *(undefined1 *)(uVar1 + (int)piVar5) = 0;
    }
  }
  return;
}
