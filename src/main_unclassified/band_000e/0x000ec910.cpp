/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 611CDE80B0F272438310E6AB978C24E7B4EC7DD2A264241E820A3C55CC166FCC
 * Entry: 0x000ec910, Ghidra index: 2935, label: FUN_000ec910
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Matching source-draft void() constructor 0x00059B60.
 * Guest ESI input and native C++ ABI remain unverified. */
extern void FUN_00059b60(void);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039eb60;
extern uint32_t PTR_LAB_0039ee54;
extern uint32_t PTR_LAB_003a3f18;
void FUN_000ec910(void)

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
  *in_EAX = &PTR_FUN_0039eb60;
  in_EAX[2] = &PTR_LAB_003a3f18;
  in_EAX[3] = &PTR_LAB_0039ee54;
  return;
}
