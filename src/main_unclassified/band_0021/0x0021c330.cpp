/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 517592A11621FD577B48C00405C27DDA2719CB7BCBC8564CF02DEE419A3D930D
 * Entry: 0x0021c330, Ghidra index: 7525, label: FUN_0021c330
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0021c330(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int unaff_EDI;
  
  if (*(float *)(unaff_EDI + 0xbc) != *(float *)(unaff_EDI + 0xc0)) {
    piVar3 = (int *)(unaff_EDI + 0x7c);
    iVar2 = 8;
    do {
      if ((*piVar3 != 0) && (piVar1 = *(int **)(*piVar3 + 0x14), piVar1 != (int *)0x0)) {
        (**(code **)(*piVar1 + 0x18))(piVar1,*(undefined4 *)(unaff_EDI + 0xbc));
      }
      piVar3 = piVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    *(undefined4 *)(unaff_EDI + 0xc0) = *(undefined4 *)(unaff_EDI + 0xbc);
  }
  return;
}
