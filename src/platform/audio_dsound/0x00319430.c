/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2E040DA0F44DB0B898CA42F06C26BED537B5084D407505A6DBDF27CDA3EF66B2
 * Entry: 0x00319430, Ghidra index: 12223, label: FUN_00319430
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00319430(void)

{
  int iVar1;
  int in_ECX;
  undefined4 uVar2;
  
  uVar2 = 0;
  if ((*(ushort *)(in_ECX + 0x12) & 0x100) == 0) {
    FUN_00318d9f();
    iVar1 = FUN_0031aed2(*(undefined4 *)(*(int *)(in_ECX + 0x88) + 0xb8),
                         *(undefined4 *)(*(int *)(in_ECX + 0x88) + 0xbc));
    *(int *)(in_ECX + 0x8c) = iVar1;
    if (iVar1 == 0) {
      uVar2 = 0x8007000e;
      FUN_00318e15();
    }
    else {
      FUN_00318da3(*(undefined4 *)(*(int *)(in_ECX + 0x88) + 0xc0));
    }
  }
  return uVar2;
}
