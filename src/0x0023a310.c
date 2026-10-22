/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 24A0AA6AC72FE62E02269438B5F5C7279BF1D059E54B55D89013E76C93761F74
 * Entry: 0x0023a310, Ghidra index: 7900, label: FUN_0023a310
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern char s_23_23_IDAXProperty_0040c4f8[];
extern char s_23_23_IDatabaseEventReference_0040632c[];
extern char s_23_23_ISchema_00406e3c[];
/* WARNING: Removing unreachable block (ram,0x0023a49d) */
/* WARNING: Removing unreachable block (ram,0x0023a442) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0023a310(void)

{
  int iVar1;
  int *piVar2;
  int *unaff_EBX;
  int *unaff_EBP;
  int *unaff_ESI;
  int *unaff_EDI;
  int in_stack_00000010;
  int *piVar3;
  char *pcVar4;
  int ***pppiStack_2c;
  int **local_1c;
  int **appiStack_18 [2];
  int **local_10;
  int iStack_c;
  int *local_8;
  undefined4 local_4;
  
  pppiStack_2c = &local_10;
  local_10 = (int **)0x0;
  local_8 = (int *)0x8;
  local_4 = 0x1b9db5ed;
  iVar1 = FUN_00238080(s_23_23_IDatabaseEventReference_0040632c);
  if (iVar1 < 0) {
LAB_0023a56f:
    if ((int ***)local_10 != (int ***)0x0) {
      pppiStack_2c = (int ***)local_10;
      (*(code *)(*local_10)[2])();
    }
    return iVar1;
  }
  pppiStack_2c = &local_1c;
  pcVar4 = s_23_23_IDAXProperty_0040c4f8;
  local_1c = (int **)0x0;
  piVar3 = unaff_EBX;
  iVar1 = (**(code **)*unaff_EBX)();
  if (iVar1 < 0) goto LAB_0023a502;
  piVar2 = (int *)(**(code **)(*unaff_EDI + 0xc))(unaff_EDI,appiStack_18);
  if (*piVar2 != iStack_c) {
    if ((int *)pcVar4 != (int *)0x0) {
      (**(code **)(*(int *)pcVar4 + 8))(pcVar4);
    }
    if (unaff_ESI != (int *)0x0) {
      (**(code **)(*unaff_ESI + 8))(unaff_ESI);
    }
    return 0;
  }
  pppiStack_2c = (int ***)0x0;
  (**(code **)(*local_8 + 0x1c))(local_8,&pppiStack_2c);
  if (unaff_ESI == (int *)0x0) {
    if (unaff_EBP != (int *)0x0) {
      (**(code **)(*unaff_EBP + 8))(unaff_EBP);
      goto LAB_0023a4ec;
    }
  }
  else {
    if (unaff_EBP != (int *)0x0) {
      (**(code **)(*unaff_EBP + 8))(unaff_EBP);
    }
    piVar2 = unaff_ESI;
    iVar1 = (**(code **)(*unaff_ESI + 0x10))(unaff_ESI,s_23_23_ISchema_00406e3c,&stack0xffffffe0);
    if (iVar1 < 0) {
      FUN_00076fc0();
      if ((int *)pcVar4 != (int *)0x0) {
        (**(code **)(*(int *)pcVar4 + 8))(pcVar4);
      }
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 8))(piVar3);
      }
      return -0x7fffbffb;
    }
    if ((in_stack_00000010 == 0) &&
       (in_stack_00000010 = (**(code **)(*piVar3 + 0x10))(piVar3), in_stack_00000010 == 0)) {
      FUN_00076fc0();
      if ((int *)pcVar4 != (int *)0x0) {
        (**(code **)(*(int *)pcVar4 + 8))(pcVar4);
      }
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 8))(piVar3);
      }
      return 0;
    }
    iVar1 = (**(code **)(*piVar3 + 0x18))(piVar3,in_stack_00000010,1);
    if (((-1 < iVar1) && (iVar1 = (**(code **)(*unaff_EBX + 0x24))(), -1 < iVar1)) &&
       (iVar1 = (**(code **)(*unaff_EBX + 0x2c))(), -1 < iVar1)) {
      iVar1 = (**(code **)(*piVar3 + 0x40))(piVar3,0);
      pppiStack_2c = (int ***)0x23a54b;
      FUN_00076fc0();
      if ((int ***)appiStack_18[0] != (int ***)0x0) {
        pppiStack_2c = (int ***)appiStack_18[0];
        (*(code *)(*appiStack_18[0])[2])();
        appiStack_18[0] = (int **)0x0;
      }
      if ((int ***)local_1c != (int ***)0x0) {
        pppiStack_2c = (int ***)local_1c;
        (*(code *)(*local_1c)[2])();
        local_1c = (int **)0x0;
      }
      goto LAB_0023a56f;
    }
    (**(code **)(*piVar2 + 0x14))(piVar2,in_stack_00000010);
    FUN_00076fc0();
LAB_0023a4ec:
    if (unaff_ESI != (int *)0x0) {
      (**(code **)(*unaff_ESI + 8))(unaff_ESI);
    }
  }
  unaff_EDI = (int *)0x0;
LAB_0023a502:
  if (unaff_EDI != (int *)0x0) {
    (**(code **)(*unaff_EDI + 8))(unaff_EDI);
  }
  if ((int ***)local_1c != (int ***)0x0) {
    (*(code *)(*local_1c)[2])(local_1c);
  }
  return -0x7fffbffb;
}
