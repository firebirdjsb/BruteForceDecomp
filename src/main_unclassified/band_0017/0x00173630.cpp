/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5ED27D5817CAACC0736D32EFD2EF90F074B27371493080FB21437D0CFF64A98B
 * Entry: 0x00173630, Ghidra index: 4883, label: FUN_00173630
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_0039a3d0;
void FUN_00173630(void)

{
  undefined4 *in_EAX;
  
  *in_EAX = &PTR_LAB_0039a3d0;
  in_EAX[2] = 3;
  in_EAX[3] = 0;
  in_EAX[4] = 0xffffffff;
  return;
}
