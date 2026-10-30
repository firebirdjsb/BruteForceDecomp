/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1AC6EC35F14B486A76F890C2A96C8107189CD6FBAE10F15684BD3F6B14A2F83D
 * Entry: 0x002b8de0, Ghidra index: 9864, label: FUN_002b8de0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003bc654;
void FUN_002b8de0(void)

{
  int iVar1;
  uint uVar2;
  uint *unaff_EDI;
  
  if (*unaff_EDI != 0) {
    uVar2 = 0;
    do {
      iVar1 = *(int *)(unaff_EDI[3] + uVar2 * 4);
      if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(iVar1);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *unaff_EDI);
  }
  if (unaff_EDI[3] == 0) {
    if (unaff_EDI[1] == 0) {
      return;
    }
    (*(code *)PTR_FUN_003bc654)(unaff_EDI[1]);
    return;
  }
  (*(code *)PTR_FUN_003bc654)(unaff_EDI[3]);
  return;
}
