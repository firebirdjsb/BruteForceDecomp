/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 11AE6B43553E8CD88E86FCBF971B795774D0465A868E1F3E9524A778C69BC1D1
 * Entry: 0x000c8700, Ghidra index: 2469, label: FUN_000c8700
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_001611d0(void);

int FUN_000c8700(int param_1)

{
  int unaff_EBX;
  int iVar1;
  
  iVar1 = 0;
  do {
    if (((0 < iVar1) && (iVar1 < 5)) && (*(char *)(iVar1 + 0x58 + unaff_EBX) != '\0')) {
      FUN_001611d0();
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 5);
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
}
