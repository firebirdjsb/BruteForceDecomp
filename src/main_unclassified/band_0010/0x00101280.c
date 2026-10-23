/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0A1EFEA8005C4676502085257C4C409373183D720AF2218BD24B0BF4A363B1A4
 * Entry: 0x00101280, Ghidra index: 3238, label: FUN_00101280
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00101280(void)

{
  byte *in_EAX;
  byte bVar1;
  byte *unaff_ESI;
  
  bVar1 = *in_EAX ^ (*unaff_ESI ^ *in_EAX) & 1;
  *in_EAX = bVar1;
  bVar1 = (*unaff_ESI ^ bVar1) & 2 ^ bVar1;
  *in_EAX = bVar1;
  bVar1 = (*unaff_ESI ^ bVar1) & 4 ^ bVar1;
  *in_EAX = bVar1;
  bVar1 = (*unaff_ESI ^ bVar1) & 8 ^ bVar1;
  *in_EAX = bVar1;
  *in_EAX = (*unaff_ESI ^ bVar1) & 0x10 ^ bVar1;
  *(undefined4 *)(in_EAX + 4) = *(undefined4 *)(unaff_ESI + 4);
  *(undefined4 *)(in_EAX + 8) = *(undefined4 *)(unaff_ESI + 8);
  *(undefined4 *)(in_EAX + 0xc) = *(undefined4 *)(unaff_ESI + 0xc);
  *(undefined4 *)(in_EAX + 0x10) = *(undefined4 *)(unaff_ESI + 0x10);
  return;
}
