/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F5D5D0839740CEEA5604E3DE25A8487F11AD2D4BC93995F4BD508E71F20D3790
 * Entry: 0x00181db0, Ghidra index: 5168, label: FUN_00181db0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00181db0(int param_1)

{
  undefined4 uVar1;
  int unaff_EBX;
  int unaff_EDI;
  undefined1 local_14 [4];
  undefined4 local_10;
  
  uVar1 = 0;
  if ((unaff_EBX != 0) && (*(int *)(unaff_EDI + 0x68) != 0)) {
    *(undefined4 *)(unaff_EDI + 0x70) = *(undefined4 *)(unaff_EBX + 0x30 + param_1 * 4);
    FUN_00183c30(*(undefined4 *)(unaff_EBX + 0x58 + param_1 * 4));
    DSOUND__IDirectSoundBuffer_SetFormat(*(undefined4 *)(unaff_EDI + 0x68),local_14);
    DSOUND__IDirectSoundBuffer_SetPlayRegion
              (*(undefined4 *)(unaff_EDI + 0x68),*(undefined4 *)(unaff_EBX + 0x1c + param_1 * 4),
               *(undefined4 *)(unaff_EDI + 0x70));
    *(undefined4 *)(unaff_EDI + 0x34) = local_10;
    DSOUND__IDirectSoundBuffer_SetFrequency(*(undefined4 *)(unaff_EDI + 0x68),local_10);
    FUN_00182c80(*(undefined4 *)(unaff_EDI + 0x68));
    uVar1 = 1;
  }
  return uVar1;
}
