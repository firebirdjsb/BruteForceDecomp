/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 434000B695ED6CA4B60BE25AE84F11E3BA7959110C4C2B6A16964656715064AB
 * Entry: 0x002885a0, Ghidra index: 9109, label: FUN_002885a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002885a0(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *in_EDX;
  int unaff_ESI;
  
  *(undefined4 *)(unaff_ESI + 0x18) = 0xf;
  *(undefined4 *)(unaff_ESI + 0x14) = 0;
  *(undefined1 *)(unaff_ESI + 4) = 0;
  *(undefined4 *)(unaff_ESI + 0x34) = 0xf;
  *(undefined4 *)(unaff_ESI + 0x30) = 0;
  *(undefined1 *)(unaff_ESI + 0x20) = 0;
  if (in_EDX != (char *)0x0) {
    pcVar2 = in_EDX;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_0001fed0(in_EDX,(int)pcVar2 - (int)(in_EDX + 1));
  }
  if (param_1 != (char *)0x0) {
    pcVar2 = param_1;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_0001fed0(param_1,(int)pcVar2 - (int)(param_1 + 1));
  }
  return;
}
