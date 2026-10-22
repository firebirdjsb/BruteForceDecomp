/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B72755B736C4AED99ED91C9A4439C95A6E54B33E8EEB626E1ADB59BA3A4C145E
 * Entry: 0x002f0df0, Ghidra index: 10762, label: __SEH_prolog
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: This is an inlined function */
/* WARNING: Unable to track spacebase fully for stack */
/* Library Function - Single Match
    __SEH_prolog
   
   Library: Visual Studio */

void __SEH_prolog(undefined4 param_1,int param_2)

{
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  int *unaff_FS_OFFSET;
  undefined4 unaff_retaddr;
  undefined4 auStack_18 [4];
  undefined1 local_8 [8];
  
  param_2 = -param_2;
  *(undefined4 *)((int)auStack_18 + param_2 + 0xc) = unaff_EBX;
  *(undefined4 *)((int)auStack_18 + param_2 + 8) = unaff_ESI;
  *(undefined4 *)((int)auStack_18 + param_2 + 4) = unaff_EDI;
  *(undefined4 *)((int)auStack_18 + param_2) = unaff_retaddr;
  *unaff_FS_OFFSET = (int)local_8;
  return;
}
