/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D1B89CE7622890C96501320BC2AA1CA1D44974164D061AE187235CB120E15473
 * Entry: 0x001743c0, Ghidra index: 4906, label: FUN_001743c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003bc930;
void FUN_001743c0(void)

{
  int *piVar1;
  int unaff_EDI;
  undefined1 local_4 [4];
  
  while ((DAT_003bc930 == '\x01' &&
         (piVar1 = (int *)**(int **)(unaff_EDI + 4), piVar1 != *(int **)(unaff_EDI + 4)))) {
    if (*(int *)(unaff_EDI + 0x10) != 0) {
      FUN_000dea70(piVar1[4]);
    }
    FUN_00173430();
    if (piVar1[4] != 0) {
      (*(code *)**(undefined4 **)(piVar1[4] + 4))(1);
    }
    FUN_0012a450(unaff_EDI,local_4,piVar1);
  }
  return;
}
