/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C18CF32DB09F900C05B0522A6E2CB53B2822FBFCB82508FC6F43F7466AC2E68B
 * Entry: 0x0020dd50, Ghidra index: 7395, label: FUN_0020dd50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0020dd50(int param_1,int param_2,int param_3)

{
  undefined4 in_ECX;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  /* Original entry+5: push 0x00308c10; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00308c10U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x40) {
    FUN_0020dd20(in_ECX);
    param_3 = param_3 + 0x40;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}
