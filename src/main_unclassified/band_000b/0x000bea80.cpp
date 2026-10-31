/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DD4BD71A79DA9AEF1BE968E76439ADA3E2F266274F8E22350D24F7276F4A43B2
 * Entry: 0x000bea80, Ghidra index: 2323, label: FUN_000bea80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_000beae0(void);

extern uint32_t PTR_FUN_0039f74c;
void FUN_000bea80(void)

{
  undefined4 *in_EAX;
  
  /* XBE 0x000bea85: MOV m32,0x0039f74c stores a 32-bit guest VA.
   * Register ABI and guest memory translation remain ABI_UNVERIFIED. */
  *in_EAX = UINT32_C(0x0039f74c);
  in_EAX[2] = 0;
  in_EAX[4] = 0;
  in_EAX[6] = 0;
  in_EAX[9] = 0;
  in_EAX[8] = 0;
  in_EAX[7] = 0;
  in_EAX[10] = 0x7f7fffff;
  in_EAX[0xb] = 0x3e800000;
  in_EAX[0xc] = 0x3e000000;
  *(byte *)(in_EAX + 0x13) = *(byte *)(in_EAX + 0x13) & 0xfc;
  in_EAX[0xd] = 0x3f800000;
  in_EAX[0x10] = 0;
  in_EAX[0x11] = 0;
  in_EAX[0x12] = 0x443b8000;
  in_EAX[0xe] = 0;
  in_EAX[0xf] = 0;
  FUN_000beae0();
  return;
}
