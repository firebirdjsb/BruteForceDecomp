/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7B21F78A8D4C75977953EC2F199086ADD9462E4205B31ADB2759909AD42F2707
 * Entry: 0x001099e0, Ghidra index: 3413, label: FUN_001099e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001099e0(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = FUN_001098f0();
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(in_ECX + 4);
  }
  return;
}
