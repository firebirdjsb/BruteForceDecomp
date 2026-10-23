/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 38EF1D026435C5058888C5F2E5C93A86AB4701C237404192B9B9A6F15267E09F
 * Entry: 0x00380098, Ghidra index: 13524, label: FUN_00380098
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0041267a;
void FUN_00380098(void)

{
  undefined4 *in_ECX;
  
  FUN_00380fc8(0);
  FUN_00382383();
  *in_ECX = 0;
  *(byte *)(in_ECX + 1) = *(byte *)(in_ECX + 1) & 0xfe;
  DAT_0041267a = DAT_0041267a + -1;
  return;
}
