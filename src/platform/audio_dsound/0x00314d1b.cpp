/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F904FD1D75BB1FB3D3FF987B7BAC815B447FFE549964346F0F9E5AD484F6B3A6
 * Entry: 0x00314d1b, Ghidra index: 12089, label: FUN_00314d1b
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched Ghidra draft declaration only; original Xbox x87/ABI_UNVERIFIED. */
extern int FUN_00319a67(float param_1);
undefined4 FUN_00314d1b(float param_1)

{
  float10 fVar1;
  undefined4 uVar2;
  
  if (param_1 < 0.0 == (param_1 == 0.0)) {
    if (param_1 < 1.0) {
      fVar1 = (float10)log2((float10)param_1);
      uVar2 = FUN_00319a67((float)((float10)0.3010299956639812 * fVar1 * (float10)2000.0));
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0xffffd8f0;
  }
  return uVar2;
}
