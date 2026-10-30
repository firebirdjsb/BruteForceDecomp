/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A4CCD3F0560AA271DAC03B0356C8DC76BCD83D5F10D27800F11B99B5D2C0D381
 * Entry: 0x00178410, Ghidra index: 4964, label: FUN_00178410
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_00178410(int param_1)

{
  uint in_EAX;
  uint uVar1;
  int in_ECX;
  int iVar2;
  undefined4 *puVar3;
  
  uVar1 = in_EAX & 0xffffff00;
  if ((param_1 != 0) && (param_1 == *(int *)(in_ECX + 0x28))) {
    puVar3 = (undefined4 *)(in_ECX + 8);
    FUN_00358ff0(*(undefined4 *)(in_ECX + 8),1);
    *(undefined4 *)(in_ECX + 0x28) = 0;
    FUN_00359140(*puVar3,0);
    FUN_00359c30(*puVar3);
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    uVar1 = 1;
  }
  return uVar1;
}
