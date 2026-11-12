/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C95989046E8BB12511BDD292419A1F648BA761E4FC0F4CB5794021271E0244BA
 * Entry: 0x00312f02, Ghidra index: 11988, label: CDirectSoundVoice_SetFrequency
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
// Source-matched C++17 declarations for original direct calls. Xbox ABI_UNVERIFIED.
extern undefined4 DSOUND__XAudioCalculatePitch(int param_1);
extern void DSOUND__CDirectSoundVoice_SetPitch(int param_1,undefined4 param_2);
void DSOUND__CDirectSoundVoice_SetFrequency(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    param_2 = *(int *)(*(int *)(param_1 + 0x10) + 0x10);
  }
  uVar1 = DSOUND__XAudioCalculatePitch(param_2);
  DSOUND__CDirectSoundVoice_SetPitch(param_1,uVar1);
  return;
}
