/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6460140136DF494957F6C6D730BA1B19D9E7A9097610D4212737C73B5E6C6FF8
 * Entry: 0x0033da2e, Ghidra index: 12594, label: FUN_0033da2e
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0033da2e(void)

{
  int iVar1;
  int in_ECX;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar1 = *(int *)(in_ECX + 0x10);
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  FUN_0033c08e(&local_1c);
  *(undefined4 *)(iVar1 + 0x840) = 1;
  *(int *)(in_ECX + 0x18) = *(int *)(in_ECX + 0x10) + 0x84c;
  iVar1 = FUN_0033d9e8(&local_1c);
  if (iVar1 < 0) {
    *(int *)(in_ECX + 0x2c) = iVar1;
    *(undefined4 *)(in_ECX + 0x14) = 1;
    *(undefined4 *)(in_ECX + 0x18) = 0;
  }
  return;
}
