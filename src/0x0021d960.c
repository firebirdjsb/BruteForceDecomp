/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C3B0F7532E307409BE5CE63A492DCF10CD88E85AFAD7A55B09CDA1F949E60050
 * Entry: 0x0021d960, Ghidra index: 7545, label: FUN_0021d960
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00394ab8;
void FUN_0021d960(void)

{
  undefined4 *in_EAX;
  
  FUN_00155340();
  in_EAX[0x19] = 0;
  in_EAX[0x18] = 0;
  in_EAX[0x17] = 0;
  in_EAX[0x15] = 0;
  in_EAX[0x14] = 0;
  in_EAX[0x13] = 0;
  in_EAX[0x1a] = 0x3f800000;
  in_EAX[0x16] = 0x3f800000;
  in_EAX[0x12] = 0x3f800000;
  in_EAX[0x1d] = 0;
  in_EAX[0x1c] = 0;
  in_EAX[0x1b] = 0;
  *in_EAX = &PTR_FUN_00394ab8;
  in_EAX[0x11] = 2;
  return;
}
