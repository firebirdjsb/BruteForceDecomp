/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D91CCBF52A6D6429CF3F12A8F935B3359C197D14C251A239EBDC54183C1BC7ED
 * Entry: 0x0006b9c0, Ghidra index: 1216, label: FUN_0006b9c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0006b9c0(int param_1)

{
  int in_ECX;
  
  *(byte *)(in_ECX + 0xc) =
       *(byte *)(in_ECX + 0xc) ^ (*(char *)(param_1 + 0xd) << 1 ^ *(byte *)(in_ECX + 0xc)) & 2;
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)(param_1 + 0x18);
  *(undefined1 *)(in_ECX + 0x24) = *(undefined1 *)(param_1 + 0x1c);
  *(undefined4 *)(in_ECX + 0x2c) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(in_ECX + 0x30) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(param_1 + 0x3c);
  return;
}
