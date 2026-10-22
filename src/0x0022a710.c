/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 950082DB4BDD771EBAEB9F9E3928D79E2A28F3F168A53FE0BF737DB85511D8B7
 * Entry: 0x0022a710, Ghidra index: 7679, label: FUN_0022a710
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003944f4;
void FUN_0022a710(void)

{
  undefined4 *in_EAX;
  
  in_EAX[4] = 0;
  in_EAX[4] = 0;
  *(byte *)(in_EAX + 5) = *(byte *)(in_EAX + 5) & 0xfb | 0xb;
  in_EAX[9] = 0;
  in_EAX[0xb] = 0;
  in_EAX[0xc] = 0;
  in_EAX[7] = 0;
  *(undefined1 *)(in_EAX + 6) = 0;
  in_EAX[2] = 0;
  in_EAX[1] = 0;
  in_EAX[0xc] = 0x129ad29;
  in_EAX[0xd] = 0;
  in_EAX[0x11] = 0;
  *in_EAX = &PTR_LAB_003944f4;
  in_EAX[0xc] = 0xe5cadbd0;
  in_EAX[0xe] = 0x3f800000;
  in_EAX[0xf] = 0x40400000;
  *(byte *)(in_EAX + 0x10) = *(byte *)(in_EAX + 0x10) & 0xfe;
  return;
}
