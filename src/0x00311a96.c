/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 983392C9BEDAC95DA632BE1252F26A468DC36C9F476451C5AAAA9F84A70483A1
 * Entry: 0x00311a96, Ghidra index: 11912, label: XAudioCalculatePitch
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 DSOUND__XAudioCalculatePitch(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  
  FUN_0031193a();
  if (param_1 == 48000) {
    uVar2 = 0;
  }
  else {
    fVar1 = (float)param_1;
    if (param_1 < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    uVar2 = FUN_003174c5(fVar1 * 2.0833333e-05);
  }
  FUN_0031195f();
  return uVar2;
}
