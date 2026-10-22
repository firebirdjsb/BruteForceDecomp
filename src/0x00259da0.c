/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9532A52AF4D248919F27F778B936FD226497A4918ED235E787BA6A80647CACCB
 * Entry: 0x00259da0, Ghidra index: 8513, label: FUN_00259da0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00259da0(void)

{
  int iVar1;
  int *piVar2;
  int in_stack_00000010;
  undefined4 *in_stack_00000014;
  
  iVar1 = FUN_00259e80();
  if (iVar1 == 0) {
    return 0x80004005;
  }
  piVar2 = (int *)0x0;
  iVar1 = 0;
  if (0 < in_stack_00000010) {
    do {
      piVar2 = (int *)FUN_00259510();
      if (piVar2 == (int *)0x0) {
        return 0x80004005;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < in_stack_00000010);
  }
  if (in_stack_00000014 != (undefined4 *)0x0) {
    (**(code **)(*piVar2 + 4))(piVar2);
    *in_stack_00000014 = piVar2;
  }
  return 0;
}
