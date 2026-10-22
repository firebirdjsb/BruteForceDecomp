/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 96859466D6C6A1AF19EBF8675CBEC99DD926888EB249EBDF57FE7A09B99B35EE
 * Entry: 0x00181420, Ghidra index: 5153, label: FUN_00181420
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00181420(int param_1,undefined4 param_2,float param_3,float param_4)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = param_2;
  if (param_3 <= 0.0) {
    param_3 = 0.0;
  }
  if (1.0 <= param_3) {
    param_3 = 1.0;
  }
  *(float *)(param_1 + 0x10) = param_3;
  if (param_4 <= 0.0) {
    param_4 = 0.0;
  }
  if (1.0 <= param_4) {
    param_4 = 1.0;
  }
  *(float *)(param_1 + 0x14) = param_4;
  *(undefined1 *)(param_1 + 0xc) = 1;
  return;
}
