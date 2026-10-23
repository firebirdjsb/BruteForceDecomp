/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 75D9EC43328BB7E3AC7F84FEA3D4B4C3A26614D1EA172CCAED3DA9EE89401F8E
 * Entry: 0x00226010, Ghidra index: 7639, label: FUN_00226010
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00226010(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  byte *unaff_EBX;
  byte *unaff_EDI;
  
  bVar3 = *unaff_EDI ^ (*unaff_EBX ^ *unaff_EDI) & 1;
  *unaff_EDI = bVar3;
  bVar3 = (*unaff_EBX ^ bVar3) & 2 ^ bVar3;
  *unaff_EDI = bVar3;
  bVar3 = (*unaff_EBX ^ bVar3) & 4 ^ bVar3;
  *unaff_EDI = bVar3;
  bVar3 = (*unaff_EBX ^ bVar3) & 8 ^ bVar3;
  *unaff_EDI = bVar3;
  bVar3 = (*unaff_EBX ^ bVar3) & 0x10 ^ bVar3;
  *unaff_EDI = bVar3;
  bVar3 = (*unaff_EBX ^ bVar3) & 0x20 ^ bVar3;
  *unaff_EDI = bVar3;
  bVar3 = (*unaff_EBX ^ bVar3) & 0x40 ^ bVar3;
  *unaff_EDI = bVar3;
  *unaff_EDI = (*unaff_EBX ^ bVar3) & 0x7f ^ *unaff_EBX;
  unaff_EDI[1] = unaff_EBX[1];
  unaff_EDI[2] = unaff_EBX[2];
  unaff_EDI[3] = unaff_EBX[3];
  uVar1 = *(undefined4 *)(unaff_EBX + 0xc);
  uVar2 = *(undefined4 *)(unaff_EBX + 8);
  *(undefined4 *)(unaff_EDI + 4) = *(undefined4 *)(unaff_EBX + 4);
  *(undefined4 *)(unaff_EDI + 8) = uVar2;
  *(undefined4 *)(unaff_EDI + 0xc) = uVar1;
  uVar1 = *(undefined4 *)(unaff_EBX + 0x18);
  uVar2 = *(undefined4 *)(unaff_EBX + 0x14);
  *(undefined4 *)(unaff_EDI + 0x10) = *(undefined4 *)(unaff_EBX + 0x10);
  *(undefined4 *)(unaff_EDI + 0x14) = uVar2;
  *(undefined4 *)(unaff_EDI + 0x18) = uVar1;
  *(undefined4 *)(unaff_EDI + 0x1c) = *(undefined4 *)(unaff_EBX + 0x1c);
  *(undefined4 *)(unaff_EDI + 0x20) = *(undefined4 *)(unaff_EBX + 0x20);
  *(undefined4 *)(unaff_EDI + 0x24) = *(undefined4 *)(unaff_EBX + 0x24);
  *(undefined4 *)(unaff_EDI + 0x28) = *(undefined4 *)(unaff_EBX + 0x28);
  *(undefined4 *)(unaff_EDI + 0x2c) = *(undefined4 *)(unaff_EBX + 0x2c);
  *(undefined4 *)(unaff_EDI + 0x30) = *(undefined4 *)(unaff_EBX + 0x30);
  *(undefined4 *)(unaff_EDI + 0x34) = *(undefined4 *)(unaff_EBX + 0x34);
  *(undefined4 *)(unaff_EDI + 0x38) = *(undefined4 *)(unaff_EBX + 0x38);
  *(undefined4 *)(unaff_EDI + 0x3c) = *(undefined4 *)(unaff_EBX + 0x3c);
  *(undefined4 *)(unaff_EDI + 0x40) = *(undefined4 *)(unaff_EBX + 0x40);
  unaff_EDI[0x48] = 0;
  unaff_EDI[0x49] = 0;
  unaff_EDI[0x4a] = 0;
  unaff_EDI[0x4b] = 0;
  if (*(int *)(unaff_EBX + 0x48) != 0) {
    FUN_0008f6a0(*(int *)(unaff_EBX + 0x48));
  }
  unaff_EDI[0x50] = 0;
  unaff_EDI[0x51] = 0;
  unaff_EDI[0x52] = 0;
  unaff_EDI[0x53] = 0;
  if (*(int *)(unaff_EBX + 0x50) != 0) {
    FUN_0008f6a0(*(int *)(unaff_EBX + 0x50));
  }
  *(undefined4 *)(unaff_EDI + 0x54) = *(undefined4 *)(unaff_EBX + 0x54);
  FUN_00226190(unaff_EDI + 0x58);
  *(undefined4 *)(unaff_EDI + 100) = *(undefined4 *)(unaff_EBX + 100);
  unaff_EDI[0x6c] = 0;
  unaff_EDI[0x6d] = 0;
  unaff_EDI[0x6e] = 0;
  unaff_EDI[0x6f] = 0;
  if (*(int *)(unaff_EBX + 0x6c) != 0) {
    FUN_0008f6a0(*(int *)(unaff_EBX + 0x6c));
  }
  uVar1 = *(undefined4 *)(unaff_EBX + 0x74);
  uVar2 = *(undefined4 *)(unaff_EBX + 0x70);
  *(undefined4 *)(unaff_EDI + 0x78) = *(undefined4 *)(unaff_EBX + 0x78);
  *(undefined4 *)(unaff_EDI + 0x70) = uVar2;
  *(undefined4 *)(unaff_EDI + 0x74) = uVar1;
  return;
}
