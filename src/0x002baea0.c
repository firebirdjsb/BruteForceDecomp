/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4D7518C1E9F94D2B66573BEF86B480421B58524F1322A144BAFA0FB0C3952C77
 * Entry: 0x002baea0, Ghidra index: 9894, label: FUN_002baea0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_002baea0(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  *(float *)(param_1 + 0x9c) = *(float *)(param_1 + 0x9c) + *(float *)(param_1 + 0x34) * *param_2;
  *(ulonglong *)(param_1 + 0xa0) =
       CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 0xa0) >> 0x20) +
                *(float *)(param_1 + 0x3c) * fVar2,
                (float)*(undefined8 *)(param_1 + 0xa0) + *(float *)(param_1 + 0x38) * fVar1);
  return;
}
