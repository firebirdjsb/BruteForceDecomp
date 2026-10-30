/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 999C83F564479782590672A70CB8982915A0324921C40ECB7C80CE84280DDB27
 * Entry: 0x0023da90, Ghidra index: 7964, label: FUN_0023da90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00443310;
int FUN_0023da90(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_002ea01d(0x44);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_0023cca0();
  }
  iVar3 = (**(code **)(*DAT_00443310 + 0x40))(param_1);
  if (iVar3 != 0) {
    cVar1 = FUN_0023cd70();
    if (cVar1 != '\0') {
      return iVar2;
    }
  }
  if (iVar2 != 0) {
    FUN_0023ccf0();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iVar2);
  }
  return 0;
}
