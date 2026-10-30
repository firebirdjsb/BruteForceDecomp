/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9345E2B64FCD68A39559968824FA31FFAA295D8D31353A45D50E4C3F88437F5B
 * Entry: 0x0010e910, Ghidra index: 3517, label: FUN_0010e910
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469940;
void FUN_0010e910(void)

{
  char cVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x1c) != 0) {
    FUN_000db3e0(*(int *)(in_ECX + 0x1c));
  }
  if (*(int *)(in_ECX + 0x28) != 0) {
    cVar1 = (**(code **)(*DAT_00469940 + 0x2c))(*(int *)(in_ECX + 0x28));
    if (cVar1 != '\0') {
      (**(code **)(*DAT_00469940 + 0x20))(*(undefined4 *)(in_ECX + 0x28),1);
    }
    *(undefined4 *)(in_ECX + 0x28) = 0;
  }
  return;
}
