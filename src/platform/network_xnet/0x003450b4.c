/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1A26ED02697A1D5BAC6D55C1FED9A93C9D15AEF52CAE391353709740E32F3C05
 * Entry: 0x003450b4, Ghidra index: 12782, label: FUN_003450b4
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_socket_abi_draft.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040f5b4;
void FUN_003450b4(int param_1,sockaddr *param_2,socklen_t param_3)

{
  XONLINES__bind(DAT_0040f5b4,param_1,param_2,param_3);
  return;
}
