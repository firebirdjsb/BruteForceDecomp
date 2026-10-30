/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AABB064808FD9E699CF2E0BED02BBFD8C41FCC5AA0BB692C06160250636E2CEA
 * Entry: 0x0013f240, Ghidra index: 4046, label: FUN_0013f240
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0013f240(void)

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
       (fVar3 = *(float *)(in_ECX + 4) * *(float *)(in_ECX + 0x40),
       fVar3 < *(float *)(iVar1 + 0x490) != (fVar3 == *(float *)(iVar1 + 0x490)))) {
      FUN_0013e410(0);
      FUN_0010e470();
      *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(in_ECX + 0x40);
      return 2;
    }
  }
  return 0;
}
