/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D92A39BE14D61E37070B6B47F08F4AE05D51F92033DC1778172D2B5A992DED8B
 * Entry: 0x0017f0f0, Ghidra index: 5119, label: FUN_0017f0f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-observed 0x0017EE90 returns a guest DWORD with no explicit
 * arguments. Implicit guest registers and Xbox ABI remain UNVERIFIED. */
extern undefined4 FUN_0017ee90(void);
undefined4 FUN_0017f0f0(void)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)FUN_0017ee90();
  if (piVar1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0017f10f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*piVar1 + 8))();
    return uVar2;
  }
  return 0;
}
