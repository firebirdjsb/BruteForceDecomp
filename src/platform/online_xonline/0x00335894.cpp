/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 912F446DE14D385C18C0AEA4EBFAA62303548D5AD4396E07ECB352D08FD90F95
 * Entry: 0x00335894, Ghidra index: 12436, label: FUN_00335894
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00335894(int param_1,int param_2)

{
  int *piVar1;
  int in_ECX;
  uint uVar2;
  
  uVar2 = 0;
  piVar1 = (int *)(in_ECX + 0x12d0);
  do {
    if ((*piVar1 == param_1) && (piVar1[1] == param_2)) break;
    uVar2 = uVar2 + 1;
    piVar1 = piVar1 + 0x2e;
  } while (uVar2 < 4);
  return uVar2 * 0xb8 + 0x12d0 + in_ECX;
}
