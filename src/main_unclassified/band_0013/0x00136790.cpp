/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C7D8211B6670775DD296F93EC2204890FAAC28311DFDF1394D3AE1301E45C866
 * Entry: 0x00136790, Ghidra index: 3891, label: FUN_00136790
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00136790(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(byte *)(in_ECX + 0x18) =
       *(byte *)(in_ECX + 0x18) ^ (*(byte *)(param_1 + 0x18) ^ *(byte *)(in_ECX + 0x18)) & 1;
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  FUN_00137500();
  return;
}
