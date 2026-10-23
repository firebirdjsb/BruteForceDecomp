/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0C0392744A6B4E80974DB457CFE712E155F7AEDF71660C3605FCF9207EFA86BA
 * Entry: 0x001a9d70, Ghidra index: 5481, label: FUN_001a9d70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001a9d70(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x18) = 0;
  FUN_001a9e30(in_ECX + 0x20);
  *(undefined4 *)(in_ECX + 0x1e8) = 0;
  *(undefined4 *)(in_ECX + 0x1ec) = 0;
  *(undefined4 *)(in_ECX + 0x1f0) = 0;
  *(undefined4 *)(in_ECX + 500) = 0;
  *(undefined4 *)(in_ECX + 0x1f8) = 0;
  *(undefined4 *)(in_ECX + 0x1fc) = 0;
  *(undefined4 *)(in_ECX + 0x204) = 0;
  *(undefined4 *)(in_ECX + 0x208) = 0;
  *(undefined4 *)(in_ECX + 0x20c) = 0;
  *(undefined4 *)(in_ECX + 0x210) = 0;
  FUN_001a9df0();
  *(undefined4 *)(in_ECX + 0x49c) = 0;
  FUN_001a9e70();
  return;
}
