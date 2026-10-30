/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BF616C56AD05240941A5EF36B1763FB2F38680B1096D7CB200A91EA0816F25A9
 * Entry: 0x00069990, Ghidra index: 1170, label: FUN_00069990
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00069990(void)

{
  int in_EAX;
  int unaff_EBX;
  
  for (; in_EAX != unaff_EBX; in_EAX = in_EAX + 0x94) {
    FUN_00069f10();
  }
  return;
}
