/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F709F372266ACCFF93C0B3C0F58F0E23170BF8FA1A9114B73F5C0F51DFC747F6
 * Entry: 0x0014d470, Ghidra index: 4363, label: FUN_0014d470
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0014d470(void)

{
  byte bVar1;
  int *in_EAX;
  
  bVar1 = *(byte *)(in_EAX + 0x72);
  *(byte *)(in_EAX + 0x72) = (~(bVar1 >> 1) << 1 ^ bVar1) & 2 ^ bVar1;
  if (in_EAX[0x10] == 0) {
    in_EAX[0x10] = 1;
  }
  else if (in_EAX[0x10] == 1) {
    in_EAX[0x10] = 0;
  }
  if (in_EAX[8] != 0) {
    FUN_0014ae80();
    (**(code **)(*in_EAX + 0x70))();
  }
  if (in_EAX[0x21] == 0) {
    in_EAX[0x21] = 1;
  }
  else if (in_EAX[0x21] == 1) {
    in_EAX[0x21] = 0;
  }
  if (in_EAX[0x19] != 0) {
    FUN_0014ae80();
                    /* WARNING: Could not recover jumptable at 0x0014d4ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(in_EAX[0x11] + 0x70))();
    return;
  }
  return;
}
