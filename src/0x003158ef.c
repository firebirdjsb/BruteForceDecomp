/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 86FEF777AB35705A7281F5FED403EB37145C4AC135C0A7B79ECD7DFE2C35ABF4
 * Entry: 0x003158ef, Ghidra index: 12109, label: FUN_003158ef
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_003158ef(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 8);
  if (iVar1 != 0) {
    FUN_0031b0ec();
    FUN_00314937(iVar1);
    *(undefined4 *)(in_ECX + 8) = 0;
  }
  if (*(int *)(in_ECX + 0xc) != 0) {
    FUN_00314937(*(int *)(in_ECX + 0xc));
    *(undefined4 *)(in_ECX + 0xc) = 0;
  }
  if (*(int *)(in_ECX + 0x20) != 0) {
    FUN_00314937(*(int *)(in_ECX + 0x20));
    *(undefined4 *)(in_ECX + 0x20) = 0;
  }
  return;
}
