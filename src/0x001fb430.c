/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 897F99F48EF7A6A37336D5BCBE99A58178222C61C6A286A430646030DCBD33CF
 * Entry: 0x001fb430, Ghidra index: 7112, label: FUN_001fb430
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003963ec;
void FUN_001fb430(void)

{
  undefined4 *in_EAX;
  
  in_EAX[1] = 0xffffffff;
  in_EAX[2] = 1;
  in_EAX[3] = 0;
  in_EAX[4] = 0x7fffffff;
  in_EAX[5] = 0;
  *(undefined1 *)(in_EAX + 6) = 0;
  *in_EAX = &PTR_LAB_003963ec;
  in_EAX[7] = 0;
  in_EAX[8] = 0x3f800000;
  return;
}
