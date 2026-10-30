/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 720EF972B1B15CB7566C0383C591E7A465D8295C9BEBE98DBB9A61D8B16B79E6
 * Entry: 0x003111f0, Ghidra index: 11827, label: FUN_003111f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040051c;
extern uint32_t DAT_00400530;
extern uint32_t _DAT_0040052c;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003111f0(void)

{
  if (0xf < DAT_00400530) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(DAT_0040051c);
  }
  DAT_00400530 = 0xf;
  _DAT_0040052c = 0;
  DAT_0040051c = DAT_0040051c & 0xffffff00;
  return;
}
