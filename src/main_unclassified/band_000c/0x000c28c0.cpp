/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 30E9359915CF682AE945FA9D548CD2645FB94BC1EF6647277FDD29EC33CA02B8
 * Entry: 0x000c28c0, Ghidra index: 2374, label: FUN_000c28c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern undefined4 FUN_000ba6d0(void);

void FUN_000c28c0(byte param_1)

{
  int in_EAX;
  
  FUN_000ba6d0();
  *(byte *)(in_EAX + 100) = *(byte *)(in_EAX + 100) ^ (*(byte *)(in_EAX + 100) ^ param_1) & 1;
  return;
}
