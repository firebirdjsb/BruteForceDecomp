/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2AA0A197767D75B868595F5105C8CAA043B2DF50C66AE31908FDCA491A6D81B0
 * Entry: 0x0017f830, Ghidra index: 5132, label: FUN_0017f830
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_0017f830(void)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  int unaff_EDI;
  
  puVar1 = (undefined4 *)(unaff_EDI + 0xd8);
  iVar3 = DSOUND__DirectSoundCreate(0,puVar1,0);
  if (iVar3 < 0) {
    return false;
  }
  DSOUND__DirectSoundUseFullHRTF();
  DSOUND__IDirectSound_SetPosition(*puVar1,0,0,0,1);
  DSOUND__IDirectSound_SetOrientation(*puVar1,0,0,0x3f800000,0,0x3f800000,0,1);
  DSOUND__IDirectSound_SetDistanceFactor(*puVar1,0x3f800000,1);
  cVar2 = FUN_0017f700(unaff_EDI);
  return cVar2 != '\0';
}
