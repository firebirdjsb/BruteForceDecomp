/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A7B371384FD2E44256B2094BDACED34D5644AEA79381BE8ED28D488BDF2EF43A
 * Entry: 0x00022fc0, Ghidra index: 214, label: FUN_00022fc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00022fc0(void)

{
  int in_EAX;
  undefined4 uVar1;
  int in_EDX;
  
  if (((in_EAX != 0) && (-1 < in_EAX)) && (in_EAX < 0x87)) {
                    /* WARNING: Could not recover jumptable at 0x00022ff9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(in_EAX * 0x40 + *(int *)(in_EDX + 0xc) + 0x10))();
    return uVar1;
  }
  return 0;
}
