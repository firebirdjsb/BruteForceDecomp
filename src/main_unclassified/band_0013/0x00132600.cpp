/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2CB750D662C7B8E862A11B44F63E8B18C373F7D70E59079B64693AF5B8E20790
 * Entry: 0x00132600, Ghidra index: 3842, label: FUN_00132600
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-only C++17 call declaration; guest ABI_UNVERIFIED. */
extern void FUN_00132b50(void);
void FUN_00132600(void)

{
  int in_EAX;
  int unaff_EDI;
  
  for (; in_EAX != unaff_EDI; in_EAX = in_EAX + 0x70) {
    FUN_00132b50();
  }
  return;
}
