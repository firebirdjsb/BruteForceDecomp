/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 423A21CE8C4488E4B77B42B8D5E830D791613D40E4C9D19831AD0E71EE9A999E
 * Entry: 0x0031c099, Ghidra index: 12320, label: FUN_0031c099
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_fec0012c;
extern uint32_t _DAT_fec00130;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0031c099(void)

{
  int iVar1;
  
  iVar1 = 1000;
  if ((_DAT_fec0012c & 2) == 0) {
    _DAT_fec0012c = _DAT_fec0012c | 2;
  }
  if ((_DAT_fec0012c & 8) != 0) {
    _DAT_fec0012c = _DAT_fec0012c & 0xfffffff3;
  }
  while( true ) {
    if ((_DAT_fec00130 & 0x100) != 0) {
      return 1;
    }
    if (iVar1 == 0) break;
    KeStallExecutionProcessor(0x14);
    iVar1 = iVar1 + -1;
  }
  return 0;
}
