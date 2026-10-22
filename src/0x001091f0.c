/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AF75A44078D8EE61A01D5DE126D5168D63AE7F5C6618DDA2CFE2A36EBA8E4822
 * Entry: 0x001091f0, Ghidra index: 3399, label: FUN_001091f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
short FUN_001091f0(void)

{
  float fVar1;
  byte bVar2;
  int in_ECX;
  
  fVar1 = *(float *)(in_ECX + 8);
  bVar2 = fVar1 < 2.0 | (byte)((ushort)((ushort)isnan(fVar1) << 10) >> 8) |
          (byte)((ushort)((ushort)(fVar1 == 2.0) << 0xe) >> 8);
  if (fVar1 < 2.0 == (fVar1 == 2.0)) {
    fVar1 = *(float *)(in_ECX + 0xc);
    bVar2 = fVar1 < 10.0 | (byte)((ushort)((ushort)isnan(fVar1) << 10) >> 8) |
            (byte)((ushort)((ushort)(fVar1 == 10.0) << 0xe) >> 8);
    if (fVar1 < 10.0 == (fVar1 == 10.0)) {
      return (ushort)bVar2 << 8;
    }
  }
  *(undefined4 *)(in_ECX + 8) = 0x40000000;
  *(undefined4 *)(in_ECX + 0xc) = 0x41200000;
  return CONCAT11(bVar2,1);
}
