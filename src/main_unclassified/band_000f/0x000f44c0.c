/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B40F7F881EDD4E333DCC1B105B34FC41E3E14CB6912336094DF824B8A7E434A2
 * Entry: 0x000f44c0, Ghidra index: 3063, label: FUN_000f44c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046995c;
extern uint32_t DAT_00469b58;
undefined4 FUN_000f44c0(void)

{
  float fVar1;
  int in_EAX;
  undefined4 uVar2;
  byte *pbVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  float unaff_ESI;
  float unaff_EDI;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int local_1c [4];
  float fStack_c;
  float fStack_4;
  
  iVar6 = DAT_0046995c;
  if (in_EAX != 0) {
    if (*(int *)(DAT_0046995c + 0x1c) != 0) {
      *(undefined4 *)(*(int *)(DAT_0046995c + 0x10) + 0x30) = 4000;
      *(undefined1 *)(iVar6 + 0x2e25) = 1;
    }
    if (*(int *)(in_EAX + 4) != 0) {
      iVar6 = **(int **)(DAT_00469b58 + 8);
      uVar2 = FUN_00102000();
      pbVar3 = (byte *)(**(code **)(iVar6 + 0x130))(uVar2);
      if ((pbVar3 == (byte *)0x0) || ((*pbVar3 & 1) == 0)) {
        FUN_00102120();
      }
    }
    local_1c[0] = 0;
    local_1c[3] = 0;
    piVar4 = local_1c;
    for (iVar6 = 7; iVar6 != 0; iVar6 = iVar6 + -1) {
      *piVar4 = 0;
      piVar4 = piVar4 + 1;
    }
    piVar4 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x58))();
    local_1c[1] = 0x11;
    local_1c[3] = ((*piVar4 != 0x17506391) - 1 & 0xc6a8b8e2) + 0x1bafae47;
    puVar5 = (undefined4 *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
    iVar6 = (**(code **)*puVar5)();
    *(byte *)(iVar6 + 0x65) = *(byte *)(iVar6 + 0x65) | 4;
    uStack_24 = *(undefined4 *)(iVar6 + 0x10);
    iStack_28 = *(int *)(iVar6 + 0xc);
    fVar1 = *(float *)(iVar6 + 0x18);
    local_1c[0] = 0x12;
    puVar5 = (undefined4 *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
    piVar4 = (int *)(**(code **)*puVar5)(&uStack_20);
    if (piVar4 != (int *)0x0) {
      piVar4[4] = iStack_28;
      piVar4[3] = (int)(fVar1 + fStack_4);
      (**(code **)(*piVar4 + 0x1c))();
      *(byte *)((int)piVar4 + 0x65) = *(byte *)((int)piVar4 + 0x65) | 4;
    }
    uStack_20 = 0x13;
    puVar5 = (undefined4 *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
    piVar4 = (int *)(**(code **)*puVar5)(&uStack_24);
    if (piVar4 != (int *)0x0) {
      piVar4[3] = (int)unaff_ESI;
      piVar4[4] = (int)(fVar1 + unaff_EDI);
      (**(code **)(*piVar4 + 0x1c))();
      *(byte *)((int)piVar4 + 0x65) = *(byte *)((int)piVar4 + 0x65) | 4;
    }
    uStack_24 = 0x14;
    puVar5 = (undefined4 *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
    piVar4 = (int *)(**(code **)*puVar5)(&iStack_28);
    if (piVar4 != (int *)0x0) {
      piVar4[3] = (int)(unaff_EDI + fStack_c);
      piVar4[4] = (int)(unaff_ESI + (float)local_1c);
      (**(code **)(*piVar4 + 0x1c))();
      *(byte *)((int)piVar4 + 0x65) = *(byte *)((int)piVar4 + 0x65) | 4;
    }
  }
  return 1;
}
