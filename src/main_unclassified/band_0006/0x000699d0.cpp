/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 91A69F477A5B9B926BFCF1E38936E9CA2E71E4EE4F938AD088A2F128BDC3C96E
 * Entry: 0x000699d0, Ghidra index: 1171, label: FUN_000699d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469908;
/* WARNING: Removing unreachable block (ram,0x00069a61) */
/* WARNING: Removing unreachable block (ram,0x00069a1c) */
/* WARNING: Removing unreachable block (ram,0x00069a81) */

undefined4 FUN_000699d0(undefined4 param_1)

{
  int *piVar1;
  char cVar2;
  char *in_EAX;
  int iVar3;
  int *local_4;
  
  if ((in_EAX != (char *)0x0) && (*in_EAX != '\0')) {
    local_4 = (int *)0x0;
    iVar3 = FUN_001a0350(&local_4);
    if ((iVar3 < 0) ||
       (iVar3 = (**(code **)(*DAT_00469908 + 0xc))(DAT_00469908), piVar1 = local_4, iVar3 < 0)) {
      if (local_4 != (int *)0x0) {
        (**(code **)(*local_4 + 8))(local_4);
      }
    }
    else {
      cVar2 = FUN_001a03a0(param_1);
      if (cVar2 != '\0') {
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))(piVar1);
        }
        return 1;
      }
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
        return 0;
      }
    }
  }
  return 0;
}
