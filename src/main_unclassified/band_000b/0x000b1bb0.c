/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D360E5D718DC6439E0C5522AF0664C2C99367C81941BD6993E839479851CDD15
 * Entry: 0x000b1bb0, Ghidra index: 2131, label: FUN_000b1bb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_000b1bb0(byte param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  if (((*(int *)(in_ECX + 0xa4) != *(int *)(in_ECX + 0xa0)) &&
      (iVar1 = *(int *)(in_ECX + 100 + *(int *)(in_ECX + 0xa4) * 4),
      (*(byte *)(iVar1 + 0x13) & 1) == 0)) && (*(float *)(iVar1 + 0x4c) < *(float *)(in_ECX + 0xa8))
     ) {
    if ((((*(byte *)(iVar1 + 0x5c) & 1) == param_1) && (param_2 != '\0')) &&
       ((*(byte *)(iVar1 + 0x5c) & 2) == 0)) {
      return iVar1;
    }
    if (*(float *)(iVar1 + 0x4c) < *(float *)(in_ECX + 0xa8) * 0.5) {
      *(float *)(iVar1 + 0x4c) =
           (3.0 / *(float *)(iVar1 + 0x50)) * *(float *)(iVar1 + 0x54) + *(float *)(iVar1 + 0x4c);
    }
  }
  iVar1 = *(int *)(in_ECX + 0xa0);
  iVar2 = *(int *)(in_ECX + 100 + iVar1 * 4);
  *(int *)(in_ECX + 0xa4) = iVar1;
  *(int *)(in_ECX + 0xa0) = iVar1 + 1;
  if (0xe < iVar1 + 1) {
    *(undefined4 *)(in_ECX + 0xa0) = 0;
    *(undefined4 *)(iVar2 + 0x4c) = 0;
    *(undefined4 *)(iVar2 + 0x58) = 0;
    *(byte *)(iVar2 + 0x5c) = *(byte *)(iVar2 + 0x5c) & 0xfc;
    return iVar2;
  }
  *(undefined4 *)(iVar2 + 0x4c) = 0;
  *(undefined4 *)(iVar2 + 0x58) = 0;
  *(byte *)(iVar2 + 0x5c) = *(byte *)(iVar2 + 0x5c) & 0xfc;
  return iVar2;
}
