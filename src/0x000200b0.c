/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 210EB7C09053037AC4943B51C51F9BC02CA40B8C8382CB00F5BE2DAE35753EDB
 * Entry: 0x000200b0, Ghidra index: 172, label: FUN_000200b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000200b0(void)

{
  int in_EAX;
  undefined4 *in_ECX;
  
  *(undefined4 *)(in_EAX + 4) = *in_ECX;
  *(undefined4 *)(in_EAX + 0xc) = in_ECX[1];
  *(undefined4 *)(in_EAX + 8) = in_ECX[2];
  *(undefined4 *)(in_EAX + 0x10) = in_ECX[3];
  *(undefined4 *)(in_EAX + 0x14) = in_ECX[4];
  *(undefined4 *)(in_EAX + 0x18) = in_ECX[5];
  *(uint *)(in_EAX + 0x2c) = (uint)in_ECX[6] >> 9 & 0x1f;
  *(undefined4 *)(in_EAX + 0x30) = in_ECX[0x13];
  *(undefined4 *)(in_EAX + 0x20) = in_ECX[0x14];
  *(undefined4 *)(in_EAX + 0x24) = in_ECX[0x15];
  *(undefined4 *)(in_EAX + 0x1c) = in_ECX[0x16];
  *(undefined4 *)(in_EAX + 0x28) = in_ECX[0x17];
  return;
}
