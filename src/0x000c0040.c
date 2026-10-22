/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 010B16FBE698771B0818CACF43C2E7458FFD8D25E4AC9CE4DF2C2F1B509C1225
 * Entry: 0x000c0040, Ghidra index: 2338, label: FUN_000c0040
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039f708;
extern uint32_t PTR_LAB_0039f6f4;
void FUN_000c0040(void)

{
  undefined4 *in_EAX;
  
  FUN_000b2230();
  *in_EAX = &PTR_FUN_0039f708;
  in_EAX[0xb] = &PTR_LAB_0039f6f4;
  in_EAX[0x1a] = 0;
  in_EAX[0x1b] = 0;
  in_EAX[0x1c] = 0;
  in_EAX[0x1e] = 0;
  if (in_EAX[0x1a] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_EAX[0x1a]);
  }
  in_EAX[0x1a] = 0;
  in_EAX[0x1b] = 0;
  in_EAX[0x1c] = 0;
  *(byte *)(in_EAX + 0x2f) = *(byte *)(in_EAX + 0x2f) & 0xf0;
  *(undefined1 *)(in_EAX + 0x1f) = 0;
  in_EAX[0x26] = 0;
  in_EAX[0x30] = 0;
  in_EAX[0x27] = 0x3e99999a;
  in_EAX[0x28] = 0xffffffff;
  return;
}
