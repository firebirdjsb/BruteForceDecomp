/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8097A924E91B801BDC0E34CE225A77A8F9D4E2A98757A63B6C2099535F380777
 * Entry: 0x0031386a, Ghidra index: 12017, label: IDirectSound_CommitDeferredSettings
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void DSOUND__IDirectSound_CommitDeferredSettings(int param_1)

{
  CDirectSound_CommitDeferredSettings(-(uint)(param_1 != 0) & param_1 - 8U);
  return;
}
