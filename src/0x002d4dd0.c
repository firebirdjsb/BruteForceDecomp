/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DC555CA1824DA48C95B05D78F9281EF34002556603D4A698F8D439D07C9C8089
 * Entry: 0x002d4dd0, Ghidra index: 10213, label: FUN_002d4dd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003bc654;
void FUN_002d4dd0(void)

{
  int unaff_ESI;
  
  if (*(short *)(unaff_ESI + 0x28) != 0) {
    if (*(int *)(unaff_ESI + 0x24) != 0) {
      (*(code *)PTR_FUN_003bc654)(*(int *)(unaff_ESI + 0x24));
      return;
    }
    *(undefined2 *)(unaff_ESI + 0x20) = 0;
    *(undefined2 *)(unaff_ESI + 0x28) = 0;
  }
  *(undefined2 *)(unaff_ESI + 0x22) = 0;
  if (*(short *)(unaff_ESI + 0x1c) != 0) {
    if (*(int *)(unaff_ESI + 0x18) != 0) {
      (*(code *)PTR_FUN_003bc654)(*(int *)(unaff_ESI + 0x18));
      return;
    }
    *(undefined2 *)(unaff_ESI + 0x14) = 0;
    *(undefined2 *)(unaff_ESI + 0x1c) = 0;
  }
  *(undefined2 *)(unaff_ESI + 0x16) = 0;
  if (*(short *)(unaff_ESI + 0x10) != 0) {
    if (*(int *)(unaff_ESI + 0xc) != 0) {
      (*(code *)PTR_FUN_003bc654)(*(int *)(unaff_ESI + 0xc));
      return;
    }
    *(undefined2 *)(unaff_ESI + 8) = 0;
    *(undefined2 *)(unaff_ESI + 0x10) = 0;
  }
  *(undefined2 *)(unaff_ESI + 10) = 0;
  return;
}
