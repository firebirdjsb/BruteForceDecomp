/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EBD4BE5C1BA52ED4A0D00029BFF6C8FD1EE49C8543F2AF8FEE1AE6BB423DE657
 * Entry: 0x0010e560, Ghidra index: 3513, label: FUN_0010e560
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0010e560(void)

{
  float fVar1;
  int iVar2;
  float fVar3;
  int in_EAX;
  uint3 uVar4;
  
  iVar2 = *(int *)(in_EAX + 0x18);
  fVar1 = *(float *)(iVar2 + 0x490);
  fVar3 = *(float *)(iVar2 + 0x494) * 0.1;
  uVar4 = (uint3)(CONCAT22((short)((uint)iVar2 >> 0x10),
                           (ushort)(fVar3 < fVar1) << 8 | (ushort)(isnan(fVar3) || isnan(fVar1)) << 10 |
                           (ushort)(fVar3 == fVar1) << 0xe) >> 8);
  if (fVar3 >= fVar1 && (fVar3 == fVar1) == 0) {
    return (uint)uVar4 << 8;
  }
  return CONCAT31(uVar4,1);
}
