/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D016CD86ED827514EA3C43663F06784B03500F828FAB9FA29ADEC901CBE3D8A3
 * Entry: 0x00054310, Ghidra index: 789, label: FUN_00054310
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00054310(float *param_1,float *param_2,float *param_3)

{
  if (*param_2 < *param_1) {
    FUN_00054360();
  }
  if (*param_3 < *param_2) {
    FUN_00054360();
  }
  if (*param_2 < *param_1) {
    FUN_00054360();
    return;
  }
  return;
}
