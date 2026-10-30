/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C0A6D9CD89C93D230E7C41C2FEA02F0F143B8B7EAC6148890A189B7FA75BD40F
 * Entry: 0x00064510, Ghidra index: 1087, label: FUN_00064510
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern uint FUN_00064540(void);
extern int FUN_000643b0(int param_1,float param_2,undefined4 *param_3);

void FUN_00064510(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  param_3 = FUN_00064540();
  FUN_000643b0(param_1,param_2,&param_3);
  return;
}
