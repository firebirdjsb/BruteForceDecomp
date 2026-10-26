/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 35F7CF8E065762ABB0448F5C005677E52CDD908DE518EF657AE42A1D069758C7
 * Entry: 0x00076b30, Ghidra index: 1384, label: FUN_00076b30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_0046990c;
/* WARNING: Removing unreachable block (ram,0x00076bf0) */
/* WARNING: Removing unreachable block (ram,0x00076d28) */

undefined4 FUN_00076b30(undefined4 param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  undefined4 uVar4;
  int *unaff_EDI;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piStack_30;
  undefined4 uStack_2c;
  int *piStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  uint uVar8;
  undefined4 local_c [3];
  uint32_t guest_second_arg_output;
  
  uStack_20 = 0;
  uStack_24 = param_1;
  piStack_28 = local_c;
  uStack_2c = *param_2;
  local_c[0] = 0;
  piStack_30 = DAT_0046990c;
  /* 0x76B46..0x76B5A: five original guest DWORD arguments; the
   * callback writes local_c[0] at entry ESP-0x0C. Guest memory and
   * host COM ABI translation remain unverified. */
  (**(code **)(*DAT_0046990c + 0x20))(piStack_30,uStack_2c,piStack_28,uStack_24,uStack_20);
  piVar3 = *(int **)(in_ECX + 8);
  uStack_24 = (**(code **)(*piVar3 + 0x2c))(piVar3,uStack_20);
  if ((param_2[3] == 4) && (param_2[1] != 0)) {
    uVar8 = 0;
    piStack_28 = (int *)0x0;
    while( true ) {
      iVar2 = *(int *)(param_2[1] + 4);
      if ((iVar2 == 0) || ((uint)(*(int *)(param_2[1] + 8) - iVar2 >> 4) <= uVar8)) break;
      cVar1 = FUN_00076ac0();
      if ((cVar1 != '\0') &&
         (iVar2 = FUN_00076b30(0,*(int *)(param_2[1] + 4) + (int)piStack_28), iVar2 < 0)) {
        uStack_24 = 0x80004005;
        piVar3 = (int *)0x0;
        goto LAB_00076d38;
      }
      uVar8 = uVar8 + 1;
      piStack_28 = piStack_28 + 4;
    }
  }
  else {
    piStack_28 = (int *)0x0;
    FUN_00076ac0();
    uVar7 = 0;
    uVar6 = 0x1077c687;
    /* 0x76C3D LEA ECX,[ESP+0x2C] after two pushes points to the
     * original incoming second-argument DWORD at entry ESP+8.
     * EBP retains the input param_2 pointer; 0x76C47 zeroes that
     * incoming word before the COM output call. */
    guest_second_arg_output = 0;
    (**(code **)(*DAT_0046990c + 0x20))(DAT_0046990c,0x1077c687,&guest_second_arg_output,piStack_28,0);
    uVar5 = 0xedbd6aff;
    piStack_30 = (int *)0x0;
    (**(code **)(*DAT_0046990c + 0x20))(DAT_0046990c,0xedbd6aff,&piStack_30,piVar3,0);
    (**(code **)(**(int **)(in_ECX + 8) + 0x2c))(*(int **)(in_ECX + 8),uVar7,1);
    iVar2 = param_2[3];
    if ((iVar2 == 1) || (iVar2 == 2)) {
      uVar4 = 4;
    }
    else if (iVar2 == 3) {
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
    (**(code **)(**(int **)(in_ECX + 8) + 0x34))(*(int **)(in_ECX + 8),uVar6,param_2 + 2,uVar4,1);
    piVar3 = *(int **)(in_ECX + 8);
    (**(code **)(*piVar3 + 0x30))(piVar3,uVar5);
    (**(code **)(**(int **)(in_ECX + 8) + 0x2c))(*(int **)(in_ECX + 8),uVar7,1);
    iVar2 = param_2[3];
    if ((iVar2 == 1) || (iVar2 == 2)) {
      uVar7 = 4;
    }
    else if (iVar2 == 3) {
      uVar7 = 1;
    }
    else {
      uVar7 = 0;
    }
    (**(code **)(**(int **)(in_ECX + 8) + 0x34))(*(int **)(in_ECX + 8),uVar4,param_2 + 1,uVar7,1);
    (**(code **)(**(int **)(in_ECX + 8) + 0x30))(*(int **)(in_ECX + 8),piVar3);
    piVar3 = piStack_28;
    if (unaff_EDI != (int *)0x0) {
      (**(code **)(*unaff_EDI + 8))(unaff_EDI);
      piVar3 = piStack_28;
    }
LAB_00076d38:
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))(piVar3);
    }
  }
  (**(code **)(**(int **)(in_ECX + 8) + 0x30))(*(int **)(in_ECX + 8),uStack_2c);
  /* 0x76D4E..0x76D5D: reload the original first interface-output
   * DWORD, conditionally call vtable +8 with that interface pointer.
   * A 32-bit guest VA is not yet translated into host memory. */
  if (local_c[0] != 0) {
    int *guest_first_interface = (int *)(uintptr_t)local_c[0];
    (**(code **)(*guest_first_interface + 8))(guest_first_interface);
  }
  return uStack_2c;
}
