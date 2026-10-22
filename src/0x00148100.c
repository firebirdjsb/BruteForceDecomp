/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B32EF9765726FDAC879A0AF3E14418C88AE94ABDE4B9C176ED7551268E928F7B
 * Entry: 0x00148100, Ghidra index: 4251, label: FUN_00148100
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00148100(void)

{
  int *piVar1;
  int *in_ECX;
  int unaff_EDI;
  
  piVar1 = *(int **)(unaff_EDI + 0x10);
  (**(code **)(*in_ECX + 0x40))();
  (**(code **)(*piVar1 + 0x40))();
  FUN_000de330(*(undefined4 *)(*(int *)(unaff_EDI + 0x10) + 8));
  return;
}
