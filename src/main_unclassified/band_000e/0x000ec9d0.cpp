/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 85241D82F6EA586DB8A0D2652A7364A4947A62B5A59B1BF1841AD2B61EBF4D55
 * Entry: 0x000ec9d0, Ghidra index: 2936, label: FUN_000ec9d0
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
extern uint32_t PTR_FUN_0039eb10;
extern uint32_t PTR_LAB_003a3f18;
void FUN_000ec9d0(void)

{
  undefined4 *in_EAX;
  
  FUN_00059b60();
  /* XBE MOV m32,imm32 sites: 0x000ec9e5, 0x000ec9d8, 0x000ec9de.
   * Guest address values only; register ABI/memory mapping ABI_UNVERIFIED. */
  *in_EAX = UINT32_C(0x0039eb10);
  in_EAX[2] = UINT32_C(0x003a3f18);
  in_EAX[3] = UINT32_C(0x0039e7e8);
  return;
}
