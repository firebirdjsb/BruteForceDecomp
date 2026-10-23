/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5B09A94C9D11BBF988D521D06550641FFBABC667579A6462D25A473E350C9888
 * Entry: 0x00145cb0, Ghidra index: 4199, label: FUN_00145cb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00145cb0(void)

{
  int iVar1;
  undefined4 *in_EDX;
  undefined4 *puVar2;
  
  in_EDX[2] = 0;
  in_EDX[9] = 0;
  in_EDX[10] = 0;
  in_EDX[0xb] = 0;
  in_EDX[0xc] = 1;
  *(undefined1 *)((int)in_EDX + 0x71) = 1;
  *in_EDX = 0;
  in_EDX[1] = 0;
  in_EDX[5] = 0;
  in_EDX[6] = 0;
  in_EDX[7] = 0;
  in_EDX[0xd] = 0;
  in_EDX[0xe] = 0;
  in_EDX[0x18] = 0;
  in_EDX[0x1a] = 0;
  in_EDX[0x17] = 0;
  in_EDX[0x1b] = 0;
  in_EDX[0x19] = 0;
  in_EDX[8] = 2000;
  puVar2 = in_EDX + 0xf;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)(in_EDX + 0x1c) = 0;
  return;
}
