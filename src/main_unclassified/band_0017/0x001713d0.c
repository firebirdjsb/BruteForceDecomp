/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 82CD28FCF996D1B9F8837682E75BCA7E797F4729E5D3D6103F9E7900E5BD5B58
 * Entry: 0x001713d0, Ghidra index: 4847, label: FUN_001713d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001713d0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *in_EAX;
  byte bVar4;
  undefined4 *unaff_ESI;
  
  uVar1 = unaff_ESI[3];
  uVar2 = unaff_ESI[2];
  uVar3 = *unaff_ESI;
  in_EAX[1] = unaff_ESI[1];
  *in_EAX = uVar3;
  in_EAX[2] = uVar2;
  in_EAX[3] = uVar1;
  uVar1 = unaff_ESI[7];
  uVar2 = unaff_ESI[6];
  uVar3 = unaff_ESI[5];
  in_EAX[4] = unaff_ESI[4];
  in_EAX[5] = uVar3;
  in_EAX[6] = uVar2;
  in_EAX[7] = uVar1;
  uVar1 = unaff_ESI[0xb];
  uVar2 = unaff_ESI[10];
  uVar3 = unaff_ESI[8];
  in_EAX[9] = unaff_ESI[9];
  in_EAX[8] = uVar3;
  in_EAX[10] = uVar2;
  in_EAX[0xb] = uVar1;
  in_EAX[0xc] = unaff_ESI[0xc];
  in_EAX[0xd] = unaff_ESI[0xd];
  in_EAX[0xe] = unaff_ESI[0xe];
  in_EAX[0xf] = unaff_ESI[0xf];
  in_EAX[0x10] = unaff_ESI[0x10];
  in_EAX[0x11] = unaff_ESI[0x11];
  in_EAX[0x12] = unaff_ESI[0x12];
  in_EAX[0x13] = unaff_ESI[0x13];
  in_EAX[0x14] = unaff_ESI[0x14];
  bVar4 = *(byte *)(in_EAX + 0x15) ^ (*(byte *)(in_EAX + 0x15) ^ *(byte *)(unaff_ESI + 0x15)) & 1;
  *(byte *)(in_EAX + 0x15) = bVar4;
  bVar4 = (*(byte *)(unaff_ESI + 0x15) ^ bVar4) & 2 ^ bVar4;
  *(byte *)(in_EAX + 0x15) = bVar4;
  bVar4 = (*(byte *)(unaff_ESI + 0x15) ^ bVar4) & 4 ^ bVar4;
  *(byte *)(in_EAX + 0x15) = bVar4;
  *(byte *)(in_EAX + 0x15) = (*(byte *)(unaff_ESI + 0x15) ^ bVar4) & 8 ^ bVar4;
  in_EAX[0x16] = unaff_ESI[0x16];
  in_EAX[0x17] = unaff_ESI[0x17];
  in_EAX[0x18] = unaff_ESI[0x18];
  return;
}
