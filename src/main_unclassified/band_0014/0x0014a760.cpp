/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FAF615BCE6B32452EE093256C8AD8F0D2AC494AC020D3309FFD35BC274D560D8
 * Entry: 0x0014a760, Ghidra index: 4293, label: FUN_0014a760
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0014a760(void)

{
  char cVar1;
  int in_EAX;
  
  cVar1 = *(char *)(in_EAX + 0x1b8);
  if ((-1 < cVar1) && (cVar1 < '\x03')) {
    return (uint)(uint3)(cVar1 >> 7) << 8;
  }
  return CONCAT31(cVar1 >> 7,1);
}
