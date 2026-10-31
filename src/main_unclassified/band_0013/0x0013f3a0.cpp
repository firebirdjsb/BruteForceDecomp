/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7742F6021EA09F076B82924B17436AE4781E7D5CBF756A0E49F6D247DB1F605D
 * Entry: 0x0013f3a0, Ghidra index: 4049, label: FUN_0013f3a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0041f2e0;
extern uint32_t PTR_FUN_0039c324;
void FUN_0013f3a0(void)

{
  undefined4 *in_EAX;
  undefined4 in_EDX;
  
  in_EAX[1] = 0;
  in_EAX[4] = 0;
  in_EAX[6] = 0;
  *(undefined1 *)(in_EAX + 7) = 0;
  in_EAX[8] = in_EDX;
  /* XBE 0x0013f3b7: MOV m32,0x0039c324 stores a 32-bit guest VA.
   * Register ABI and guest memory translation remain ABI_UNVERIFIED. */
  *in_EAX = UINT32_C(0x0039c324);
  in_EAX[10] = 0;
  in_EAX[0xb] = 0;
  in_EAX[0xc] = 0;
  in_EAX[0xe] = 0;
  in_EAX[0xf] = 0;
  in_EAX[0x10] = 0;
  DAT_0041f2e0 = DAT_0041f2e0 + 1;
  *(byte *)(in_EAX + 0x11) = *(byte *)(in_EAX + 0x11) & 0xf8;
  return;
}
