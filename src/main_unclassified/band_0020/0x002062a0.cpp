/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C7F80585A167377E62ACAAABEA2AD8ABB95A2433B325A95EC5DA6C9D0C7E4C33
 * Entry: 0x002062a0, Ghidra index: 7297, label: FUN_002062a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469940;
undefined4 FUN_002062a0(char param_1)

{
  int in_EAX;
  int iVar1;
  float10 fVar2;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar3;
  
  if ((*(byte *)(in_EAX + 0x8d) & 4) != 0) {
    if (*(char *)(in_EAX + 0x4c) != '\0') {
      return 1;
    }
    if (*(float *)(in_EAX + 0xa4) < 0.0 == (*(float *)(in_EAX + 0xa4) == 0.0)) {
      return 1;
    }
  }
  FUN_002063c0(in_EAX,1);
  fVar2 = (float10)FUN_00206250();
  if (fVar2 <= (float10)0.0) {
    if (*(char *)(in_EAX + 0x4c) == '\0') {
      *(byte *)(in_EAX + 0x8d) = *(byte *)(in_EAX + 0x8d) & 0xfd;
      return 1;
    }
  }
  else {
    iVar1 = FUN_0017beb0(in_EAX + 0x40);
    fVar3 = extraout_ST0;
    if (iVar1 != 0) {
      (**(code **)(*DAT_00469940 + 100))(iVar1 + 4);
      fVar3 = extraout_ST0_00;
    }
    *(float *)(in_EAX + 0xa4) = (float)fVar3;
    *(byte *)(in_EAX + 0x8d) = *(byte *)(in_EAX + 0x8d) | 4;
    if (param_1 != '\0') {
      FUN_002060c0((float)fVar2);
    }
    if (*(char *)(in_EAX + 0x8c) != '\0') {
      FUN_00141100(*(undefined4 *)(in_EAX + 0xa4));
    }
  }
  *(undefined4 *)(in_EAX + 0x50) = 0;
  return 1;
}
