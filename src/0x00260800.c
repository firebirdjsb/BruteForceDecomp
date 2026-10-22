/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EB202B1AD3DF964E1A383066BDFA2D8C50B4096FF321202CE4EC85C9F1B6C3C9
 * Entry: 0x00260800, Ghidra index: 8623, label: FUN_00260800
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00260800(void)

{
  undefined4 *puVar1;
  int in_EAX;
  int *piVar2;
  int *unaff_EBX;
  undefined4 *local_4;
  
  puVar1 = *(undefined4 **)(in_EAX + 0x28);
  FUN_002614d0(&local_4,*(undefined4 *)(in_EAX + 0x24),puVar1);
  if (local_4 != puVar1) {
    piVar2 = (int *)(**(code **)(*(int *)*local_4 + 0xc))((int *)*local_4);
    if (*piVar2 == *unaff_EBX) {
      return *local_4;
    }
  }
  return 0;
}
