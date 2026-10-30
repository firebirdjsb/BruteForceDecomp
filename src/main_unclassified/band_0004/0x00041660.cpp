/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C5E0520E5B36AF504778F82093DA20712DB83DAFAFA8DB57A3538F5C298A7D98
 * Entry: 0x00041660, Ghidra index: 497, label: FUN_00041660
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern uint32_t FUN_000120f0(int32_t in_EAX);
extern void FUN_0011dfa0(void);
extern char FUN_000416a0(int param_1,uint param_2);

void FUN_00041660(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_000120f0();
  FUN_0011dfa0();
  FUN_000416a0(param_2,param_3);
  return;
}
