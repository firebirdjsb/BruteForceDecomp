/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5A28B3389E68F0B6632738F6EF2E3DB9041A8DB932CC0739D11522D3E6A986B8
 * Entry: 0x00178380, Ghidra index: 4963, label: FUN_00178380
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00178380(void)

{
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  byte bVar1;
  
  *in_EAX = *in_ECX;
  in_EAX[1] = in_ECX[1];
  in_EAX[2] = in_ECX[2];
  in_EAX[3] = in_ECX[3];
  in_EAX[4] = in_ECX[4];
  in_EAX[5] = in_ECX[5];
  in_EAX[6] = in_ECX[6];
  bVar1 = *(byte *)(in_EAX + 7) ^ (*(byte *)(in_EAX + 7) ^ *(byte *)(in_ECX + 7)) & 1;
  *(byte *)(in_EAX + 7) = bVar1;
  *(byte *)(in_EAX + 7) = (*(byte *)(in_ECX + 7) ^ bVar1) & 2 ^ bVar1;
  return;
}
