/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 304BA89637BDC9EC7667DB067B2B27C4942618B3A3450352CD74ABBA51D71A43
 * Entry: 0x00174580, Ghidra index: 4910, label: FUN_00174580
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_0039a3d0;
void FUN_00174580(void)

{
  undefined4 *in_EAX;
  
  *in_EAX = PTR_LAB_0039a3d0;
  in_EAX[3] = 0;
  in_EAX[5] = 0;
  in_EAX[2] = 2;
  in_EAX[4] = 0x3f800000;
  return;
}
