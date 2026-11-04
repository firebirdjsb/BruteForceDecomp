/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C866F30BDB54DBB655107BC060517DBB0548FD0441AAF1037C2BF12F8BEBACD5
 * Entry: 0x0017f0c0, Ghidra index: 5118, label: FUN_0017f0c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-observed 0x0017EE90 returns a guest DWORD with no explicit
 * arguments. Implicit guest registers and Xbox ABI remain UNVERIFIED. */
extern undefined4 FUN_0017ee90(void);
undefined4 FUN_0017f0c0(void)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)FUN_0017ee90();
  if (piVar1 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar1 + 0x20))();
    return uVar2;
  }
  return 0;
}
