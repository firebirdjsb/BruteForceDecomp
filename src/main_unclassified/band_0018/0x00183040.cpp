/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5C00B0D26E4A0BF6753AF1C09698CCD1FFDA8324EDA1F42C089C4FADA3A4E4ED
 * Entry: 0x00183040, Ghidra index: 5193, label: FUN_00183040
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00183040(void)

{
  int in_EAX;
  
  if (((*(int *)(in_EAX + 0xa0) != -1) && (*(char *)(in_EAX + 0xac) != '\0')) &&
     ((*(uint *)(in_EAX + 0xa4) & 0x30000) == 0)) {
    *(undefined1 *)(in_EAX + 0xa8) = 0;
    *(undefined4 *)(in_EAX + 0xa0) = 0xffffffff;
  }
  return;
}
