/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 19ED6963796346CA5EC5BF2EF3B75AE41CAAC2E991B9CFE4277C9FA4B28761EB
 * Entry: 0x000ce140, Ghidra index: 2552, label: FUN_000ce140
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_000ce140(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int in_ECX;
  int in_EDX;
  
  fVar1 = *(float *)(in_EDX + *(int *)(in_ECX + 0x28) * 0xc + 8);
  fVar2 = *(float *)(in_EDX + *(int *)(in_ECX + 0x28) * 0xc) -
          *(float *)(in_EDX + *(int *)(in_ECX + 0x24) * 0xc);
  fVar4 = fVar1 - *(float *)(in_EDX + *(int *)(in_ECX + 0x24) * 0xc + 8);
  fVar3 = SQRT(fVar2 * fVar2 + fVar4 * fVar4);
  if (fVar3 < 1.1920929e-07) {
    return CONCAT22((short)((uint)fVar1 >> 0x10),
                    (ushort)(fVar3 < 1.1920929e-07) << 8 | (ushort)isnan(fVar3) << 10 |
                    (ushort)(fVar3 == 1.1920929e-07) << 0xe);
  }
  *(undefined4 *)(in_ECX + 0x44) = 0;
  *(float *)(in_ECX + 0x40) = (1.0 / fVar3) * fVar2;
  *(float *)(in_ECX + 0x48) = fVar4 * (1.0 / fVar3);
  *(float *)(in_ECX + 0x34) = -*(float *)(in_ECX + 0x48);
  *(undefined4 *)(in_ECX + 0x38) = 0;
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(in_ECX + 0x40);
  return 1;
}
