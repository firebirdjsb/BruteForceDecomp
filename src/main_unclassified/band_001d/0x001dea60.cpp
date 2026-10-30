/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 55C25E7CBC5033A42A1F3693BBA9E8F1F32934DECFDC5BC30CB34AE29D3F7A2E
 * Entry: 0x001dea60, Ghidra index: 6662, label: FUN_001dea60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001dea60(int param_1,int param_2,int param_3)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  /* Original entry+5: push 0x00307bb0; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00307bb0U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x48) {
    if (param_3 != 0) {
      FUN_001c9de0();
    }
    param_3 = param_3 + 0x48;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}
