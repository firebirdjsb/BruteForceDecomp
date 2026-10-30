/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 32F560211734B0E5F2C8A4FEEF5163D18EBE352CA843F909A9B3680BF3128436
 * Entry: 0x002d47a0, Ghidra index: 10208, label: FUN_002d47a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002d47a0(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0xec);
  *(undefined4 *)(iVar1 + 0x84) = 0;
  *(undefined4 *)(iVar1 + 0x80) = 0;
  *(undefined4 *)(iVar1 + 0x7c) = 0;
  iVar1 = *(int *)(in_ECX + 0xec);
  *(undefined4 *)(iVar1 + 0x94) = 0;
  *(undefined4 *)(iVar1 + 0x90) = 0;
  *(undefined4 *)(iVar1 + 0x8c) = 0;
  iVar1 = *(int *)(in_ECX + 0xf0);
  *(undefined4 *)(iVar1 + 0x84) = 0;
  *(undefined4 *)(iVar1 + 0x80) = 0;
  *(undefined4 *)(iVar1 + 0x7c) = 0;
  iVar1 = *(int *)(in_ECX + 0xf0);
  *(undefined4 *)(iVar1 + 0x94) = 0;
  *(undefined4 *)(iVar1 + 0x90) = 0;
  *(undefined4 *)(iVar1 + 0x8c) = 0;
  return;
}
