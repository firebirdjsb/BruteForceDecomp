/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 61D77D8F33D3A4B338BC129C92D50FD2DCF8C68000741A01D3E3C6A7FE850CBA
 * Entry: 0x00137b00, Ghidra index: 3913, label: FUN_00137b00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00137b00(undefined4 param_1)

{
  int iVar1;
  int in_EAX;
  
  iVar1 = *(int *)(in_EAX + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)(in_EAX + 8) - iVar1) / 0x14) <
      (uint)((*(int *)(in_EAX + 0xc) - iVar1) / 0x14))) {
    iVar1 = *(int *)(in_EAX + 8);
    FUN_00139ac0(iVar1,1,param_1,param_1);
    *(int *)(in_EAX + 8) = iVar1 + 0x14;
    return;
  }
  FUN_00137e30(&param_1,*(undefined4 *)(in_EAX + 8),param_1);
  return;
}
