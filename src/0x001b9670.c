/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C7EE3BA5217E80D1BB24A90C2B9D5FE312FF3342F6632F26A5D0586AAEFA7312
 * Entry: 0x001b9670, Ghidra index: 5713, label: FUN_001b9670
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001b9670(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int unaff_ESI;
  
  if (param_2 != param_3) {
    uVar1 = FUN_001e2a80(param_3);
    FUN_000762d0();
    *(undefined4 *)(unaff_ESI + 8) = uVar1;
  }
  *param_1 = param_2;
  return;
}
