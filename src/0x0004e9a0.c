/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D66B8D6C681A7D73AEBDAB106E8624391711068F3C023AD1EBABE1B6B52C3067
 * Entry: 0x0004e9a0, Ghidra index: 678, label: FUN_0004e9a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_0004e9a0(void)

{
  int in_EAX;
  int *piVar1;
  int iVar2;
  int in_ECX;
  int local_4;
  
  piVar1 = *(int **)(in_ECX + 8);
  while( true ) {
    if (piVar1 == *(int **)(in_ECX + 0xc)) {
      return (uint)piVar1 & 0xffffff00;
    }
    if (*piVar1 == in_EAX) break;
    piVar1 = piVar1 + 0x20;
  }
  local_4 = in_ECX;
  FUN_00050ac0(&local_4,piVar1 + 0x20,*(undefined4 *)(in_ECX + 0xc),piVar1);
  FUN_00050be0(*(int *)(in_ECX + 0xc) + -0x80,*(int *)(in_ECX + 0xc),in_ECX + 4,local_4);
  iVar2 = *(int *)(in_ECX + 0xc) + -0x80;
  *(int *)(in_ECX + 0xc) = iVar2;
  return CONCAT31((int3)((uint)iVar2 >> 8),1);
}
