/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BD665C3FC5D8E0301C8AC59D927776C35660DCB02933C8FE8BB3AD5ABC120536
 * Entry: 0x00289680, Ghidra index: 9129, label: FUN_00289680
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469888;
undefined4 FUN_00289680(void)

{
  int *piVar1;
  int in_EAX;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (in_EAX == 0) {
    return 1;
  }
  FUN_0028a540((*DAT_00469888 - DAT_00469888[1] >> 4) - DAT_00469888[3]);
  piVar1 = (int *)(in_EAX * 0x10 + -0x10 + DAT_00469888[1]);
  piVar2 = (int *)(DAT_00469888[3] * 0x10 + DAT_00469888[1]);
  piVar2[2] = piVar1[2];
  piVar2[3] = piVar1[3];
  iVar4 = *piVar1;
  if (iVar4 == -10) {
    iVar4 = -5;
  }
  else {
    if (iVar4 == -9) {
      *piVar2 = -4;
      uVar3 = FUN_0028ab90();
      return uVar3;
    }
    if (iVar4 == -8) {
      *piVar2 = -7;
      uVar3 = FUN_0028ab90();
      return uVar3;
    }
  }
  *piVar2 = iVar4;
  uVar3 = FUN_0028ab90();
  return uVar3;
}
