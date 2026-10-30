/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E821FB458A93908F67212BAF848062216D97D4721E3DA41A5533304682EB28F0
 * Entry: 0x00359d60, Ghidra index: 13171, label: FUN_00359d60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00359d60(void)

{
  float10 fVar1;
  uint uVar2;
  int *piVar3;
  int *unaff_ESI;
  int iVar4;
  int local_50;
  uint local_48;
  int *local_44;
  int local_40 [16];
  
  if (*unaff_ESI == 0) {
    return;
  }
  iVar4 = unaff_ESI[7];
  if (0x7fff < iVar4) {
    iVar4 = 0x7fff;
  }
  DSOUND__IDirectSoundBuffer_SetFrequency(*unaff_ESI,unaff_ESI[4]);
  if (iVar4 != 0) {
    fVar1 = (float10)log2((float10)iVar4 * (float10)3.051851e-05);
    local_50 = (int)(longlong)
                    ROUND((float10)0.3010299956639812 * fVar1 * (float10)3333.3333333333335);
    if (-0x2711 < local_50) goto LAB_00359dc1;
  }
  local_50 = -10000;
LAB_00359dc1:
  DSOUND__IDirectSoundBuffer_SetVolume(*unaff_ESI,local_50);
  DSOUND__IDirectSoundBuffer_SetHeadroom(*unaff_ESI,0);
  local_44 = local_40;
  local_48 = unaff_ESI[0x17];
  if (local_48 == 0) {
    local_48 = 6;
    local_40[0] = 0;
    local_40[1] = 0;
    local_40[2] = 1;
    local_40[3] = 0;
    local_40[4] = 2;
    local_40[5] = 0;
    local_40[6] = 3;
    local_40[7] = 0;
    local_40[8] = 4;
    local_40[9] = 0;
    local_40[10] = 5;
    local_40[0xb] = 0;
  }
  else {
    uVar2 = 0;
    if (local_48 != 0) {
      piVar3 = unaff_ESI + 0x19;
      do {
        local_40[uVar2 * 2] = *piVar3;
        local_40[uVar2 * 2 + 1] = 0;
        uVar2 = uVar2 + 1;
        piVar3 = piVar3 + 1;
      } while (uVar2 < local_48);
    }
  }
  DSOUND__IDirectSoundBuffer_SetMixBins(*unaff_ESI,&local_48);
  local_48 = unaff_ESI[0x18];
  if (local_48 != 0) {
    uVar2 = 0;
    if (local_48 != 0) {
      piVar3 = unaff_ESI + 0x29;
      do {
        local_40[uVar2 * 2] = piVar3[-8];
        local_40[uVar2 * 2 + 1] = *piVar3;
        uVar2 = uVar2 + 1;
        piVar3 = piVar3 + 1;
      } while (uVar2 < local_48);
    }
    DSOUND__IDirectSoundBuffer_SetMixBinVolumes_8(*unaff_ESI,&local_48);
  }
  return;
}
