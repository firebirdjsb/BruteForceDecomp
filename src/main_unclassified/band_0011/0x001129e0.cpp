/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 31E8D6C02EDF72280081A432974802692925DA96E3C6686AA96631F59A52BEE0
 * Entry: 0x001129e0, Ghidra index: 3560, label: FUN_001129e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Callee-draft-matched declaration for C++17 name lookup only; Xbox ABI_UNVERIFIED. */
extern void FUN_0005b5d0(byte param_1);
void FUN_001129e0(void)

{
  undefined4 unaff_EBX;
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x5a0) != 0) {
    FUN_0005b5d0(1);
    *(undefined4 *)(unaff_ESI + 0x5a0) = 0;
  }
  *(undefined4 *)(unaff_ESI + 0x5a0) = unaff_EBX;
  return;
}
