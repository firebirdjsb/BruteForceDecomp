/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2A84417DDD1E7D2E7982747EA32F8724C25FAED0D3D8520633DD2DBC2D8AA838
 * Entry: 0x001dd0f0, Ghidra index: 6612, label: FUN_001dd0f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001dd0f0(void)

{
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  undefined4 *puStack00000004;
  
  if (in_EAX != (undefined4 *)0x0) {
    *in_EAX = *in_ECX;
    puStack00000004 = in_EAX + 1;
    FUN_001cbc10();
    return;
  }
  return;
}
