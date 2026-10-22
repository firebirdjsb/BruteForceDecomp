/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 25FA369EEA8598B1B489DDDCCBD85ED7C5BFC6245C6019C111B8DC561CDDDC9F
 * Entry: 0x0015ec20, Ghidra index: 4562, label: FUN_0015ec20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0015ec20(void)

{
  int in_EDX;
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)(in_EDX + 4);
  piVar2 = piVar1;
  if (0xf < *(uint *)(in_EDX + 0x18)) {
    piVar2 = (int *)*piVar1;
  }
  if (0xf < *(uint *)(in_EDX + 0x18)) {
    piVar1 = (int *)*piVar1;
  }
  FUN_0015ec60(piVar1,*(int *)(in_EDX + 0x14) + (int)piVar2);
  return 0;
}
