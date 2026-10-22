/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 44436B7A9196784A47F3AA037D804C0254FB6830E6E1A2646775F2D798378352
 * Entry: 0x0031195f, Ghidra index: 11901, label: FUN_0031195f
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0032f798;
extern uint32_t DAT_0032fe6c;
void FUN_0031195f(void)

{
  int unaff_FS_OFFSET;
  
  if ((*(int *)(unaff_FS_OFFSET + 0x58) != 0) &&
     (DAT_0032f798 = DAT_0032f798 + -1, DAT_0032f798 == 0)) {
    KeRestoreFloatingPointState(&DAT_0032fe6c);
  }
  return;
}
