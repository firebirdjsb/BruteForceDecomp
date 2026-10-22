/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9873442E081C9AD61A0A0B3E71E9B2A64100DE228036C263F6CC6E44139D556A
 * Entry: 0x00316b1d, Ghidra index: 12155, label: FUN_00316b1d
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00316b1d(int param_1)

{
  int in_ECX;
  undefined4 unaff_EBX;
  
  MmLockUnlockBufferPages(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),1);
  FUN_00316674((undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
               *(undefined4 *)(*(int *)(in_ECX + 0x88) + 0xbc),
               *(undefined4 *)(*(int *)(in_ECX + 0x88) + 0xc0),unaff_EBX);
  return;
}
