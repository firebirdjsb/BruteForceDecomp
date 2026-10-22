/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 20AEA459F91DF80F32EACFAED0BBD641D329B1F0B72938E41CEDFD4898AA2625
 * Entry: 0x0006ea50, Ghidra index: 1246, label: FUN_0006ea50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004698cc;
int FUN_0006ea50(ushort param_1)

{
  int in_EAX;
  int iVar1;
  
  if (*(int *)(in_EAX + 0x120) == 0) {
    iVar1 = -1;
  }
  else {
    iVar1 = (DAT_004698cc & 0xffff) -
            (uint)*(ushort *)(*(int *)(in_EAX + 0x120) + 2 + (uint)param_1 * 6);
    if (iVar1 < 0) {
      return iVar1 + 0x10000;
    }
  }
  return iVar1;
}
