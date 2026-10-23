/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A3935CAEC3051FD4E87E9C3FF82B7DC0442F311D192DFD966ACEBFA9837A3164
 * Entry: 0x00311c5b, Ghidra index: 11919, label: CDirectSoundVoiceSettings_SetMixBinVolumes
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void DSOUND__CDirectSoundVoiceSettings_SetMixBinVolumes(uint *param_1)

{
  int *piVar1;
  int in_ECX;
  uint uVar2;
  
  uVar2 = 0;
  if (*param_1 != 0) {
    do {
      piVar1 = (int *)(param_1[1] + uVar2 * 8);
      uVar2 = uVar2 + 1;
      *(int *)(in_ECX + 0x30 + *piVar1 * 4) = piVar1[1];
    } while (uVar2 < *param_1);
  }
  return;
}
