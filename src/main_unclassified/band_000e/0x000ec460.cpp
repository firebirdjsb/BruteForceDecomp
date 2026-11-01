/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 915EBCD16665998214EE08AE8555AA001DB46CC494D289A0A8C17C3E88A512C6
 * Entry: 0x000ec460, Ghidra index: 2927, label: FUN_000ec460
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
extern uint32_t PTR_FUN_0039e7e8;
extern uint32_t PTR_FUN_0039ed98;
extern uint32_t PTR_LAB_003a3f18;
void FUN_000ec460(void)

{
  undefined4 *in_EAX;
  
  FUN_00059b60();
  in_EAX[8] = 0x40800000;
  in_EAX[0xe] = 0x40800000;
  /* XBE MOV m32,imm32 sites: 0x000ec482, 0x000ec475, 0x000ec47b.
   * Guest address values only; register ABI/memory mapping ABI_UNVERIFIED. */
  *in_EAX = UINT32_C(0x0039ed98);
  in_EAX[2] = UINT32_C(0x003a3f18);
  in_EAX[3] = UINT32_C(0x0039e7e8);
  in_EAX[0x10] = 0;
  in_EAX[0x11] = 0;
  return;
}
