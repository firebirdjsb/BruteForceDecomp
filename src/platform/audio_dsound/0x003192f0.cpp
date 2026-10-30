/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EE8A210DE3A8545E0E9A9F433EB137FFE84D4F00E61576121095DE996C2AD616
 * Entry: 0x003192f0, Ghidra index: 12219, label: FUN_003192f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_003192f0(uint param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  int in_ECX;
  
  while (*(uint *)(in_ECX + 0x158) < *(uint *)(*(int *)(in_ECX + 0x88) + 0xd8)) {
    puVar1 = (uint *)(*(int *)(*(int *)(in_ECX + 0x88) + 0xd4) + *(int *)(in_ECX + 0x158) * 8);
    uVar2 = *puVar1;
    if ((uVar2 == 0xffffffff) || (param_1 <= uVar2)) break;
    if (param_2 != 0) {
      NtSetEvent(puVar1[1],0);
    }
    *(int *)(in_ECX + 0x158) = *(int *)(in_ECX + 0x158) + 1;
  }
  *(uint *)(in_ECX + 0x154) = param_1;
  return;
}
