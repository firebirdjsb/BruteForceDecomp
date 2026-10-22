/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7B721EAA186A560E84CCC4A3166D25720425A973D1B10008290B90323E35D3B4
 * Entry: 0x003844c1, Ghidra index: 13647, label: FUN_003844c1
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Call target FUN_00384491 has this exact signature in its current C draft.
 * Callback ABI, register inputs and Xbox behavior remain ABI_UNVERIFIED. */
extern void FUN_00384491(undefined4 param_1,undefined4 param_2);
void FUN_003844c1(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_00380fc4();
  *(byte *)(iVar2 + 0x3a) = *(byte *)(iVar2 + 0x3a) & 0xfe;
  cVar1 = *(char *)(iVar2 + 3);
  FUN_00382132(cVar1,5);
  *(byte *)(iVar2 + 5) = *(byte *)(iVar2 + 5) | '\x01' << (cVar1 - 1U & 0x1f);
  *(undefined4 *)(iVar2 + 0x18) = 0;
  *(undefined4 *)(iVar2 + 0x20) = 0;
  *(undefined4 *)(iVar2 + 0x1c) = 0;
  *(undefined1 *)(iVar2 + 0x24) = 0;
  *(undefined1 *)(iVar2 + 0x25) = 0;
  *(undefined1 *)(iVar2 + 0x26) = 0;
  *(undefined2 *)(iVar2 + 0x36) = 0;
  *(undefined1 *)(iVar2 + 8) = 0x30;
  *(undefined1 *)(iVar2 + 9) = 0x40;
  *(code **)(iVar2 + 0x10) = FUN_00384491;
  *(undefined4 *)(iVar2 + 0x14) = param_2;
  *(undefined1 *)(iVar2 + 0x30) = 0x23;
  *(undefined1 *)(iVar2 + 0x31) = 1;
  *(undefined2 *)(iVar2 + 0x32) = 0x10;
  *(ushort *)(iVar2 + 0x34) = (ushort)*(byte *)(iVar2 + 3);
  FUN_00381379((undefined1 *)(iVar2 + 8));
  return;
}
