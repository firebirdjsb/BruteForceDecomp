/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7C62AB4DAD70BA9AF253F04B604033624FA3F47BBD8982818E9B0C2BD59689C8
 * Entry: 0x00257860, Ghidra index: 8458, label: FUN_00257860
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00257860(void)

{
  int *in_EAX;
  int iVar1;
  int unaff_ESI;
  char cStack_c;
  
  (**(code **)(*in_EAX + 0x14))();
  FUN_00135410(&stack0xffffffe8);
  if ((cStack_c == '\x01') &&
     (iVar1 = *(int *)(unaff_ESI + 0x30) + 1, *(int *)(unaff_ESI + 0x30) = iVar1, 0xffe < iVar1)) {
    return 0x80004005;
  }
  return 0;
}
