/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 17CF07353871ADEAFB5D21954C4B62CDBE961465A6E460C2057DD16C7E3DF0DA
 * Entry: 0x001dd070, Ghidra index: 6610, label: FUN_001dd070
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001dd070(void)

{
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  
  if (in_EAX != (undefined4 *)0x0) {
    *in_EAX = *in_ECX;
    in_EAX[1] = in_ECX[1];
    *(undefined1 *)(in_EAX + 2) = *(undefined1 *)(in_ECX + 2);
    *(undefined4 *)((int)in_EAX + 9) = *(undefined4 *)((int)in_ECX + 9);
    *(undefined1 *)((int)in_EAX + 0xd) = *(undefined1 *)((int)in_ECX + 0xd);
    in_EAX[4] = in_ECX[4];
    in_EAX[5] = in_ECX[5];
    in_EAX[6] = in_ECX[6];
  }
  return;
}
