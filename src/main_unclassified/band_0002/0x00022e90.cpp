/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4973B96F7E8FD3E774C0418DE881AC487EFD16266833ABE60C096370CB6DE3C3
 * Entry: 0x00022e90, Ghidra index: 209, label: FUN_00022e90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_00055650(void);

void FUN_00022e90(void)

{
  int in_EAX;
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 0x19) = 1;
  if (in_ECX + 0x1c != in_EAX) {
    FUN_00055650();
  }
  return;
}
