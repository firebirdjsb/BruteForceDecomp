/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 791298B00E86320C127A644F080C0910B7351609165231CD937E185297FA9A71
 * Entry: 0x0014d570, Ghidra index: 4365, label: FUN_0014d570
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0014d570(void)

{
  byte bVar1;
  int *in_EAX;
  
  bVar1 = *(byte *)(in_EAX + 0x72);
  *(byte *)(in_EAX + 0x72) = (~(bVar1 >> 1) << 1 ^ bVar1) & 2 ^ bVar1;
  if (in_EAX[0x10] == 2) {
    in_EAX[0x10] = 0;
  }
  if (in_EAX[8] != 0) {
    FUN_0014ae80();
    (**(code **)(*in_EAX + 0x70))();
  }
  if (in_EAX[0x21] == 2) {
    in_EAX[0x21] = 0;
  }
  if (in_EAX[0x19] != 0) {
    FUN_0014ae80();
                    /* WARNING: Could not recover jumptable at 0x0014d5d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(in_EAX[0x11] + 0x70))();
    return;
  }
  return;
}
