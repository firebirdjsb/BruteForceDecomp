/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2F8998B3FD5561E18339DF7A6B205D8D88574CFFFE45402CB58F4C27B5E4E55A
 * Entry: 0x00348044, Ghidra index: 12887, label: FUN_00348044
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-draft declaration only; Xbox x86 guest ABI_UNVERIFIED. */
extern void FUN_00347ae8(int param_1);
void FUN_00348044(void)

{
  int in_ECX;
  
  while (*(int *)(in_ECX + 0x8bc) != 0) {
    FUN_00347ae8(*(undefined4 *)(in_ECX + 0x8b4));
  }
  return;
}
