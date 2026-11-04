/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 605DBDE1A228928B7144975E441B932E7C60901258DD72CBDA5CE7704E6358FD
 * Entry: 0x00173650, Ghidra index: 4884, label: FUN_00173650
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_0039a3d0;
void FUN_00173650(void)

{
  undefined4 *in_EAX;
  
  in_EAX[2] = 1;
  /* XBE 0x00173659: MOV m32,0x0039a3d0 stores a 32-bit guest VA.
   * Register ABI and guest memory translation remain ABI_UNVERIFIED. */
  *in_EAX = UINT32_C(0x0039a3d0);
  in_EAX[3] = 0;
  *(undefined1 *)(in_EAX + 4) = 0;
  in_EAX[5] = 0;
  in_EAX[6] = 0;
  in_EAX[7] = 0;
  return;
}
