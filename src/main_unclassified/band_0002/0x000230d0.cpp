/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6188F27F672B701FB0FD34370A7A6698DBFA365D5C12180DD8F9CE8B3B3A99D8
 * Entry: 0x000230d0, Ghidra index: 217, label: FUN_000230d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern uint32_t FUN_0001ba10(uint32_t unaff_ESI);
extern void FUN_00016150(int in_EAX);

undefined4 FUN_000230d0(int param_1)

{
  int *piVar1;
  int unaff_EDI;
  
  if ((*(int *)(unaff_EDI + 8) != 0) &&
     (*(int *)(unaff_EDI + 0xc) - *(int *)(unaff_EDI + 8) >> 2 != 0)) {
    piVar1 = (int *)FUN_0001ba10();
    if (*(int *)(*piVar1 + 4) == param_1) {
      FUN_00016150();
      return 1;
    }
  }
  return 0;
}
