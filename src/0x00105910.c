/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B14B7AD5F207E3CC71F77A0FF389C11D080A9A5D8CA2F8C653551FFE844AEE9F
 * Entry: 0x00105910, Ghidra index: 3346, label: FUN_00105910
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00400f10;
extern uint32_t DAT_00400f48;
extern uint32_t DAT_004699fc;
extern uint32_t DAT_00469b58;
extern uint32_t PTR_PTR_00400ee4;
extern uint32_t PTR_PTR_00400f1c;
extern uint32_t _DAT_00400ee8;
extern uint32_t _DAT_00400eec;
extern uint32_t _DAT_00400ef0;
extern uint32_t _DAT_00400ef4;
extern uint32_t _DAT_00400ef8;
extern uint32_t _DAT_00400efc;
extern uint32_t _DAT_00400f00;
extern uint32_t _DAT_00400f04;
extern uint32_t _DAT_00400f08;
extern uint32_t _DAT_00400f14;
extern uint32_t _DAT_00400f18;
extern uint32_t _DAT_00400f20;
extern uint32_t _DAT_00400f24;
extern uint32_t _DAT_00400f28;
extern uint32_t _DAT_00400f2c;
extern uint32_t _DAT_00400f30;
extern uint32_t _DAT_00400f34;
extern uint32_t _DAT_00400f38;
extern uint32_t _DAT_00400f3c;
extern uint32_t _DAT_00400f40;
extern uint32_t _DAT_00400f4c;
extern uint32_t _DAT_00400f50;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00105910(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *in_EAX;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  int iStack_8;
  
  if ((in_EAX != (int *)0x0) && (iVar4 = (**(code **)(*in_EAX + 4))(), iVar4 == 8)) {
    uVar5 = FUN_00103000();
    iVar4 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x18c))(uVar5);
    if ((iVar4 != 0) && (*(char *)(iVar4 + 0x20) == '\0')) {
      DAT_004699fc = 1;
      (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x170))(iVar4,&PTR_PTR_00400ee4);
      (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x174))(iVar4,&PTR_PTR_00400f1c);
      goto LAB_00105a49;
    }
  }
  DAT_004699fc = 0;
  if (DAT_00400f10 != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(DAT_00400f10);
  }
  DAT_00400f10 = 0;
  _DAT_00400f14 = 0;
  _DAT_00400f18 = 0;
  _DAT_00400ee8 = 0;
  _DAT_00400eec = 0;
  _DAT_00400ef0 = 0;
  _DAT_00400ef4 = 0;
  _DAT_00400ef8 = 0;
  _DAT_00400efc = 0;
  _DAT_00400f00 = 0;
  _DAT_00400f08 = 0;
  _DAT_00400f04 = 0;
  if (DAT_00400f48 != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(DAT_00400f48);
  }
  DAT_00400f48 = 0;
  _DAT_00400f4c = 0;
  _DAT_00400f50 = 0;
  _DAT_00400f20 = 0;
  _DAT_00400f24 = 0;
  _DAT_00400f28 = 0;
  _DAT_00400f2c = 0;
  _DAT_00400f30 = 0;
  _DAT_00400f34 = 0;
  _DAT_00400f38 = 0;
  _DAT_00400f40 = 0;
  _DAT_00400f3c = 0;
LAB_00105a49:
  iVar4 = in_EAX[1];
  piVar7 = *(int **)(iVar4 + 0x74);
  piVar1 = *(int **)(iVar4 + 0x78);
  iStack_8 = 0;
  for (piVar6 = piVar7;
      (piVar2 = piVar7, iVar3 = iStack_8, piVar6 != piVar1 &&
      (iVar3 = *piVar6, *(int *)(*piVar6 + 0x24) != 0xf7ff385)); piVar6 = piVar6 + 1) {
  }
  for (; (iStack_8 = iVar3, piVar2 != piVar1 && (*(int *)(*piVar2 + 0x24) != 0xd4a236));
      piVar2 = piVar2 + 1) {
    iVar3 = iStack_8;
  }
  for (; (piVar7 != piVar1 && (*(int *)(*piVar7 + 0x24) != 0x1e6a7837)); piVar7 = piVar7 + 1) {
  }
  FUN_001056f0(iStack_8);
  FUN_001056a0();
  FUN_00105650();
  FUN_001051e0(iVar4,1);
  return;
}
