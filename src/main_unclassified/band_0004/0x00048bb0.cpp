/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9178809673B8691EFF1E29BA22E2B5B6D10E2D23069AED50110F16E6EC484A98
 * Entry: 0x00048bb0, Ghidra index: 580, label: FUN_00048bb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_001d59e0(void);
extern void FUN_00049230(void);

void FUN_00048bb0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *in_EAX;
  uint uVar3;
  byte bVar4;
  undefined4 *unaff_ESI;
  
  *unaff_ESI = *in_EAX;
  unaff_ESI[1] = in_EAX[1];
  unaff_ESI[2] = in_EAX[2];
  uVar1 = in_EAX[5];
  uVar2 = in_EAX[4];
  unaff_ESI[3] = in_EAX[3];
  unaff_ESI[4] = uVar2;
  unaff_ESI[5] = uVar1;
  uVar1 = in_EAX[8];
  uVar2 = in_EAX[7];
  unaff_ESI[6] = in_EAX[6];
  unaff_ESI[8] = uVar1;
  unaff_ESI[7] = uVar2;
  uVar3 = unaff_ESI[9] ^ (unaff_ESI[9] ^ in_EAX[9]) & 1;
  unaff_ESI[9] = uVar3;
  uVar3 = (in_EAX[9] ^ uVar3) & 2 ^ uVar3;
  unaff_ESI[9] = uVar3;
  uVar3 = (in_EAX[9] ^ uVar3) & 4 ^ uVar3;
  unaff_ESI[9] = uVar3;
  uVar3 = (in_EAX[9] ^ uVar3) & 8 ^ uVar3;
  unaff_ESI[9] = uVar3;
  uVar3 = (in_EAX[9] ^ uVar3) & 0x10 ^ uVar3;
  unaff_ESI[9] = uVar3;
  uVar3 = (in_EAX[9] ^ uVar3) & 0x20 ^ uVar3;
  unaff_ESI[9] = uVar3;
  uVar3 = (in_EAX[9] ^ uVar3) & 0x40 ^ uVar3;
  unaff_ESI[9] = uVar3;
  uVar3 = (in_EAX[9] ^ uVar3) & 0x80 ^ uVar3;
  unaff_ESI[9] = uVar3;
  unaff_ESI[9] = (in_EAX[9] ^ uVar3) & 0x100 ^ uVar3;
  unaff_ESI[10] = in_EAX[10];
  unaff_ESI[0xb] = in_EAX[0xb];
  unaff_ESI[0xc] = in_EAX[0xc];
  unaff_ESI[0xd] = in_EAX[0xd];
  unaff_ESI[0xe] = in_EAX[0xe];
  unaff_ESI[0x10] = in_EAX[0x10];
  bVar4 = *(byte *)(unaff_ESI + 0x11) ^ (*(byte *)(unaff_ESI + 0x11) ^ *(byte *)(in_EAX + 0x11)) & 1
  ;
  *(byte *)(unaff_ESI + 0x11) = bVar4;
  bVar4 = (*(byte *)(in_EAX + 0x11) ^ bVar4) & 2 ^ bVar4;
  *(byte *)(unaff_ESI + 0x11) = bVar4;
  *(byte *)(unaff_ESI + 0x11) = (*(byte *)(in_EAX + 0x11) ^ bVar4) & 4 ^ bVar4;
  unaff_ESI[0x12] = in_EAX[0x12];
  unaff_ESI[0x14] = in_EAX[0x14];
  bVar4 = *(byte *)(unaff_ESI + 0x15) ^ (*(byte *)(unaff_ESI + 0x15) ^ *(byte *)(in_EAX + 0x15)) & 1
  ;
  *(byte *)(unaff_ESI + 0x15) = bVar4;
  bVar4 = (*(byte *)(in_EAX + 0x15) ^ bVar4) & 2 ^ bVar4;
  *(byte *)(unaff_ESI + 0x15) = bVar4;
  *(byte *)(unaff_ESI + 0x15) = (*(byte *)(in_EAX + 0x15) ^ bVar4) & 4 ^ bVar4;
  unaff_ESI[0x16] = in_EAX[0x16];
  FUN_001d59e0();
  FUN_00049230();
  return;
}
