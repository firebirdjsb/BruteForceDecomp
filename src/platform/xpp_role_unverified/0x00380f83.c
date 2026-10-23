/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A540B660FF9A606DA2EF02355705B451066E85C864E421C04A72F40F9894BC82
 * Entry: 0x00380f83, Ghidra index: 13544, label: FUN_00380f83
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_00412800;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00380f83(void)

{
  int in_ECX;
  
  if (*(byte *)(in_ECX + 2) != 0x80) {
    return (uint)*(byte *)(in_ECX + 2) * 0x20 + _DAT_00412800;
  }
  return 0;
}
