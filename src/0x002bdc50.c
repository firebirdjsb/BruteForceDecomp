/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6BEC51D65051F939A195D51413E6133892CDEF99104C183479F5BF9C56E2C137
 * Entry: 0x002bdc50, Ghidra index: 9959, label: FUN_002bdc50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003bc654;
void FUN_002bdc50(void)

{
  int in_EAX;
  
  FUN_002bda00();
  if (*(short *)(in_EAX + 0x28) != 0) {
    if (*(int *)(in_EAX + 0x24) != 0) {
      (*(code *)PTR_FUN_003bc654)(*(int *)(in_EAX + 0x24));
      return;
    }
    *(undefined2 *)(in_EAX + 0x20) = 0;
    *(undefined2 *)(in_EAX + 0x28) = 0;
  }
  *(undefined2 *)(in_EAX + 0x22) = 0;
  if (*(short *)(in_EAX + 0x14) != 0) {
    if (*(int *)(in_EAX + 0x10) != 0) {
      (*(code *)PTR_FUN_003bc654)(*(int *)(in_EAX + 0x10));
      return;
    }
    *(undefined2 *)(in_EAX + 0xc) = 0;
    *(undefined2 *)(in_EAX + 0x14) = 0;
  }
  *(undefined2 *)(in_EAX + 0xe) = 0;
  return;
}
