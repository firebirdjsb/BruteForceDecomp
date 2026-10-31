/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 84AF7B92FF5F97CCB557B69061BFCFECB8C3E880F98D81105C1FDCFDAC4CC98E
 * Entry: 0x002ee4cd, Ghidra index: 10700, label: __hextodec
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched C++17 declaration only; original Xbox guest ABI_UNVERIFIED. */
extern ushort FUN_002eba73(int param_1, ushort param_2);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b6c30;
extern uint32_t *PTR_DAT_003b6c3c;
/* Library Function - Single Match
    __hextodec
   
   Library: Visual Studio 2003 Release */

uint __hextodec(void)

{
  uint in_EAX;
  uint uVar1;
  
  if (DAT_003b6c30 < 2) {
    uVar1 = (byte)PTR_DAT_003b6c3c[in_EAX * 2] & 4;
  }
  else {
    uVar1 = FUN_002eba73();
  }
  if (uVar1 == 0) {
    in_EAX = (in_EAX & 0xffffffdf) - 7;
  }
  return in_EAX;
}
