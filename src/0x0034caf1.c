/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 33DA4CFDD79F2F16999DC9E7D7FE3B4EDE56A36D08E2A876781A4C6192616A64
 * Entry: 0x0034caf1, Ghidra index: 12983, label: FUN_0034caf1
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0034caf1(void)

{
  uint *in_ECX;
  
  if ((*in_ECX & 0x100) == 0) {
    if ((*in_ECX & 0x40) != 0) {
      KeCancelTimer(in_ECX + 0x6a);
      KeRemoveQueueDpc(in_ECX + 0x62);
    }
    FUN_00352ebc(0x100);
  }
  return;
}
