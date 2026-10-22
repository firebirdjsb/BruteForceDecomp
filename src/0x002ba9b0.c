/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5B862532BF55609F962F6DCAF5693D07D9191F2D6D454EC888C1CAE2C18CC033
 * Entry: 0x002ba9b0, Ghidra index: 9888, label: FUN_002ba9b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_002ba9b0(int param_1,undefined4 param_2)

{
  float local_10;
  undefined8 local_c;
  undefined4 local_4;
  
  if ('\x01' < *(char *)(param_1 + 100)) {
    local_4 = 0;
    local_10 = *(float *)(param_1 + 0x24) + 0.1;
    local_c = CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 0x28) >> 0x20) + 0.1,
                       (float)*(undefined8 *)(param_1 + 0x28) + 0.1);
    FUN_002baa70(param_1,param_2,&local_10,*(float *)(param_1 + 0x44) + 0.1);
    return;
  }
  FUN_002baa70(param_1,param_2,param_1 + 0x24,*(undefined4 *)(param_1 + 0x44));
  return;
}
