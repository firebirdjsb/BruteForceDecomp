/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 68B0B95F5B687747A0608945FD6A6C43686D7A83622A01B0A8458A5B9535D952
 * Entry: 0x0028a540, Ghidra index: 9162, label: FUN_0028a540
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469888;
void FUN_0028a540(int param_1)

{
  void *__src;
  
  __src = (void *)(*DAT_00469888 + param_1 * -0x10);
  _memmove((void *)((int)__src + 0x10),__src,param_1 * 0x10);
  if (DAT_00469888[2] <= *DAT_00469888) {
    FUN_0028a460();
  }
  *DAT_00469888 = *DAT_00469888 + 0x10;
  return;
}
