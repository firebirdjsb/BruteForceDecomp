/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FAE9A56F981641A36AB0DB96DBF6054FE40BAE05CDA9A864CF352F5B1FE43856
 * Entry: 0x001e7fe0, Ghidra index: 6832, label: FUN_001e7fe0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-draft declaration only; original Xbox guest ABI remains ABI_UNVERIFIED. */
extern void FUN_001e7df0(void);
void FUN_001e7fe0(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 4);
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      FUN_001e7df0();
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  return;
}
