/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2C6B123C40A194B87AC949912398820EDFAACBE324C8E568C7361FEB3D955B7A
 * Entry: 0x00371f90, Ghidra index: 13388, label: D3DDevice_MakeSpace
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037ec88;
void D3D8LTCG__D3DDevice_MakeSpace(void)

{
  D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
  return;
}
