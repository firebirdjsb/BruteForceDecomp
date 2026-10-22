/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6D699A7030AE43C2D6D01BB91971A37724B6C0D02F2BE173B29ED7A9B7569D5F
 * Entry: 0x00148220, Ghidra index: 4254, label: FUN_00148220
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040c8f8;
void FUN_00148220(void)

{
  byte *pbVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  int in_EAX;
  int iVar7;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_18;
  float afStack_14 [3];
  undefined4 uStack_8;
  
  if (*(float *)(in_EAX + 0x24) < 0.0 != (*(float *)(in_EAX + 0x24) == 0.0)) {
    iVar7 = *(int *)(in_EAX + 0x34) + -1;
    *(int *)(in_EAX + 0x34) = iVar7;
    if (((iVar7 < 1) || (*(int *)(in_EAX + 8) == 0)) ||
       ((*(byte *)(*(int *)(in_EAX + 8) + 0x70) & 1) != 0)) {
      FUN_001483e0();
      *(undefined4 *)(in_EAX + 0x34) = *(undefined4 *)(in_EAX + 0x30);
    }
    if (*(int *)(in_EAX + 8) != 0) {
      cVar6 = FUN_00148100();
      if (cVar6 == '\0') {
        *(undefined1 *)(in_EAX + 0x38) = 1;
      }
      else {
        *(undefined1 *)(in_EAX + 0x38) = 0;
        *(undefined4 *)(in_EAX + 0x28) = 0x40a00000;
        iVar7 = (**(code **)(**(int **)(in_EAX + 8) + 0x40))();
        uVar2 = *(undefined4 *)(iVar7 + 0x2c);
        uVar3 = *(undefined4 *)(iVar7 + 0x28);
        *(undefined4 *)(in_EAX + 0x18) = *(undefined4 *)(iVar7 + 0x24);
        *(undefined4 *)(in_EAX + 0x1c) = uVar3;
        *(undefined4 *)(in_EAX + 0x20) = uVar2;
      }
    }
    *(undefined4 *)(in_EAX + 0x24) = 0x3f000000;
  }
  iVar7 = (**(code **)(**(int **)(in_EAX + 0x10) + 0x40))();
  fStack_20 = *(float *)(in_EAX + 0x20) - *(float *)(iVar7 + 0x2c);
  fVar4 = *(float *)(in_EAX + 0x1c) - *(float *)(iVar7 + 0x28);
  fStack_28 = *(float *)(in_EAX + 0x18) - *(float *)(iVar7 + 0x24);
  fStack_24 = fVar4;
  cVar6 = (**(code **)(**(int **)(in_EAX + 0x10) + 0xc4))(&fStack_2c);
  if (cVar6 != '\0') {
    fStack_18 = fStack_24;
    uStack_8 = 0;
    afStack_14[1] = 0.0;
    fVar5 = 1.0 / SQRT(fStack_24 * fStack_24 + fStack_2c * fStack_2c + fStack_28 * fStack_28);
    afStack_14[0] = fVar5 * fStack_24;
    afStack_14[2] = -(fStack_2c * fVar5);
    FUN_002bad80(*(undefined4 *)((int)fVar4 + 0x90),afStack_14,DAT_0040c8f8);
  }
  if (((fStack_28 < 2.0) && (-1.5 < fStack_28)) &&
     (fVar4 = *(float *)(*(int *)(*(int *)(in_EAX + 0x10) + 0x1d8) + 0x1fc) * 0.5,
     fStack_2c * fStack_2c + fStack_24 * fStack_24 < fVar4 * fVar4)) {
    *(undefined4 *)(*(int *)(in_EAX + 0x10) + 0x1d4) = 0;
    pbVar1 = (byte *)(*(int *)(in_EAX + 0x10) + 0x1dc);
    *pbVar1 = *pbVar1 | 2;
  }
  return;
}
