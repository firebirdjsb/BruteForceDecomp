/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A953F78B0C1348B612599A907B5FEFB841FE6B77227C72315C323EC2E2088D6B
 * Entry: 0x000ec2d0, Ghidra index: 2923, label: FUN_000ec2d0
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
extern uint32_t PTR_FUN_0039e9f8;
extern uint32_t PTR_LAB_0039ee54;
extern uint32_t PTR_LAB_003a3f18;
void FUN_000ec2d0(void)

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
  *in_EAX = &PTR_FUN_0039e9f8;
  in_EAX[2] = &PTR_LAB_003a3f18;
  in_EAX[3] = &PTR_LAB_0039ee54;
  in_EAX[0x18] = 0;
  in_EAX[0x1a] = 0;
  in_EAX[0x1c] = 0;
  in_EAX[0x1e] = 0;
  return;
}
