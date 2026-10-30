/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 785BE4EF8FEDA765D641352F6EB2D2AB02CF4D211DD2BCE5FFF46A1FD7810A91
 * Entry: 0x001a7cb0, Ghidra index: 5416, label: FUN_001a7cb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001a7cb0(void)

{
  char *in_EAX;
  int in_ECX;
  uint uVar1;
  
  uVar1 = (uint)(*in_EAX != -0x80);
  if (uVar1 == 0) {
    in_ECX = 1;
  }
  if (uVar1 + in_ECX == 0) {
    *in_EAX = -0x80;
  }
  else if (*in_EAX == -0x80) {
    *in_EAX = '\0';
    return;
  }
  return;
}
