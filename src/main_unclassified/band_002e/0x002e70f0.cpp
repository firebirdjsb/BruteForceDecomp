/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 81120149517A742E7AF345EB611AEB5CCB6FC58B7A40BD95E54B2DF35F84ECA0
 * Entry: 0x002e70f0, Ghidra index: 10503, label: FUN_002e70f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002e70f0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int in_ECX;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000034;
  undefined4 in_stack_00000038;
  undefined4 in_stack_0000003c;
  
  puVar1 = (undefined4 *)(in_ECX + 0x4878);
  *(undefined4 *)(in_ECX + 0x487c) = in_stack_0000002c;
  puVar2 = (undefined4 *)(in_ECX + 0x4880);
  *puVar2 = in_stack_00000030;
  *(undefined4 *)(in_ECX + 0x4884) = in_stack_00000034;
  *(undefined4 *)(in_ECX + 0x4888) = in_stack_00000038;
  *(undefined4 *)(in_ECX + 0x488c) = in_stack_0000003c;
  *puVar1 = in_stack_00000028;
  *(undefined4 *)(in_ECX + 100) = in_stack_00000028;
  *(undefined4 *)(in_ECX + 0x68) = in_stack_0000002c;
  puVar6 = (undefined4 *)(in_ECX + 0x40);
  puVar5 = (undefined4 *)register0x00000010;
  for (iVar4 = 9; puVar5 = puVar5 + 1, iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar6 = puVar6 + 1;
  }
  *(undefined4 *)(in_ECX + 0x6c) = in_stack_00000030;
  *(undefined4 *)(in_ECX + 0x70) = in_stack_00000034;
  *(undefined4 *)(in_ECX + 0x74) = in_stack_00000038;
  *(undefined4 *)(in_ECX + 0x78) = in_stack_0000003c;
  iVar4 = FUN_00345005(puVar1,puVar2);
  if (iVar4 != 0) {
    *puVar1 = 0;
    *(undefined4 *)(in_ECX + 0x487c) = 0;
    *puVar2 = 0;
    *(undefined4 *)(in_ECX + 0x4884) = 0;
    *(undefined4 *)(in_ECX + 0x4888) = 0;
    *(undefined4 *)(in_ECX + 0x488c) = 0;
    return -0x7fffbffb;
  }
  iVar4 = (**(code **)(**(int **)(in_ECX + 0x20) + 4))(&stack0x00000004,puVar1,&stack0x00000028);
  if (-1 < iVar4) {
    iVar4 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x50))(in_stack_0000001c);
    if (-1 < iVar4) {
      *(undefined4 *)(in_ECX + 0x4870) = 0;
      *(undefined4 *)(in_ECX + 0x4874) = 0;
      iVar4 = FUN_002e7ce0(in_stack_00000018,&stack0x00000020);
      if (-1 < iVar4) {
        FUN_002e8c40();
        iVar4 = FUN_002e7f50(in_stack_00000020,&stack0xffffffd0,1,1);
        if (-1 < iVar4) {
          *(undefined4 *)(in_ECX + 0x4898) = 6;
          uVar3 = XAPILIB__GetTickCount();
          *(undefined4 *)(in_ECX + 0x4948) = uVar3;
          FUN_002e5890();
        }
        FUN_002e8b80();
      }
    }
  }
  return iVar4;
}
