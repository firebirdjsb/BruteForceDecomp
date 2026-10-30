/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9E76A80A4790AB6AD9D53DFFACD71EC23999307B3DF39BDCADD5E8A0D0C49FD9
 * Entry: 0x0013ba30, Ghidra index: 3993, label: FUN_0013ba30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0013ba30(void)

{
  int iVar1;
  int iVar2;
  float fVar3;
  int in_ECX;
  int iVar4;
  
  if (((((*(byte *)(in_ECX + 0x1c) & 1) == 0) || (*(int *)(in_ECX + 0x18) == 0)) &&
      (iVar1 = *(int *)(in_ECX + 0x18), (*(byte *)(iVar1 + 0x748) & 8) == 0)) &&
     (*(int *)(iVar1 + 0x1f8) != 0)) {
    iVar2 = *(int *)(iVar1 + 0x1fc);
    if (iVar2 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(iVar2 + 0x534);
    }
    if (((iVar4 != 0) &&
        (((((iVar2 == 0 || ((*(byte *)(iVar2 + 0x250) & 4) != 0)) ||
           (((*(byte *)(iVar2 + 0x252) & 2) == 0 ||
            ((*(int *)(iVar1 + 0x214) == 0 || ((*(byte *)(*(int *)(iVar1 + 0x214) + 0x3c) & 1) != 0)
             ))))) || (*(int *)(iVar1 + 0x218) == 0)) ||
         ((*(byte *)(*(int *)(iVar1 + 0x218) + 0x3c) & 1) != 0)))) &&
       (fVar3 = *(float *)(in_ECX + 4) * *(float *)(in_ECX + 0x24),
       fVar3 < *(float *)(iVar1 + 0x490) != (fVar3 == *(float *)(iVar1 + 0x490)))) {
      FUN_0010e470();
      FUN_0013be10();
      *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)(in_ECX + 0x24);
      return 2;
    }
  }
  return 0;
}
