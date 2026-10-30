/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A2AEBFEE7B19220D51A87447458918BDA548B7CB1021AB923995B3FF42B48C0A
 * Entry: 0x002c92c0, Ghidra index: 10135, label: FUN_002c92c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003bc654;
void FUN_002c92c0(void)

{
  int unaff_ESI;
  
  if (*(short *)(unaff_ESI + 0x18) != 0) {
    if (*(int *)(unaff_ESI + 0x14) != 0) {
      (*(code *)PTR_FUN_003bc654)(*(int *)(unaff_ESI + 0x14));
      return;
    }
    *(undefined2 *)(unaff_ESI + 0x10) = 0;
    *(undefined2 *)(unaff_ESI + 0x18) = 0;
  }
  *(undefined2 *)(unaff_ESI + 0x12) = 0;
  if (*(short *)(unaff_ESI + 0xc) != 0) {
    if (*(int *)(unaff_ESI + 8) != 0) {
      (*(code *)PTR_FUN_003bc654)(*(int *)(unaff_ESI + 8));
      return;
    }
    *(undefined2 *)(unaff_ESI + 4) = 0;
    *(undefined2 *)(unaff_ESI + 0xc) = 0;
  }
  *(undefined2 *)(unaff_ESI + 6) = 0;
  return;
}
