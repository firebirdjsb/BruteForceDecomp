/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 33EFC2FA8721048A287A27DC90FEA3A519FE1FE148FAC897B09ECA1A73AD2EFD
 * Entry: 0x00183240, Ghidra index: 5195, label: FUN_00183240
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_00183240(int param_1)

{
  int iVar1;
  int in_ECX;
  bool bVar2;
  
  bVar2 = false;
  if (((param_1 != 0) && (*(int *)(in_ECX + 0x74) != 0)) && ((*(byte *)(in_ECX + 0x1c) & 2) != 0)) {
    iVar1 = DSOUND__IDirectSoundStream_SetAllParameters(*(int *)(in_ECX + 0x74),param_1,1);
    bVar2 = -1 < iVar1;
  }
  return bVar2;
}
