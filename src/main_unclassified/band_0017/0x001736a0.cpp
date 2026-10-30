/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DD9E08C3484F856CCED33FC3C5F5512CE2C69949645BCA707669312BF262B4C8
 * Entry: 0x001736a0, Ghidra index: 4886, label: FUN_001736a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_0039a3d0;
void FUN_001736a0(void)

{
  undefined4 *in_EAX;
  
  *in_EAX = PTR_LAB_0039a3d0;
  in_EAX[2] = 3;
  *(undefined1 *)((int)in_EAX + 0xe) = 0;
  *(undefined1 *)((int)in_EAX + 0xf) = 0;
  *(undefined1 *)(in_EAX + 4) = 0;
  *(undefined1 *)((int)in_EAX + 0x11) = 0;
  *(undefined1 *)((int)in_EAX + 0x12) = 0;
  *(undefined1 *)((int)in_EAX + 0x13) = 0;
  *(undefined1 *)(in_EAX + 5) = 0;
  *(undefined1 *)((int)in_EAX + 0x15) = 0;
  *(undefined1 *)(in_EAX + 3) = 0;
  *(undefined1 *)((int)in_EAX + 0xd) = 0;
  *(undefined1 *)((int)in_EAX + 0x16) = 0;
  *(undefined1 *)((int)in_EAX + 0x17) = 0;
  return;
}
