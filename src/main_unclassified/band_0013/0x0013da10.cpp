/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5A726C13C6C2E7F8B4EC19DE98B883AF47C200B6344878181DF4E4B1AEDA211A
 * Entry: 0x0013da10, Ghidra index: 4018, label: FUN_0013da10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_0039cea8;
void FUN_0013da10(void)

{
  undefined4 *in_EAX;
  
  *(byte *)(in_EAX + 7) = *(byte *)(in_EAX + 7) & 0xfe;
  in_EAX[6] = 0;
  in_EAX[1] = 0;
  in_EAX[2] = 0;
  in_EAX[5] = 0;
  in_EAX[4] = 0;
  in_EAX[3] = 0;
  *(byte *)(in_EAX + 7) = *(byte *)(in_EAX + 7) & 0xc1;
  *in_EAX = PTR_LAB_0039cea8;
  return;
}
