/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E3F7C1D139E909E4B6EF4BE0961044EFBC60CB26BA00FF8FE728A5F4EA946637
 * Entry: 0x00312ebe, Ghidra index: 11987, label: CDirectSoundVoice_SetFormat
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
// Source-matched C++17 declarations for original direct calls. Xbox ABI_UNVERIFIED.
extern undefined4 FUN_00312d43(undefined4 param_1,int param_2);
extern void FUN_00311c80(byte *param_1);
extern undefined4 DSOUND__CMcpxVoiceClient_SetMixBins(void);
extern undefined4 DSOUND__CMcpxVoiceClient_SetPitch(void);
void DSOUND__CDirectSoundVoice_SetFormat(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00312d43(param_2,1);
  if (iVar1 == 0) {
    FUN_00311c80(0);
  }
  iVar1 = (**(code **)(**(int **)(param_1 + 0xc) + 0x10))();
  if (-1 < iVar1) {
    iVar1 = DSOUND__CMcpxVoiceClient_SetMixBins();
    if (-1 < iVar1) {
      DSOUND__CMcpxVoiceClient_SetPitch();
    }
  }
  return;
}
