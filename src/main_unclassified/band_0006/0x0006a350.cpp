/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B84F3590E9B150C8B241476B3370099CF2F1E867EF7272001A82C4E446FB05FA
 * Entry: 0x0006a350, Ghidra index: 1192, label: FUN_0006a350
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0006a470(void);

void FUN_0006a350(void)

{
  int in_EAX;
  int unaff_ESI;
  
  for (; in_EAX != unaff_ESI; in_EAX = in_EAX + 0x2c) {
    FUN_0006a470();
  }
  return;
}
