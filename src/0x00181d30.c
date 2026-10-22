/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7FD177628D9BFF4889B3CF34038D35CD3D37A04FD0A6052E3D0D8395B145AC12
 * Entry: 0x00181d30, Ghidra index: 5167, label: FUN_00181d30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_00181d30(int param_1)

{
  int iVar1;
  int in_ECX;
  bool bVar2;
  
  bVar2 = false;
  if (((param_1 != 0) && (*(int *)(in_ECX + 0x68) != 0)) && ((*(byte *)(in_ECX + 0x1c) & 2) != 0)) {
    iVar1 = DSOUND__IDirectSoundBuffer_SetAllParameters(*(int *)(in_ECX + 0x68),param_1,1);
    bVar2 = -1 < iVar1;
  }
  return bVar2;
}
