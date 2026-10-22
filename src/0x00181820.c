/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C40D0C97618FE5E9A98E6D0F15FF5BC7148720732EA205F682D49DB91DB716FD
 * Entry: 0x00181820, Ghidra index: 5163, label: FUN_00181820
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_00181820(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int in_ECX;
  bool bVar2;
  
  bVar2 = false;
  if (*(int *)(in_ECX + 0x68) != 0) {
    *(undefined4 *)(in_ECX + 0x74) = *param_1;
    iVar1 = DSOUND__IDirectSoundBuffer_SetBufferData(*(undefined4 *)(in_ECX + 0x68),param_2,param_3)
    ;
    bVar2 = -1 < iVar1;
  }
  return bVar2;
}
