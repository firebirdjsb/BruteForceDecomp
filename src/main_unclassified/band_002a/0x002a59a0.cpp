/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4E6867D17A9776A160C65758BFE38BA76FFB1AC36D708DC439C4D67FE166FB64
 * Entry: 0x002a59a0, Ghidra index: 9573, label: FUN_002a59a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003903e0;
void FUN_002a59a0(void)

{
  undefined4 *in_EAX;
  
  in_EAX[1] = 0;
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  in_EAX[5] = 0;
  in_EAX[0x1e] = 0;
  in_EAX[0x20] = 0;
  in_EAX[0x22] = 0;
  in_EAX[0x21] = 0x42c80000;
  in_EAX[0x23] = 0x3f800000;
  *(byte *)(in_EAX + 0x24) = *(byte *)(in_EAX + 0x24) & 0xf8;
  *in_EAX = PTR_LAB_003903e0;
  in_EAX[0x25] = 1;
  return;
}
