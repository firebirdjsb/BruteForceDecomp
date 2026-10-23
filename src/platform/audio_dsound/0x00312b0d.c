/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F71BED58724B6DEC1F048050C902CF9E154A56459EB7B98F1CF906C9FC646C87
 * Entry: 0x00312b0d, Ghidra index: 11964, label: IDirectSoundBuffer_Stop
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void DSOUND__IDirectSoundBuffer_Stop(int param_1)

{
  CDirectSoundBuffer_Stop(-(uint)(param_1 != 0) & param_1 - 0x1cU);
  return;
}
