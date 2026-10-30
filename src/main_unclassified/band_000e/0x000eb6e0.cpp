/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CB11B62BA77E61C5058E3A2CF450FC49E129FAAD8CD23510865AF04648DB4709
 * Entry: 0x000eb6e0, Ghidra index: 2896, label: FUN_000eb6e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Existing Ghidra constructor at 0x00059B60 has no explicit source
 * arguments and uses incoming guest ESI. Host symbol is syntax-only;
 * implicit registers and original Xbox calling ABI are UNVERIFIED. */
extern void FUN_00059b60(void);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039e6f8;
extern uint32_t PTR_LAB_0039ee54;
extern uint32_t PTR_LAB_003a3f18;
void FUN_000eb6e0(void)

{
  undefined4 *in_EAX;
  
  FUN_00059b60();
  in_EAX[0x15] = 0;
  in_EAX[0x14] = 0;
  in_EAX[0x13] = 0;
  in_EAX[0x11] = 0;
  in_EAX[0x10] = 0;
  in_EAX[0xf] = 0;
  in_EAX[0x16] = 0x3f800000;
  in_EAX[0x12] = 0x3f800000;
  in_EAX[0xe] = 0x3f800000;
  *in_EAX = &PTR_FUN_0039e6f8;
  in_EAX[2] = &PTR_LAB_003a3f18;
  in_EAX[3] = &PTR_LAB_0039ee54;
  return;
}
