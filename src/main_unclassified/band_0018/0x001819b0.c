/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 61707EAD0DF39BB59DB9AF1FEEC8FBF2057A547C6272F83508CC8631F8283872
 * Entry: 0x001819b0, Ghidra index: 5165, label: FUN_001819b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001819b0(byte param_1)

{
  int iVar1;
  uint3 uVar3;
  uint uVar2;
  int in_ECX;
  undefined4 uVar4;
  
  if (*(int *)(in_ECX + 0x68) == 0) {
    return 0;
  }
  uVar4 = 2;
  if (param_1 != 0) {
    uVar4 = 3;
  }
  iVar1 = DSOUND__IDirectSoundBuffer_Play(*(int *)(in_ECX + 0x68),0,0,uVar4);
  uVar3 = (uint3)((uint)iVar1 >> 8);
  if (-1 < iVar1) {
    uVar2 = CONCAT31(uVar3,*(byte *)(in_ECX + 0x6c) ^ param_1) & 0xffffff01;
    *(undefined4 *)(in_ECX + 0x38) = 0xffffffff;
    *(byte *)(in_ECX + 0x6c) = *(byte *)(in_ECX + 0x6c) ^ (byte)uVar2;
    return CONCAT31((int3)(uVar2 >> 8),1);
  }
  return (uint)uVar3 << 8;
}
