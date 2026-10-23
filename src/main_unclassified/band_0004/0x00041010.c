/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FE49E569BC475E0064D6E13300F231C3B34A9D1FCFA0CA4850DFCC79AE94D90F
 * Entry: 0x00041010, Ghidra index: 492, label: FUN_00041010
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00041010(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  byte bVar3;
  
  bVar3 = *(byte *)(in_EAX + 4) ^ (*(byte *)(in_EAX + 4) ^ *(byte *)(in_ECX + 4)) & 1;
  *(byte *)(in_EAX + 4) = bVar3;
  uVar1 = in_ECX[2];
  uVar2 = in_ECX[1];
  *in_EAX = *in_ECX;
  in_EAX[1] = uVar2;
  in_EAX[2] = uVar1;
  in_EAX[3] = in_ECX[3];
  *(byte *)(in_EAX + 4) = *(byte *)(in_EAX + 4) ^ (bVar3 ^ *(byte *)(in_ECX + 4)) & 2;
  return;
}
