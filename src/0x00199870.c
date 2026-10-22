/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D6A7C9BEE2E97C27AF047687F4FF4756545FCD60F756A643ECFE0F5B4F45CF1E
 * Entry: 0x00199870, Ghidra index: 5314, label: FUN_00199870
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00199870(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_0006a470();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_2);
  }
  return 0;
}
