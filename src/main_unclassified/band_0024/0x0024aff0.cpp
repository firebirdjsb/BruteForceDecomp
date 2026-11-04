/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 69D26CE7B7855796871F3987E0B003F45FDA4495C77B9A146E8B8B78D5F57CA3
 * Entry: 0x0024aff0, Ghidra index: 8241, label: FUN_0024aff0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched three-stack-word draft declaration; original Xbox ECX is ABI_UNVERIFIED. */
extern void FUN_0001f4f0(int param_1, uint param_2, uint param_3);
undefined4 * FUN_0024aff0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 0xe) {
    *in_EAX = *param_1;
    in_EAX[1] = param_1[1];
    in_EAX[2] = param_1[2];
    in_EAX[3] = param_1[3];
    in_EAX[4] = param_1[4];
    FUN_0001f4f0(param_1 + 5,0,0xffffffff);
    in_EAX[0xc] = param_1[0xc];
    in_EAX[0xd] = param_1[0xd];
    in_EAX = in_EAX + 0xe;
  }
  return in_EAX;
}
