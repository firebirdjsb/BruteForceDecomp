/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 09E676EA371165A479D2815CCC29B5252EADA40D7ECFCF3D33D89D942DE0025D
 * Entry: 0x0009db20, Ghidra index: 1873, label: FUN_0009db20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0009db20(void)

{
  undefined4 *in_EAX;
  undefined4 unaff_ESI;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_28 = -(float)in_EAX[0xb];
  local_2c = -(float)in_EAX[10];
  local_30 = -(float)in_EAX[9];
  local_24 = *in_EAX;
  local_20 = in_EAX[3];
  local_1c = in_EAX[6];
  local_18 = in_EAX[1];
  local_14 = in_EAX[4];
  local_10 = in_EAX[7];
  local_c = in_EAX[2];
  local_8 = in_EAX[5];
  local_4 = in_EAX[8];
  FUN_0003d6c0(unaff_ESI,&local_24,&local_30);
  return;
}
