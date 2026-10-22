/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D1BB50219D8E51B1B21BADD057A89E2C03DFB96C0617CD32FCA146B4E41574F9
 * Entry: 0x0014a170, Ghidra index: 4286, label: FUN_0014a170
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0014a170(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int unaff_ESI;
  undefined1 local_4 [4];
  
  *(byte *)(unaff_ESI + 0x1bc) = *(byte *)(unaff_ESI + 0x1bc) & 0xfd;
  *(undefined1 *)(unaff_ESI + 0x79) = 2;
  if (((*(byte *)(unaff_ESI + 0x26) & 0x10) == 0) && (*(int *)(unaff_ESI + 8) != 0)) {
    puVar2 = (undefined4 *)FUN_000e0350(*(int *)(unaff_ESI + 8),local_4,unaff_ESI);
    *(undefined4 *)(unaff_ESI + 0x14) = *puVar2;
    *(byte *)(unaff_ESI + 0x26) = *(byte *)(unaff_ESI + 0x26) | 0x10;
  }
  if ((*(int *)(unaff_ESI + 0xc) != 0) &&
     (piVar1 = *(int **)(*(int *)(unaff_ESI + 0xc) + 0x15c), piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 0x14))();
  }
  return;
}
