/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 554F08F63FF579A76DEFD8F85A0ACDC9E7E9EEF55E7DFE1F65473CB53725E2C9
 * Entry: 0x000e20c0, Ghidra index: 2787, label: FUN_000e20c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000e20c0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined4 *unaff_EBX;
  undefined4 *unaff_EDI;
  
  *unaff_EDI = *unaff_EBX;
  uVar1 = unaff_EBX[3];
  uVar2 = unaff_EBX[2];
  unaff_EDI[1] = unaff_EBX[1];
  unaff_EDI[2] = uVar2;
  unaff_EDI[3] = uVar1;
  uVar1 = unaff_EBX[6];
  uVar2 = unaff_EBX[5];
  unaff_EDI[4] = unaff_EBX[4];
  unaff_EDI[5] = uVar2;
  unaff_EDI[6] = uVar1;
  uVar1 = unaff_EBX[9];
  uVar2 = unaff_EBX[8];
  unaff_EDI[7] = unaff_EBX[7];
  unaff_EDI[8] = uVar2;
  unaff_EDI[9] = uVar1;
  uVar1 = unaff_EBX[0xc];
  uVar2 = unaff_EBX[0xb];
  unaff_EDI[10] = unaff_EBX[10];
  unaff_EDI[0xb] = uVar2;
  unaff_EDI[0xc] = uVar1;
  unaff_EDI[0xd] = unaff_EBX[0xd];
  unaff_EDI[0xe] = unaff_EBX[0xe];
  unaff_EDI[0xf] = unaff_EBX[0xf];
  unaff_EDI[0x11] = 0;
  if (unaff_EBX[0x11] != 0) {
    FUN_0008f6a0(unaff_EBX[0x11]);
  }
  unaff_EDI[0x12] = unaff_EBX[0x12];
  unaff_EDI[0x13] = unaff_EBX[0x13];
  unaff_EDI[0x14] = unaff_EBX[0x14];
  unaff_EDI[0x15] = unaff_EBX[0x15];
  bVar3 = *(byte *)(unaff_EDI + 0x16) ^
          (*(byte *)(unaff_EDI + 0x16) ^ *(byte *)(unaff_EBX + 0x16)) & 1;
  *(byte *)(unaff_EDI + 0x16) = bVar3;
  bVar3 = (*(byte *)(unaff_EBX + 0x16) ^ bVar3) & 2 ^ bVar3;
  *(byte *)(unaff_EDI + 0x16) = bVar3;
  bVar3 = (*(byte *)(unaff_EBX + 0x16) ^ bVar3) & 4 ^ bVar3;
  *(byte *)(unaff_EDI + 0x16) = bVar3;
  *(byte *)(unaff_EDI + 0x16) = (*(byte *)(unaff_EBX + 0x16) ^ bVar3) & 8 ^ bVar3;
  unaff_EDI[0x17] = unaff_EBX[0x17];
  return;
}
