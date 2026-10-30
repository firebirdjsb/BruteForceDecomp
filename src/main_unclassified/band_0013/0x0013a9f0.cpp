/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 50362137EE3F3711518F416DC15884993999B8BFB7EDDB13813374C6636E8D86
 * Entry: 0x0013a9f0, Ghidra index: 3970, label: FUN_0013a9f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0013a9f0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined1 param_6)

{
  if (8 < (int)(param_2 - param_1 & 0xfffffff8U)) {
    FUN_0013af20(param_1,param_2,param_3,param_4,param_5,param_6,0,0);
  }
  return;
}
