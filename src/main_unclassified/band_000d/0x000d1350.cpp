/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 968AE362AB7241FCFCC78AD98529CA159B7061BE3787997609A272C3A3AA10DB
 * Entry: 0x000d1350, Ghidra index: 2595, label: FUN_000d1350
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0008f6a0(std::uint32_t guest_esi, std::uint32_t guest_word_0);

void FUN_000d1350(void)

{
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  
  if (in_EAX != (undefined4 *)0x0) {
    *in_EAX = *in_ECX;
    in_EAX[1] = in_ECX[1];
    in_EAX[3] = 0;
    if (in_ECX[3] != 0) {
      FUN_0008f6a0(in_ECX[3]);
    }
  }
  return;
}
