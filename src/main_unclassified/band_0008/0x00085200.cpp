/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5F8F36E081A06D9CE04680C55C657E64B2BD1DF4CADCE0A404D70AD9C47EB9ED
 * Entry: 0x00085200, Ghidra index: 1552, label: FUN_00085200
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_001ed160(void);
extern void FUN_00084da0(void);
extern void FUN_00084e80(void);
extern void FUN_00069780(float param_1);

extern uint32_t DAT_0046995c;
extern uint32_t DAT_00469aac;
extern uint32_t DAT_00469b58;
void FUN_00085200(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_EBX;
  int iVar5;
  uint auStack_14 [5];
  
  piVar2 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
  iVar5 = DAT_00469aac;
  piVar1 = *(int **)(DAT_00469b58 + 8);
  switch(unaff_EBX) {
  case 0:
    auStack_14[0] = auStack_14[0] & 0xffffffe2 | 2;
    auStack_14[1] = 0;
    auStack_14[2] = 0;
    auStack_14[3] = 0;
    auStack_14[4] = 0;
    (**(code **)(*piVar2 + 0x1c))();
    iVar3 = (**(code **)(*piVar1 + 0xe4))();
    if (iVar3 == 0) {
      auStack_14[0] = auStack_14[0] | 9;
      auStack_14[1] = 0xf745f94a;
      (**(code **)(*piVar1 + 0x17c))();
      (**(code **)(**(int **)(iVar5 + 0xbec) + 0x3c))();
      if (*(int *)(DAT_0046995c + 0x1c) != 0) {
        FUN_001ed160();
      }
    }
    else {
      auStack_14[0] = auStack_14[0] | 4;
    }
    iVar5 = *piVar1;
    uVar4 = (**(code **)(iVar5 + 0x68))(auStack_14);
    (**(code **)(iVar5 + 0x34))(uVar4);
    break;
  case 1:
    FUN_00084da0();
    break;
  case 2:
    FUN_00084e80();
    break;
  case 3:
    (**(code **)(*piVar2 + 0x1c))();
    iVar5 = *(int *)(iVar5 + 0xc4c);
    if ((iVar5 == 0) || (*(int *)(iVar5 + 0x14) != 0x159bec67)) {
      iVar5 = 0;
    }
    *(byte *)(iVar5 + 0x24) = *(byte *)(iVar5 + 0x24) | 4;
  }
  auStack_14[0] = 0;
  auStack_14[1] = 0;
  auStack_14[2] = 0;
  FUN_00069780(0x3f800000);
  return;
}
