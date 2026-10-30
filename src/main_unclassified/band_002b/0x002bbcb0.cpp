/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 379F192CC31C0CE07FF5B5732466BEDC69E0B9D7CB20835993A991247F580594
 * Entry: 0x002bbcb0, Ghidra index: 9911, label: FUN_002bbcb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003bc654;
void FUN_002bbcb0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined2 *unaff_ESI;
  
  if (((byte)*param_1 & 0xc) == 4) {
    uVar1 = FUN_002b2b80();
    FUN_002beda0(param_1[0x18],uVar1);
  }
  else {
    param_1[0x18] = 0;
  }
  if (unaff_ESI != (undefined2 *)0x0) {
    if (unaff_ESI[4] != 0) {
      if (*(int *)(unaff_ESI + 2) != 0) {
        (*(code *)PTR_FUN_003bc654)(*(int *)(unaff_ESI + 2));
        return;
      }
      *unaff_ESI = 0;
      unaff_ESI[4] = 0;
    }
    unaff_ESI[1] = 0;
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
