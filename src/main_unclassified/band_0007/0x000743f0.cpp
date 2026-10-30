/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7E3A368A51A68F834F00416887E86CA0D54145512F3139B8B31EFC3C4BAEACBA
 * Entry: 0x000743f0, Ghidra index: 1319, label: FUN_000743f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000743f0(void)

{
  int *in_EAX;
  int iVar1;
  
  iVar1 = 4;
  do {
    in_EAX = in_EAX + 1;
    if (*in_EAX != 0) {
      (**(code **)**(undefined4 **)(*in_EAX + 8))();
    }
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}
