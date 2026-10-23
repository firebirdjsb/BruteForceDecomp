/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6797F66CA5CD1E5B1A0A9CB27617D3066897A2753E702CA7724CF3787B3EACF2
 * Entry: 0x0031ac9a, Ghidra index: 12276, label: FUN_0031ac9a
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0031ac9a(undefined4 param_1,int param_2)

{
  MmLockUnlockBufferPages(param_1,param_2 << 0xc,1);
  return;
}
