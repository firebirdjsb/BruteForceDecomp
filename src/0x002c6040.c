/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4507CBA9FEBA57007315472664CC88420CD292DDC092A0103C8B1D8F750FC237
 * Entry: 0x002c6040, Ghidra index: 10077, label: FUN_002c6040
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002c6040(float *param_1)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  
  if (1 < *(short *)(in_ECX + 0x4a)) {
    uVar2 = (uint)*(ushort *)(in_ECX + 0x3e);
    while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
      FUN_002c3d90(*(undefined4 *)(*(int *)(in_ECX + 0x40) + uVar2 * 4),param_1);
    }
    FUN_002c44e0();
    return;
  }
  iVar1 = *(int *)(in_ECX + 0x20);
  FUN_002c3cf0(iVar1,*(float *)(iVar1 + 0x54) * *(float *)(iVar1 + 0x44) * *(float *)(iVar1 + 0x30)
                     * *param_1 * *param_1);
  if (*(char *)(iVar1 + 0x34) != '\x01') {
    FUN_002c2fc0(iVar1,param_1);
    return;
  }
  FUN_002c37d0(iVar1,param_1);
  return;
}
