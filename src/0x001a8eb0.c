/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6247C4CFB2359E8FFB9DA1D40C64914107DB06823CB77236E5FBA185148621DC
 * Entry: 0x001a8eb0, Ghidra index: 5451, label: FUN_001a8eb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001a8eb0(void)

{
  int in_ECX;
  int iVar1;
  
  if (*(int *)(in_ECX + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x344;
    if (iVar1 != 0) goto LAB_001a8eec;
  }
  FUN_001af6e0();
LAB_001a8eec:
  FUN_00162600();
  FUN_001b4a70();
  return iVar1 * 0x344 + *(int *)(in_ECX + 4);
}
