/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 61D54BB55301C03CCE9664C0947C341032D08FC20168E2F80B498319E94C7DB0
 * Entry: 0x0014a2f0, Ghidra index: 4287, label: FUN_0014a2f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
char FUN_0014a2f0(undefined4 param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int in_ECX;
  float10 fVar4;
  
  cVar1 = FUN_00157c40(param_1);
  if (cVar1 == '\0') {
    return '\0';
  }
  if ((*(byte *)(in_ECX + 0x1bc) & 1) == 0) {
    *(byte *)(in_ECX + 0x1bc) = *(byte *)(in_ECX + 0x1bc) | 1;
    cVar2 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x24))();
    if (((cVar2 != '\0') && (*(int *)(in_ECX + 0x1b0) != 0)) && (iVar3 = FUN_00146370(), iVar3 != 0)
       ) {
      iVar3 = *(int *)(*(int *)(in_ECX + 0xc) + 0x1c8);
      if (iVar3 == 1) {
        fVar4 = (float10)FUN_00077e80();
        if (fVar4 == (float10)0.0) {
          return '\0';
        }
      }
      else if ((iVar3 == 2) && (fVar4 = (float10)FUN_00077e80(), fVar4 != (float10)0.0)) {
        return '\0';
      }
    }
  }
  if ((*(int *)(in_ECX + 0x1b0) != 0) &&
     ((iVar3 = FUN_0014ab50(), *(int *)(iVar3 + 0x5e4) != 0 ||
      (((*(byte *)(iVar3 + 0x70) & 1) == 0 &&
       ((*(uint *)(*(int *)(iVar3 + 0x6c) + 0x44) >> 10 & 1) == 0)))))) {
    FUN_00156290(param_1);
  }
  (**(code **)**(undefined4 **)(*(int *)(in_ECX + 0xc) + 0x15c))();
  FUN_0014a8e0(param_1);
  return cVar1;
}
