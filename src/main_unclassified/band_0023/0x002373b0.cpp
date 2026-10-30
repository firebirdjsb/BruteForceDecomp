/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 49AE5A5798AB2996EADB861304F05B41E9867FF65D83BE27D41D9A7994E0E319
 * Entry: 0x002373b0, Ghidra index: 7847, label: FUN_002373b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00394160;
void FUN_002373b0(void)

{
  undefined4 *in_EAX;
  
  in_EAX[1] = 0;
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  in_EAX[5] = 0;
  in_EAX[6] = 0;
  in_EAX[7] = 0;
  in_EAX[8] = 0;
  *in_EAX = &PTR_LAB_00394160;
  in_EAX[9] = 1;
  return;
}
