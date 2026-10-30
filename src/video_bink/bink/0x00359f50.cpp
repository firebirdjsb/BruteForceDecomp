/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3960B360B525E1F9AE86C0354610CB16AA13AA82F164235DCBB6713604FF7997
 * Entry: 0x00359f50, Ghidra index: 13173, label: FUN_00359f50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00359f50(int *param_1,int *param_2)

{
  undefined4 unaff_ESI;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  do {
    do {
      DSOUND__IDirectSoundBuffer_GetCurrentPosition(unaff_ESI,&local_8,&local_4);
      DSOUND__IDirectSoundBuffer_GetCurrentPosition(unaff_ESI,&local_10,&local_c);
      DSOUND__IDirectSoundBuffer_GetCurrentPosition(unaff_ESI,&local_10,&local_c);
    } while (0x3ff < (uint)(local_10 - local_8));
  } while (0x3ff < (uint)(local_c - local_4));
  *param_1 = local_10;
  *param_2 = local_c;
  return;
}
