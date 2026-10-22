/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 54CF64E90C3022067C8C1E1B08B87C7FE4A95FE44FF4EEAC1F95266687E3ADE7
 * Entry: 0x00072380, Ghidra index: 1278, label: FUN_00072380
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_00072380(void)

{
  uint in_EAX;
  
  if ((*(char *)(in_EAX + 0x84) == '\x01') ||
     ((*(char *)(in_EAX + 0x84) == '\0' && (*(int *)(in_EAX + 0x8c) != 0)))) {
    return in_EAX & 0xffffff00;
  }
  if (((*(int *)(in_EAX + 0x94) == 0) &&
      (((*(int *)(in_EAX + 0x9c) == 0 && (*(int *)(in_EAX + 0xa4) == 0)) &&
       (*(int *)(in_EAX + 0xac) == 0)))) &&
     (((*(int *)(in_EAX + 0xb4) == 0 && (*(int *)(in_EAX + 0xbc) == 0)) &&
      (*(int *)(in_EAX + 0xc4) == 0)))) {
    return 0;
  }
  return 1;
}
