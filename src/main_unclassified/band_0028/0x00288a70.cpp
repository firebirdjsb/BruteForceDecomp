/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 82562A02D09D18E96EC67699629289D977179AEBD70705D122715691910A278B
 * Entry: 0x00288a70, Ghidra index: 9117, label: FUN_00288a70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Exact existing callee draft declaration only; Xbox ABI_UNVERIFIED.
 * Original caller selects a byte-reader address in EAX and forwards incoming
 * EBX through EDX. The callee reads through EAX/EDX; neither input is bound by
 * the unchanged zero-argument source call or its register pseudo-locals.
 * The original buffer-selection sequence is also absent from this source.
 * These mismatches remain; no pointer mapping or ABI bridge is added.
 * Do not execute this caller as game code. */
extern int FUN_00234c90(void);
undefined4 FUN_00288a70(void)

{
  undefined4 *puVar1;
  int in_EAX;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = *(undefined4 **)(in_EAX + 4);
  if (puVar1 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = (undefined4 *)*puVar1;
  }
  while( true ) {
    if (puVar3 == puVar1) {
      return 0;
    }
    iVar2 = FUN_00234c90();
    if (iVar2 == 0) break;
    if (0 < iVar2) {
      return 0;
    }
    puVar3 = (undefined4 *)*puVar3;
  }
  return puVar3[2];
}
