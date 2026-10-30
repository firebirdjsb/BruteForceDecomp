/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E4984A4CF40C90D7D63B77F5DA33751B86BB3A5466112868C6CF9E3E6A2EB8F9
 * Entry: 0x001038e0, Ghidra index: 3305, label: FUN_001038e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
char FUN_001038e0(uint param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int in_ECX;
  int *piVar4;
  
  iVar1 = *(int *)(in_ECX + 4);
  if (iVar1 == 0) {
    return '\0';
  }
  if ((param_1 & 8) == 0) {
    if ((param_1 & 0x10) == 0) goto LAB_00103950;
    iVar3 = *(int *)(in_ECX + 0x94) + 1;
  }
  else {
    iVar3 = *(int *)(in_ECX + 0x94) + -1;
  }
  cVar2 = FUN_00103a70(in_ECX,iVar3);
  if (cVar2 != '\0') {
    if ((*(byte *)(iVar1 + 0x66) & 1) == 0) {
      return cVar2;
    }
    param_1 = 0xebf26601;
    (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x22c))(&param_1);
    return cVar2;
  }
LAB_00103950:
  cVar2 = '\0';
  if ((param_1 & 3) != 0) {
    cVar2 = FUN_00100ea0();
    if (cVar2 == '\0') {
      if ((*(byte *)(iVar1 + 0x66) & 1) == 0) {
        return '\0';
      }
      param_1 = 0xfd890279;
      piVar4 = *(int **)(DAT_00469b58 + 8);
    }
    else {
      if ((*(byte *)(iVar1 + 0x66) & 1) == 0) {
        return cVar2;
      }
      param_1 = 0xf06bc0ab;
      piVar4 = *(int **)(DAT_00469b58 + 8);
    }
    (**(code **)(*piVar4 + 0x22c))(&param_1);
  }
  return cVar2;
}
