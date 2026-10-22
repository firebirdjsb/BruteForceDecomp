/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2EE97CD95D5FBB564F90D7F14B528B32AD1F31161395B4016DC4BD1DE03CD81B
 * Entry: 0x0035a200, Ghidra index: 13174, label: FUN_0035a200
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0035a200(void)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *unaff_ESI;
  bool bVar5;
  uint local_8;
  undefined1 local_4 [4];
  
  bVar5 = false;
  unaff_ESI[9] = 1;
  DSOUND__IDirectSoundBuffer_Play(*unaff_ESI,0,0,1);
  unaff_ESI[10] = 0;
  iVar2 = FUN_0035b1a0();
  DSOUND__IDirectSoundBuffer_GetCurrentPosition(*unaff_ESI,&local_8,local_4);
  puVar1 = unaff_ESI + 0xf;
  do {
    DSOUND__IDirectSoundBuffer_GetCurrentPosition(*unaff_ESI,puVar1,unaff_ESI + 0xe);
    if (*puVar1 == local_8) {
      if (!bVar5) {
        iVar3 = FUN_0035b1a0();
        if (0x32 < (uint)(iVar3 - iVar2)) {
          DSOUND__IDirectSoundBuffer_Play(*unaff_ESI,0,0,1);
          unaff_ESI[10] = 0;
          iVar2 = FUN_0035b1a0();
          DSOUND__IDirectSoundBuffer_GetCurrentPosition(*unaff_ESI,&local_8,local_4);
        }
      }
    }
    else {
      bVar5 = true;
    }
  } while ((uint)unaff_ESI[3] < *puVar1);
  uVar4 = FUN_0035b1a0();
  unaff_ESI[0x11] = uVar4;
  return;
}
