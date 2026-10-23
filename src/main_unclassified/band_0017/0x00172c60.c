/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 99186594827354A166832C4E14CF9E9DB760BE3152012504C3B6F9AEC36043DF
 * Entry: 0x00172c60, Ghidra index: 4872, label: FUN_00172c60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00172c60(void)

{
  int in_ECX;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 local_c [2];
  undefined4 *puStack_4;
  
  (**(code **)(*(int *)(in_ECX + 0x68) + 0x14))((int *)(in_ECX + 0x68),local_c);
  *puStack_4 = uStack_14;
  puStack_4[1] = uStack_10;
  puStack_4[2] = local_c[0];
  return;
}
