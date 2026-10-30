/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A3314835E10AACAD2183207424BF57F27A41D296FB3AB382B23293D7CD427AB7
 * Entry: 0x000815b0, Ghidra index: 1525, label: FUN_000815b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
/* XBE confirms two guest DWORDs and RET 8, but guest ECX/EDX remain unresolved. */
extern uint32_t FUN_00160da0(uint32_t guest_word0, uint32_t guest_word1);
extern int FUN_0014d330(void);
extern int FUN_0014d3b0(void);

extern uint32_t DAT_0046d064;
void FUN_000815b0(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  int in_EAX;
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *in_EDX;
  int *unaff_EBX;
  int *unaff_EDI;
  
  if ((~*(byte *)(in_EAX + 0x70) & 1) == 0) {
    *unaff_EDI = *in_EDX;
    if (*in_EDX == DAT_0046d064) {
      uVar2 = 0;
    }
    else {
      iVar1 = FUN_00160da0(0xffffffff,1);
      if (iVar1 == 0) {
        uVar2 = 100;
      }
      else {
        uVar2 = *(undefined4 *)(iVar1 + 700);
      }
    }
    *param_1 = uVar2;
    *param_2 = *unaff_EBX;
    if (*unaff_EBX != DAT_0046d064) {
      iVar1 = FUN_00160da0(0xffffffff,1);
      if (iVar1 == 0) {
        *param_3 = 100;
        return;
      }
      *param_3 = *(undefined4 *)(iVar1 + 700);
      return;
    }
  }
  else {
    if (*(char *)(in_EAX + 0x840) == '\x01') {
      *unaff_EDI = *(int *)(in_EAX + 0x844);
      *param_2 = *(int *)(in_EAX + 0x848);
      *param_1 = *(undefined4 *)(in_EAX + 0x84c);
      *param_3 = *(undefined4 *)(in_EAX + 0x850);
      return;
    }
    iVar1 = FUN_0014d330();
    if (iVar1 == 0) {
      piVar3 = &DAT_0046d064;
    }
    else {
      piVar3 = (int *)(*(int *)(iVar1 + 0xc) + 8);
    }
    *unaff_EDI = *piVar3;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(iVar1 + 0x1f8);
    }
    *param_1 = uVar2;
    iVar1 = FUN_0014d3b0();
    if (iVar1 == 0) {
      piVar3 = &DAT_0046d064;
    }
    else {
      piVar3 = (int *)(*(int *)(iVar1 + 0xc) + 8);
    }
    *param_2 = *piVar3;
    if (iVar1 != 0) {
      *param_3 = *(undefined4 *)(iVar1 + 0x1f8);
      return;
    }
  }
  *param_3 = 0;
  return;
}
