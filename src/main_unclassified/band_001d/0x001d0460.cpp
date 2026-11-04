/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 724CC4505935ECF6310020F2A0753E0CD1D293677BBDBE6BFE7ABD2FD2BDDB2F
 * Entry: 0x001d0460, Ghidra index: 6171, label: FUN_001d0460
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* XBE direct E8 at 0x001D047B -> 0x001D47F0, callee plain RET.
 * Implicit guest register inputs and native linkage remain ABI_UNVERIFIED. */
extern void FUN_001d47f0(void);
void FUN_001d0460(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *unaff_EBX;
  
  for (; param_1 != param_2; param_1 = param_1 + 5) {
    *param_1 = *unaff_EBX;
    FUN_001d47f0();
  }
  return;
}
