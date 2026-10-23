/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3CE06AB4FC3C989D01CF25B13D7DD00D04986868F3B45DFBEDFC4076A1F9E26D
 * Entry: 0x0034d3de, Ghidra index: 13000, label: FUN_0034d3de
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_fef00144;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0034d3de(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x260) == 0) {
    if (0 < *(int *)(in_ECX + 0x220)) {
      _DAT_fef00144 = 1;
    }
    if ((*(byte *)(*(int *)(in_ECX + 0x24c) + 7) & 0x80) == 0) {
      FUN_0034d090();
      return;
    }
  }
  return;
}
