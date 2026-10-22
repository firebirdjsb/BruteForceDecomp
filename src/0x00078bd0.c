/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8095C5F8D28E1A98A46F44EA0B0D6B0D36D4AB081BEE9BAFA45073BFB0043C08
 * Entry: 0x00078bd0, Ghidra index: 1431, label: FUN_00078bd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00078bd0(void)

{
  char cVar1;
  char *pcVar2;
  char *in_EDX;
  int unaff_ESI;
  
  *(undefined4 *)(unaff_ESI + 0x18) = 0xf;
  *(undefined4 *)(unaff_ESI + 0x14) = 0;
  *(undefined1 *)(unaff_ESI + 4) = 0;
  if (in_EDX != (char *)0x0) {
    pcVar2 = in_EDX;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_0001fed0(in_EDX,(int)pcVar2 - (int)(in_EDX + 1));
    return;
  }
  FUN_0001f5a0(0,0xffffffff);
  return;
}
