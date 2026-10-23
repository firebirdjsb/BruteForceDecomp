/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A565AD05D075C9A0ADFCE988446D9716324442AD8FD80EDDD974DD36323297A4
 * Entry: 0x002561e0, Ghidra index: 8432, label: FUN_002561e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00393850;
void FUN_002561e0(void)

{
  undefined4 *in_EAX;
  
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  in_EAX[5] = 0;
  in_EAX[7] = 0;
  in_EAX[8] = 0;
  in_EAX[9] = 0;
  in_EAX[0x10] = 0;
  in_EAX[0x11] = 0xf;
  *(undefined1 *)(in_EAX + 0xc) = 0;
  in_EAX[0x17] = 0;
  in_EAX[0x18] = 0xf;
  *(undefined1 *)(in_EAX + 0x13) = 0;
  in_EAX[10] = 1;
  *in_EAX = &PTR_LAB_00393850;
  in_EAX[0x19] = 1;
  return;
}
