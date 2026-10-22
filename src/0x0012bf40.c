/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8203B59C0042E593FC14B5135E89ECBEAF739E9E0D04AC4C68C9817904D9925B
 * Entry: 0x0012bf40, Ghidra index: 3795, label: FUN_0012bf40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0012bf40(void)

{
  char in_AL;
  int in_ECX;
  
  *(byte *)(in_ECX + 0x261) = *(byte *)(in_ECX + 0x261) & 0x3f;
  *(undefined4 *)(in_ECX + 0x71c) = 0;
  if ((in_AL != '\0') && (**(int **)(in_ECX + 0x1fc) == 0x23)) {
    FUN_0012eab0(1);
  }
  if (*(int *)(in_ECX + 0x24c) != 0) {
    *(uint *)(in_ECX + 0x250) = *(uint *)(in_ECX + 0x250) | 0x40;
  }
  FUN_0012bfa0();
  return;
}
