/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C31F263D0E770217D9C7C01726829B8B133FFC453757192AE63AD74710C1E6A0
 * Entry: 0x000cdc40, Ghidra index: 2542, label: FUN_000cdc40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000cdc40(void)

{
  byte bVar1;
  int in_EAX;
  int in_ECX;
  undefined4 local_30;
  byte local_2c [4];
  undefined4 local_28;
  undefined1 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_18;
  undefined1 local_14;
  undefined4 local_10;
  undefined1 local_c;
  undefined4 local_8;
  undefined1 local_4;
  
  local_2c[0] = 0;
  local_24 = 0;
  local_1c = 0;
  local_14 = 1;
  local_c = 1;
  local_4 = 1;
  local_20 = 0xea20ad9;
  local_8 = 0xea20ad9;
  local_30 = 0xf9d40e62;
  local_28 = 0xef2532de;
  local_18 = 0xf9d40e62;
  local_10 = 0xef2532de;
  bVar1 = local_2c[in_ECX * 8];
  *(undefined4 *)(in_EAX + 0x1c) = (&local_30)[in_ECX * 2];
  *(byte *)(in_EAX + 0x24) = *(byte *)(in_EAX + 0x24) ^ (bVar1 ^ *(byte *)(in_EAX + 0x24)) & 1;
  return;
}
