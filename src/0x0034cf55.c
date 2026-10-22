/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9A6EE1CA3D2F549430D45542F4C9721478DE4A8D6F5822F12282BAFB08EEE7C6
 * Entry: 0x0034cf55, Ghidra index: 12992, label: FUN_0034cf55
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_fef00004;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0034cf55(void)

{
  int in_ECX;
  
  _DAT_fef00004 = 0;
  KeInsertQueueDpc(in_ECX + 0x1ec,0,0);
  return 1;
}
