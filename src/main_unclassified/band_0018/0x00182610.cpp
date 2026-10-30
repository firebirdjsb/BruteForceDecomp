/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B73DDAC9484AC2A36A2E816678F9D2A168209558BB159F2E4FA3839B207B6D08
 * Entry: 0x00182610, Ghidra index: 5179, label: FUN_00182610
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469b54;
void FUN_00182610(float param_1)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *(float *)(in_EAX + 0x54) = param_1 + *(float *)(in_EAX + 0x54);
  *(float *)(in_EAX + 0x6c) = param_1 + *(float *)(in_EAX + 0x6c);
  *(float *)(in_EAX + 0x84) = param_1 + *(float *)(in_EAX + 0x84);
  *(float *)(in_EAX + 0x9c) = param_1 + *(float *)(in_EAX + 0x9c);
  iVar1 = FUN_00182750();
  if (iVar1 == *(int *)(in_EAX + 0xb0)) {
    return;
  }
  iVar2 = (**(code **)(*DAT_00469b54 + 0x48))();
  if (iVar1 == 0) {
    FUN_00181420(in_EAX + 0x50,*(undefined4 *)(iVar2 + 0x60),*(undefined4 *)(iVar2 + 100),0x3f800000
                );
    FUN_00181420(in_EAX + 0x68,*(undefined4 *)(iVar2 + 0x6c),*(undefined4 *)(iVar2 + 0x70),
                 0x3f800000);
    FUN_00181420(in_EAX + 0x80,*(undefined4 *)(iVar2 + 0x84),*(undefined4 *)(iVar2 + 0x88),
                 0x3f800000);
    uVar4 = *(undefined4 *)(iVar2 + 0x7c);
    uVar3 = *(undefined4 *)(iVar2 + 0x78);
    uVar5 = 0x3f800000;
  }
  else {
    if (*(int *)(in_EAX + 0xb0) != 0) goto LAB_00182736;
    FUN_00181420(in_EAX + 0x50,*(undefined4 *)(iVar2 + 0x5c),0x3f800000,*(undefined4 *)(iVar2 + 100)
                );
    FUN_00181420(in_EAX + 0x68,*(undefined4 *)(iVar2 + 0x68),0x3f800000,
                 *(undefined4 *)(iVar2 + 0x70));
    FUN_00181420(in_EAX + 0x80,*(undefined4 *)(iVar2 + 0x80),0x3f800000,
                 *(undefined4 *)(iVar2 + 0x88));
    uVar5 = *(undefined4 *)(iVar2 + 0x7c);
    uVar3 = *(undefined4 *)(iVar2 + 0x74);
    uVar4 = 0x3f800000;
  }
  FUN_00181420(in_EAX + 0x98,uVar3,uVar4,uVar5);
LAB_00182736:
  *(int *)(in_EAX + 0xb0) = iVar1;
  return;
}
