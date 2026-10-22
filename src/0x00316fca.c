/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FF9A30A8D738ACBC09BD516CF135B45C8EFEC988EB3BE181B0310232BC7FE407
 * Entry: 0x00316fca, Ghidra index: 12167, label: FUN_00316fca
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00316fca(void)

{
  int in_ECX;
  
  if ((*(ushort *)(in_ECX + 0x12) & 0x8002) == 0) {
    DSOUND__CMcpxStream_Flush(0);
  }
  return;
}
