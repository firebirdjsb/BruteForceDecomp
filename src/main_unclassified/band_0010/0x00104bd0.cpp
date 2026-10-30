/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F5CB4C0FD11480A78238D79A1C56B46DBE3B276BA61345804543766348421A92
 * Entry: 0x00104bd0, Ghidra index: 3328, label: FUN_00104bd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00104bd0(void)

{
  byte bVar1;
  int *piVar2;
  byte in_AL;
  int unaff_EDI;
  
  piVar2 = *(int **)(unaff_EDI + 0x11c);
  if ((piVar2 != (int *)0x0) && (bVar1 = *(byte *)(piVar2 + 10), in_AL != (bVar1 >> 2 & 1))) {
    *(byte *)(piVar2 + 10) = (in_AL << 2 ^ bVar1) & 4 ^ bVar1;
    (**(code **)(*piVar2 + 0x28))();
  }
  piVar2 = *(int **)(unaff_EDI + 0x120);
  if ((piVar2 != (int *)0x0) && (bVar1 = *(byte *)(piVar2 + 10), in_AL != (bVar1 >> 2 & 1))) {
    *(byte *)(piVar2 + 10) = (in_AL << 2 ^ bVar1) & 4 ^ bVar1;
    (**(code **)(*piVar2 + 0x28))();
  }
  piVar2 = *(int **)(unaff_EDI + 0x124);
  if ((piVar2 != (int *)0x0) && (bVar1 = *(byte *)(piVar2 + 10), in_AL != (bVar1 >> 2 & 1))) {
    *(byte *)(piVar2 + 10) = (in_AL << 2 ^ bVar1) & 4 ^ bVar1;
                    /* WARNING: Could not recover jumptable at 0x00104c5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar2 + 0x28))();
    return;
  }
  return;
}
