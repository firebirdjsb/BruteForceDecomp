/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1B5949F846CE0C3247DF6490D0597C40A7136C51B88842418C02DCF0700D6D9C
 * Entry: 0x00222d30, Ghidra index: 7593, label: FUN_00222d30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d004;
extern uint32_t DAT_0046d064;
void FUN_00222d30(undefined4 param_1)

{
  undefined4 uVar1;
  char cVar2;
  int *unaff_EBX;
  uint32_t guest_aux_word = 0; /* callback's reserved 32-bit local stack word */
  int *piVar3;
  
  uVar1 = param_1;
  piVar3 = (int *)0x0;
  param_1 = 0;
  cVar2 = (**(code **)(*unaff_EBX + 0x10))(&param_1);
  if (cVar2 == '\0') {
    return;
  }
  cVar2 = (**(code **)(*unaff_EBX + 0x18))(&guest_aux_word);
  if (cVar2 == '\0') {
    if (param_1 != DAT_0046d064) {
      piVar3 = (int *)FUN_000da800();
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 0xe0))(uVar1,&DAT_0046d004);
        *(byte *)(piVar3 + 0x43) = *(byte *)(piVar3 + 0x43) | 2;
        FUN_0021c380(0x3f800000);
      }
      goto LAB_00222e04;
    }
  }
  else if (param_1 != DAT_0046d064) {
    if ((guest_aux_word != 0) && (piVar3 = (int *)FUN_000da800(), piVar3 != (int *)0x0)) {
      (**(code **)(*piVar3 + 0xdc))(uVar1,&guest_aux_word);
      *(byte *)(piVar3 + 0x43) = *(byte *)(piVar3 + 0x43) | 2;
      FUN_0021c380(0x3f800000);
    }
    goto LAB_00222e04;
  }
  piVar3 = (int *)0x0;
LAB_00222e04:
  if ((int *)unaff_EBX[2] != piVar3) {
    FUN_0008f6a0(piVar3);
  }
  return;
}
