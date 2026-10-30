/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F6DF333A4993C0089373645155E0CD001DF3195AB1FA3110DC5B41CF4C064E75
 * Entry: 0x0014d020, Ghidra index: 4351, label: FUN_0014d020
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined1 FUN_0014d020(void)

{
  int *in_EAX;
  int unaff_ESI;
  
  if ((in_EAX[0x74] != 0) && (in_EAX[0x74] == unaff_ESI)) {
    return 0;
  }
  if (unaff_ESI != in_EAX[0x73]) {
    if (in_EAX[0x73] != 0) {
      FUN_0014d130();
    }
    if (unaff_ESI == 1) {
      (**(code **)(*in_EAX + 0x50))(in_EAX + 0x51);
      in_EAX[0x73] = 1;
      return 1;
    }
    if (unaff_ESI != 2) {
      return 0;
    }
    (**(code **)(in_EAX[0x11] + 0x50))(in_EAX + 0x51);
    in_EAX[0x73] = 2;
  }
  return 1;
}
