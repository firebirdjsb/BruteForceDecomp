/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E29F64E6D4CD723F651EF0B240D5931F5E80EF932DD3E604A8E9FCF74E042AA1
 * Entry: 0x00147ed0, Ghidra index: 4247, label: FUN_00147ed0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00147ed0(void)

{
  int iVar1;
  int *piVar2;
  int unaff_ESI;
  
  if (*(float *)(unaff_ESI + 0x14) <= 0.0) {
    if ((*(byte *)(unaff_ESI + 0xc) & 1) != 0) {
      FUN_000cdbc0(*(undefined4 *)(unaff_ESI + 8));
      *(byte *)(unaff_ESI + 0xc) = *(byte *)(unaff_ESI + 0xc) & 0xfe;
    }
    return;
  }
  iVar1 = *(int *)(*(int *)(*(int *)(unaff_ESI + 8) + 0xc) + 0xcc);
  if ((((iVar1 != 0) && (piVar2 = *(int **)(iVar1 + 8), piVar2 != (int *)0x0)) &&
      (0 < *(int *)(iVar1 + 0xc) - (int)piVar2 >> 2)) && (*piVar2 != 0)) {
    FUN_000cdcb0(&stack0x00000004);
  }
  *(byte *)(unaff_ESI + 0xc) = *(byte *)(unaff_ESI + 0xc) | 1;
  return;
}
