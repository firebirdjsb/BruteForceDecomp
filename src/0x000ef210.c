/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 29A6336ADE9A5703E3B55105C9C8013E0E006D59C360E88A1385DD44341968DD
 * Entry: 0x000ef210, Ghidra index: 2971, label: FUN_000ef210
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000ef210(void)

{
  int *piVar1;
  byte in_CL;
  byte bVar2;
  int *unaff_ESI;
  
  bVar2 = *(byte *)(unaff_ESI + 10) ^ (*(byte *)(unaff_ESI + 10) ^ in_CL) & 1;
  *(byte *)(unaff_ESI + 10) = bVar2;
  if ((((bVar2 & 1) != 0) && (unaff_ESI[1] != 0)) &&
     (piVar1 = *(int **)(unaff_ESI[1] + 0x94), piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 0x28))();
  }
                    /* WARNING: Could not recover jumptable at 0x000ef240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_ESI + 0x20))();
  return;
}
