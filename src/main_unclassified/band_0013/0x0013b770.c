/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 90E019EDD1630FAE19D0A6D9246F6264FDB7E3989EA841EAA50B0D430010C5BB
 * Entry: 0x0013b770, Ghidra index: 3988, label: FUN_0013b770
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_0039c730;
void FUN_0013b770(void)

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
  in_EAX[0xe] = 0;
  *(byte *)((int)in_EAX + 0x35) = *(byte *)((int)in_EAX + 0x35) & 0xfe;
  *(undefined1 *)((int)in_EAX + 0x36) = 0;
  *(undefined1 *)(in_EAX + 0xd) = 1;
  in_EAX[8] = 0;
  in_EAX[9] = 0;
  in_EAX[10] = 0x42480000;
  in_EAX[0xb] = 0;
  in_EAX[0xc] = 0;
  *in_EAX = &PTR_LAB_0039c730;
  in_EAX[0xf] = 0x3f800000;
  return;
}
