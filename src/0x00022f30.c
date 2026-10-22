/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 84CFDFF483469439F336D894B84DCF6B993FAC169F8B3ED685F11378CAF0227D
 * Entry: 0x00022f30, Ghidra index: 212, label: FUN_00022f30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00022f30(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 4);
  if (((iVar1 != 0) && (-1 < iVar1)) && (iVar1 < 0x87)) {
                    /* WARNING: Could not recover jumptable at 0x00022f68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(iVar1 * 0x40 + *(int *)(in_ECX + 0xc)))();
    return uVar2;
  }
  return 0;
}
