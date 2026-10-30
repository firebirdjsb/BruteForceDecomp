/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 65D29957CB926806A476410215B17690526B29481B0F2C71C247710A8B70E975
 * Entry: 0x00048ab0, Ghidra index: 579, label: FUN_00048ab0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0008f6a0(std::uint32_t guest_esi, std::uint32_t guest_word_0);

void FUN_00048ab0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined4 *unaff_EBX;
  undefined4 *unaff_EDI;
  
  *unaff_EDI = *unaff_EBX;
  unaff_EDI[1] = unaff_EBX[1];
  unaff_EDI[2] = unaff_EBX[2];
  unaff_EDI[3] = unaff_EBX[3];
  unaff_EDI[4] = unaff_EBX[4];
  if (unaff_EDI[6] != unaff_EBX[6]) {
    FUN_0008f6a0(unaff_EBX[6]);
  }
  unaff_EDI[7] = unaff_EBX[7];
  unaff_EDI[8] = unaff_EBX[8];
  unaff_EDI[9] = unaff_EBX[9];
  *(byte *)(unaff_EDI + 10) =
       *(byte *)(unaff_EDI + 10) ^ (*(byte *)(unaff_EBX + 10) ^ *(byte *)(unaff_EDI + 10)) & 1;
  uVar1 = unaff_EBX[0xd];
  uVar2 = unaff_EBX[0xc];
  unaff_EDI[0xb] = unaff_EBX[0xb];
  unaff_EDI[0xc] = uVar2;
  unaff_EDI[0xd] = uVar1;
  uVar1 = unaff_EBX[0x10];
  uVar2 = unaff_EBX[0xf];
  unaff_EDI[0xe] = unaff_EBX[0xe];
  unaff_EDI[0xf] = uVar2;
  unaff_EDI[0x10] = uVar1;
  if (unaff_EDI[0x12] != unaff_EBX[0x12]) {
    FUN_0008f6a0(unaff_EBX[0x12]);
  }
  unaff_EDI[0x13] = unaff_EBX[0x13];
  unaff_EDI[0x15] = unaff_EBX[0x15];
  bVar3 = *(byte *)(unaff_EDI + 0x16) ^
          (*(byte *)(unaff_EDI + 0x16) ^ *(byte *)(unaff_EBX + 0x16)) & 1;
  *(byte *)(unaff_EDI + 0x16) = bVar3;
  bVar3 = (*(byte *)(unaff_EBX + 0x16) ^ bVar3) & 2 ^ bVar3;
  *(byte *)(unaff_EDI + 0x16) = bVar3;
  *(byte *)(unaff_EDI + 0x16) = (*(byte *)(unaff_EBX + 0x16) ^ bVar3) & 4 ^ bVar3;
  unaff_EDI[0x17] = unaff_EBX[0x17];
  unaff_EDI[0x18] = unaff_EBX[0x18];
  return;
}
