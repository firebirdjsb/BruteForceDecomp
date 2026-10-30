/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E21190A774F069B6F1D2C5054DBA77931A8917B7183BBA8BF54C19ABE93DDFDF
 * Entry: 0x000368f0, Ghidra index: 359, label: FUN_000368f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_00036230(void);

undefined4 FUN_000368f0(void)

{
  int iVar1;
  int in_ECX;
  
  if (*(int **)(in_ECX + 0x1ac) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(in_ECX + 0x1ac) + 0x3c))();
    if (iVar1 == 0x13) {
      *(undefined4 *)(in_ECX + 0x7ec) = *(undefined4 *)(in_ECX + 0x1ac);
      FUN_00036230();
      return 1;
    }
  }
  return 0;
}
