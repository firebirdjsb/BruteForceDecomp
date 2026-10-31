/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 32916E78DA7E58D2F4195FE2B0741881D9D94374A919245937D154E3FB534575
 * Entry: 0x00180960, Ghidra index: 5135, label: FUN_00180960
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched C++17 declaration only; original Xbox register/stack ABI_UNVERIFIED. */
extern void FUN_001834c0(void);
void FUN_00180960(void)

{
  undefined4 *puVar1;
  int *in_ECX;
  undefined4 *puVar2;
  
  (**(code **)(*in_ECX + 8))();
  if ((undefined4 *)in_ECX[0x44] == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = *(undefined4 **)in_ECX[0x44];
  }
  puVar1 = (undefined4 *)in_ECX[0x44];
  for (; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
    FUN_001834c0();
  }
  return;
}
