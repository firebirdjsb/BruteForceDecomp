/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4AFF18CAA2B8BA9446B4EFACE37E298DB1FA7A55531C9499AF0255F907F4A514
 * Entry: 0x00131df0, Ghidra index: 3836, label: FUN_00131df0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00131df0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == 0) {
    return 0;
  }
  return (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0xac;
}
