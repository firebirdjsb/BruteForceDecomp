/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0F6F775DD42A10ED6B26007645FC487566C654D05F4AA1DA75C489D42A047FE8
 * Entry: 0x0014bd40, Ghidra index: 4328, label: FUN_0014bd40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0014bd40(void)

{
  int unaff_EBX;
  int unaff_EDI;
  
  if (*(int *)(unaff_EBX + 0xb0) != unaff_EDI) {
    FUN_0008f6a0();
  }
  *(undefined4 *)(unaff_EBX + 0xb4) = 0;
  if (unaff_EDI != 0) {
    *(undefined4 *)(unaff_EBX + 4) = *(undefined4 *)(unaff_EDI + 4);
    return;
  }
  *(undefined4 *)(unaff_EBX + 4) = 0xf17261a3;
  return;
}
