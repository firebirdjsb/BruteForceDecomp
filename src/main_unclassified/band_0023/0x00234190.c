/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1FFF211674C5671AF712F7C38CC45CC5841B62329F22EF98FA2C270EB6D33FA9
 * Entry: 0x00234190, Ghidra index: 7797, label: FUN_00234190
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00443314;
undefined4 FUN_00234190(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  int unaff_EBX;
  int *unaff_EDI;
  int local_8;
  uint32_t guest_virtual_output_word;

  if (param_1 == 0) {
    return 0;
  }
  if (param_1 == -1) {
    return 0;
  }
  if (0 < unaff_EDI[7]) {
    return 0;
  }
  if (unaff_EBX == 0) {
    return 0;
  }
  if (*(int *)(unaff_EBX + 4) != -0x40800000) {
    if (*(int *)(unaff_EBX + 4) != -0x40000000) {
      if (*(float *)(unaff_EBX + 4) < 0.0) {
        return 0;
      }
      if (*(float *)*unaff_EDI < *(float *)(unaff_EBX + 4)) {
        return 0;
      }
    }
    if (*(int *)(unaff_EBX + 4) != -0x40800000) {
      if (*(int *)(unaff_EBX + 4) != -0x40000000) {
        unaff_EDI[0xe] = *(int *)(unaff_EBX + 4);
      }
      goto LAB_00234211;
    }
  }
  unaff_EDI[0xe] = *(int *)*unaff_EDI;
LAB_00234211:
  unaff_EDI[0xd] = *(int *)(unaff_EBX + 0x1c);
  bVar3 = *(byte *)(unaff_EDI + 9) ^
          (*(char *)(unaff_EBX + 0x24) << 2 ^ *(byte *)(unaff_EDI + 9)) & 4;
  *(byte *)(unaff_EDI + 9) = bVar3;
  *(byte *)(unaff_EDI + 9) = (*(char *)(unaff_EBX + 0x24) << 1 ^ bVar3) & 8 ^ bVar3;
  unaff_EDI[0xb] = *(int *)(unaff_EBX + 0x18);
  unaff_EDI[0xc] = *(int *)(unaff_EBX + 0xc);
  iVar1 = *(int *)(unaff_EBX + 8);
  *(byte *)(unaff_EDI + 9) = *(byte *)(unaff_EDI + 9) | 0x10;
  unaff_EDI[1] = param_2;
  unaff_EDI[10] = iVar1;
  unaff_EDI[7] = 0;
  unaff_EDI[2] = param_3;
  iVar1 = *(int *)(*unaff_EDI + 0x1c);
  if (iVar1 == 0) {
    local_8 = 0;
  }
  else {
    local_8 = *(int *)(*unaff_EDI + 0x20) - iVar1 >> 4;
  }
  FUN_0004f7f0();
  FUN_0014c470();
  param_2 = 0;
  if (0 < local_8) {
    param_3 = 0;
    do {
      iVar1 = *(int *)(*unaff_EDI + 0x1c);
      iVar5 = FUN_00235d50();
      if (((iVar5 != 0) && (iVar5 != -1)) && ((*(uint *)(iVar5 + 0x44) >> 5 & 1) == 0)) {
        piVar2 = *(int **)(iVar1 + param_3 + 0xc);
        /* XBE 0x2342e3..305: shr ecx,5; push ecx; push esp;
         * virtual +0x10 can modify this 4-byte guest slot. After ret,
         * the same pushed slot is read as FUN_002340f0's first argument.
         * Exact virtual target and guest-register binding remain unverified. */
        guest_virtual_output_word = *(uint32_t *)(iVar5 + 0x44) >> 5;
        (**(code **)(*piVar2 + 0x10))(piVar2,&guest_virtual_output_word);
        cVar4 = FUN_002340f0(guest_virtual_output_word);
        if ((cVar4 != '\0') && (cVar4 = FUN_00235bd0(), cVar4 != '\0')) {
          piVar2 = *(int **)(iVar5 + 0x58);
          *(byte *)(unaff_EBX + 0x24) =
               *(byte *)(unaff_EBX + 0x24) ^
               ((iVar5 == param_1) << 1 ^ *(byte *)(unaff_EBX + 0x24)) & 2;
          (**(code **)(*piVar2 + 0x1c))(piVar2,iVar5);
          *(int *)(unaff_EDI[4] + param_2 * 4) = iVar5;
          if (param_2 == *(short *)(*unaff_EDI + 0x10)) {
            (**(code **)(*piVar2 + 0x28))(piVar2);
            cVar4 = FUN_00234570();
            if (cVar4 == '\0') {
              unaff_EDI[8] = 0;
            }
          }
        }
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + 0x10;
    } while (param_2 < local_8);
  }
  (**(code **)(*DAT_00443314 + 0x44))(DAT_00443314);
  return 1;
}