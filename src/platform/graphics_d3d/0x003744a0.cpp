/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CCE4F693495EBF613D0D5DE12DE8627E74270FF4E6CE727D4BA30EEC3B5142A9
 * Entry: 0x003744a0, Ghidra index: 13423, label: FUN_003744a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_fd001804;
extern uint32_t _DAT_fd009140;
extern uint32_t _DAT_fd600140;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_003744a0(void)

{
  undefined4 *in_EAX;
  
  *in_EAX = 0xfd000000;
  _DAT_fd001804 = _DAT_fd001804 | 4;
  _DAT_fd600140 = 0;
  _DAT_fd009140 = 0;
  return 1;
}
