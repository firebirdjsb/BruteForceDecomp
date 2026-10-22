/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8CC791CABB7F2F6E9ECBCEA1AE8EABCE22820406F2AF9F1F16EB21699938309C
 * Entry: 0x0014d500, Ghidra index: 4364, label: FUN_0014d500
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0014d500(void)

{
  int *in_EAX;
  
  if (in_EAX[0x10] == 0) {
    in_EAX[0x10] = 1;
  }
  else if (in_EAX[0x10] == 1) {
    in_EAX[0x10] = 2;
  }
  if (in_EAX[8] != 0) {
    FUN_0014ae80();
    (**(code **)(*in_EAX + 0x70))();
  }
  if (in_EAX[0x21] == 0) {
    in_EAX[0x21] = 1;
  }
  else if (in_EAX[0x21] == 1) {
    in_EAX[0x21] = 2;
  }
  if (in_EAX[0x19] != 0) {
    FUN_0014ae80();
                    /* WARNING: Could not recover jumptable at 0x0014d563. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(in_EAX[0x11] + 0x70))();
    return;
  }
  return;
}
