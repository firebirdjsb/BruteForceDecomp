/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F07E9ED6BB7B11A6673E1C24A8730CB0EC3500302F7A16E70AB36838D84B1638
 * Entry: 0x002bad80, Ghidra index: 9892, label: FUN_002bad80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_002bad80(int param_1,undefined4 param_2,float param_3)

{
  float local_10;
  float local_c;
  float local_8;
  undefined4 local_4;
  
  local_4 = 0;
  FUN_002b73d0(param_1 + 0xfc,param_2,&local_10);
  *(float *)(param_1 + 0x7c) =
       *(float *)(param_1 + 0x7c) + local_10 * *(float *)(param_1 + 0x34) * param_3;
  *(ulonglong *)(param_1 + 0x80) =
       CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 0x80) >> 0x20) +
                local_8 * *(float *)(param_1 + 0x3c) * param_3,
                (float)*(undefined8 *)(param_1 + 0x80) +
                local_c * *(float *)(param_1 + 0x38) * param_3);
  return;
}
