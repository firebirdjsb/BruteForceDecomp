/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 04A8DD102EBEBF54E61F04FB21D682DB24A7BA4E57BCC8DD53F90FDFD81AA8C8
 * Entry: 0x0013ef20, Ghidra index: 4041, label: FUN_0013ef20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_0039c870;
void FUN_0013ef20(void)

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
  *in_EAX = &PTR_LAB_0039c870;
  return;
}
