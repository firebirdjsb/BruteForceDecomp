/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 02F5C102135501C0EB0E4DABBB949200EF45BB9AB0E4A93016EF3EF1FDF02F9D
 * Entry: 0x00239ae0, Ghidra index: 7890, label: FUN_00239ae0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00394110;
void FUN_00239ae0(void)

{
  undefined4 *in_EAX;
  
  *in_EAX = 0;
  in_EAX[1] = 0;
  in_EAX[4] = 0;
  in_EAX[6] = 0;
  in_EAX[7] = 0;
  in_EAX[8] = 0;
  in_EAX[9] = 0;
  FUN_00238160();
  in_EAX[10] = 0;
  in_EAX[0xb] = 0;
  in_EAX[0xc] = 0;
  in_EAX[0xe] = 0;
  in_EAX[0x10] = 0;
  in_EAX[0xf] = 0x14;
  in_EAX[0xd] = &PTR_LAB_00394110;
  in_EAX[0x13] = 0;
  in_EAX[0x14] = 0;
  in_EAX[0x15] = 0;
  return;
}
