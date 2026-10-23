/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4ABDD36FE3B9F4B1DB4B53C8FAFC2B127C523634C61681BE014AB1579792A269
 * Entry: 0x0020e020, Ghidra index: 7398, label: FUN_0020e020
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0020e020(float param_1)

{
  int in_EAX;
  undefined4 unaff_ESI;
  
  if (in_EAX == 0) {
    FUN_0013e800(unaff_ESI,param_1 * 0.017453292);
  }
  else {
    if (in_EAX == 1) {
      FUN_00039380(unaff_ESI,param_1 * 0.017453292);
      return;
    }
    if (in_EAX == 2) {
      FUN_0020e080(unaff_ESI,param_1 * 0.017453292);
      return;
    }
  }
  return;
}
