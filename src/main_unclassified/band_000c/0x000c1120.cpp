/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F9549E681C167DE83B8DB50026A4D9C83C5AE0D7067BD8D87F26AE46FB69179B
 * Entry: 0x000c1120, Ghidra index: 2349, label: FUN_000c1120
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern undefined4 FUN_000bb220(void);

void FUN_000c1120(void)

{
  int in_EAX;
  
  if (((*(byte *)(in_EAX + 0xbc) & 1) != 0) &&
     (*(byte *)(in_EAX + 0xbc) = *(byte *)(in_EAX + 0xbc) & 0xfb | 8,
     *(char *)(in_EAX + 0x7c) == '\0')) {
    FUN_000bb220(0x15262e1b);
  }
  return;
}
