/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 094199E021F5A1B72E5B995BCB6350EFE3CFE85ACF7AD49CE1A0A9FE3571569C
 * Entry: 0x00117210, Ghidra index: 3592, label: FUN_00117210
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_00117210(void)

{
  int *piVar1;
  uint uVar2;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0x214);
  if ((((((piVar1 == (int *)0x0) || ((*(byte *)(piVar1 + 0xf) & 1) != 0)) &&
        (piVar1 = (int *)CONCAT31((int3)((uint)piVar1 >> 8),*(char *)(in_ECX + 0x225)),
        *(char *)(in_ECX + 0x225) == '\0')) && ((*(byte *)(in_ECX + 0x70) & 1) == 0)) &&
      ((piVar1 = *(int **)(in_ECX + 0x1fc), piVar1 == (int *)0x0 ||
       (((*(byte *)((int)piVar1 + 0x252) & 2) == 0 && (*piVar1 != 0x2e)))))) &&
     ((piVar1 = *(int **)(in_ECX + 0x200), piVar1 == (int *)0x0 ||
      (((*(byte *)((int)piVar1 + 0x252) & 2) == 0 && (*piVar1 != 0x2e)))))) {
                    /* WARNING: Could not recover jumptable at 0x0011726b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(**(int **)(in_ECX + 0x5a4) + 0x14))();
    return uVar2;
  }
  return (uint)piVar1 & 0xffffff00;
}
