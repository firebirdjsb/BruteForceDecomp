/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5DBE502A845DBB16091B68851D14E6C298112832DA88F98DE3AFB49A3BFAFEA4
 * Entry: 0x000489d0, Ghidra index: 578, label: FUN_000489d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000489d0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *in_EAX;
  byte bVar3;
  undefined4 *unaff_ESI;
  
  *in_EAX = *unaff_ESI;
  uVar1 = unaff_ESI[3];
  uVar2 = unaff_ESI[2];
  in_EAX[1] = unaff_ESI[1];
  in_EAX[2] = uVar2;
  in_EAX[3] = uVar1;
  in_EAX[5] = unaff_ESI[5];
  bVar3 = *(byte *)(in_EAX + 6) ^ (*(byte *)(in_EAX + 6) ^ *(byte *)(unaff_ESI + 6)) & 1;
  *(byte *)(in_EAX + 6) = bVar3;
  bVar3 = (*(byte *)(unaff_ESI + 6) ^ bVar3) & 2 ^ bVar3;
  *(byte *)(in_EAX + 6) = bVar3;
  *(byte *)(in_EAX + 6) = (*(byte *)(unaff_ESI + 6) ^ bVar3) & 4 ^ bVar3;
  in_EAX[7] = unaff_ESI[7];
  in_EAX[9] = unaff_ESI[9];
  bVar3 = *(byte *)(in_EAX + 10) ^ (*(byte *)(in_EAX + 10) ^ *(byte *)(unaff_ESI + 10)) & 1;
  *(byte *)(in_EAX + 10) = bVar3;
  bVar3 = (*(byte *)(unaff_ESI + 10) ^ bVar3) & 2 ^ bVar3;
  *(byte *)(in_EAX + 10) = bVar3;
  *(byte *)(in_EAX + 10) = (*(byte *)(unaff_ESI + 10) ^ bVar3) & 4 ^ bVar3;
  in_EAX[0xb] = unaff_ESI[0xb];
  in_EAX[0xd] = unaff_ESI[0xd];
  bVar3 = *(byte *)(in_EAX + 0xe) ^ (*(byte *)(in_EAX + 0xe) ^ *(byte *)(unaff_ESI + 0xe)) & 1;
  *(byte *)(in_EAX + 0xe) = bVar3;
  bVar3 = (*(byte *)(unaff_ESI + 0xe) ^ bVar3) & 2 ^ bVar3;
  *(byte *)(in_EAX + 0xe) = bVar3;
  *(byte *)(in_EAX + 0xe) = (*(byte *)(unaff_ESI + 0xe) ^ bVar3) & 4 ^ bVar3;
  in_EAX[0xf] = unaff_ESI[0xf];
  *(undefined1 *)(in_EAX + 0x10) = *(undefined1 *)(unaff_ESI + 0x10);
  return;
}
