/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4CA9EC21CCB5A5E4B060E800D7898929CC54A4F22EF9135FC48BA8427073B579
 * Entry: 0x000ec5a0, Ghidra index: 2930, label: FUN_000ec5a0
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
extern uint32_t PTR_FUN_0039eab0;
extern uint32_t PTR_FUN_0039eac0;
extern uint32_t PTR_LAB_003a3f18;
void FUN_000ec5a0(void)

{
  undefined4 *in_EAX;
  
  FUN_00059b60();
  in_EAX[0xf] = 0;
  in_EAX[0x11] = 0;
  in_EAX[0x13] = 0;
  in_EAX[0x14] = 0xffffffff;
  /* XBE MOV m32,imm32 sites: 0x000ec5c7, 0x000ec5ba, 0x000ec5c0.
   * Guest address values only; register ABI/memory mapping ABI_UNVERIFIED. */
  *in_EAX = UINT32_C(0x0039eac0);
  in_EAX[2] = UINT32_C(0x003a3f18);
  in_EAX[3] = UINT32_C(0x0039eab0);
  in_EAX[0x1c] = 0;
  in_EAX[0x1b] = 0;
  in_EAX[0x1a] = 0;
  in_EAX[0x18] = 0;
  in_EAX[0x17] = 0;
  in_EAX[0x16] = 0;
  in_EAX[0x1d] = 0x3f800000;
  in_EAX[0x19] = 0x3f800000;
  in_EAX[0x15] = 0x3f800000;
  return;
}
