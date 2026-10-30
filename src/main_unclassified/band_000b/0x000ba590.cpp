/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C04E7EB84DE167F39A817A9AEB8518B01A7A850C13987EFBFB8FAD2FACA91173
 * Entry: 0x000ba590, Ghidra index: 2261, label: FUN_000ba590
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_000ba590(void)

{
  int in_EAX;
  
  if (*(char *)(in_EAX + 0x3c) != '\0') {
    return *(int *)(in_EAX + 0x20);
  }
  if (7 < *(uint *)(in_EAX + 0x1c)) {
    return *(int *)(in_EAX + 8);
  }
  return in_EAX + 8;
}
