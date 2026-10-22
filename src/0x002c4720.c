/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3AE9C0B343672DA88A3EC74DAA5354BAA2B7DCCAD092E698115ED8BB28FC00F5
 * Entry: 0x002c4720, Ghidra index: 10057, label: FUN_002c4720
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002c4720(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *in_EAX;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  puVar1 = *(undefined4 **)(in_EAX[4] + 0x90);
  puVar2 = *(undefined4 **)(in_EAX[9] + 0x90);
  FUN_002bb180();
  FUN_002bb180();
  iVar4 = *in_EAX;
  piVar3 = (int *)in_EAX[1];
  if (iVar4 != 0) {
    *(int **)(iVar4 + 4) = piVar3;
  }
  if (piVar3 == (int *)0x0) {
    *(int *)(param_1 + 0x20) = iVar4;
  }
  else {
    *piVar3 = iVar4;
  }
  *(short *)(param_1 + 0x4a) = *(short *)(param_1 + 0x4a) + -1;
  iVar4 = FUN_002bd2a0(param_1,in_EAX);
  if (iVar4 == 1) {
    *(undefined1 *)(param_1 + 0x50) = 1;
  }
  iVar4 = puVar1[0x18];
  if (((byte)*puVar1 & 0xc) == 4) {
    if (iVar4 == 0) {
LAB_002c47b8:
      iVar4 = 0;
    }
    else {
      uVar5 = FUN_002b2b80();
      iVar4 = FUN_002bee90(param_1,uVar5);
    }
  }
  else if ((iVar4 == 0) || (*(int *)(iVar4 + 0xc) != param_1)) goto LAB_002c47b8;
  iVar6 = puVar2[0x18];
  if (((byte)*puVar2 & 0xc) == 4) {
    if (iVar6 != 0) {
      uVar5 = FUN_002b2b80();
      iVar6 = FUN_002bee90(param_1,uVar5);
      goto LAB_002c47f4;
    }
  }
  else if ((iVar6 != 0) && (*(int *)(iVar6 + 0xc) == param_1)) goto LAB_002c47f4;
  iVar6 = 0;
LAB_002c47f4:
  FUN_002bd570();
  if (*(short *)(iVar4 + 2) == 0) {
    FUN_002bbcb0(puVar1);
    FUN_002bd460(param_1);
    *(uint *)puVar1[0x5c] = *(uint *)puVar1[0x5c] & 0xfffffdff | 0x100;
  }
  FUN_002bd570();
  if (*(short *)(iVar6 + 2) == 0) {
    FUN_002bbcb0(puVar2);
    FUN_002bd460(param_1);
    *(uint *)puVar2[0x5c] = *(uint *)puVar2[0x5c] & 0xfffffdff | 0x100;
  }
  FUN_002c4520();
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0();
}
