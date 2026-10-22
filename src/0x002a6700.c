/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 73926F808611079590DC02990CE488DD7A8165FC38FB6652CF937D7D7E45BFCA
 * Entry: 0x002a6700, Ghidra index: 9588, label: FUN_002a6700
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003a3750;
/* WARNING: Removing unreachable block (ram,0x002a67cc) */
/* WARNING: Removing unreachable block (ram,0x002a67d0) */
/* WARNING: Removing unreachable block (ram,0x002a67fd) */
/* WARNING: Removing unreachable block (ram,0x002a67de) */
/* WARNING: Removing unreachable block (ram,0x002a67ff) */
/* WARNING: Removing unreachable block (ram,0x002a682c) */
/* WARNING: Removing unreachable block (ram,0x002a6832) */

void FUN_002a6700(int *param_1)

{
  int *in_EAX;
  int *piVar1;
  
  (**(code **)(*param_1 + 0xc))();
  if ((float)param_1 == 1.0) {
    piVar1 = (int *)FUN_002ea01d();
    if (piVar1 == (int *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      piVar1[1] = 0x3f800000;
      piVar1[2] = 0;
      *piVar1 = (int)&PTR_LAB_003a3750;
      piVar1[3] = 1;
    }
    FUN_002a6520();
    (**(code **)(*param_1 + 0x14))();
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))();
      return;
    }
  }
  else if (1.1 <= (float)param_1) {
    (**(code **)(*in_EAX + 0x10))();
    (**(code **)(*param_1 + 0x34))();
    (**(code **)(*in_EAX + 0x10))();
  }
  return;
}
