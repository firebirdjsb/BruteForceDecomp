/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A107823295B58F08960B98E376583AFCE8FDE4DD2ED7795F567DB0DFD391F2CD
 * Entry: 0x0033c1e8, Ghidra index: 12547, label: FUN_0033c1e8
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0033c1e8(undefined4 *param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  int iVar2;
  undefined1 local_24 [4];
  int local_20;
  int local_1c;
  int local_14;
  undefined4 local_c;
  /* 0x33c230/0x33c2cd pass a one-byte output slot to 0x33c0d7.
   * Keep all equality operands char: byte CMP at 0x33c31e also treats
   * matching bit patterns 0x80..0xff as equal. Full pointer stays in EDI. */
  char selector_byte;
  char local_5;
  
  FUN_0033bb7c(in_ECX + 0x824);
  puVar1 = param_1;
  local_c = 0;
  iVar2 = param_1[4];
  if ((uint)(*(int *)(in_ECX + 0x834) - *(int *)(in_ECX + 0x82c)) < 4) {
    local_14 = local_14 - local_1c;
    local_1c = 0;
    FUN_0033c0d7(in_ECX + 0x24,local_24,1,&selector_byte);
    FUN_0033bbd6(1);
    FUN_0033c0d7(in_ECX + 0x24,local_24,puVar1[3],iVar2);
    FUN_0033bbd6(local_20 + -1);
  }
  else {
    FUN_0033bc50((uint)param_1[3] >> 9);
    FUN_0033c0d7(iVar2,local_24,1,&selector_byte);
    FUN_0033bbd6(1);
    FUN_0033c0d7(iVar2,local_24,local_20,iVar2);
    iVar2 = iVar2 + local_20;
    FUN_0033bba7(in_ECX + 0x824);
    FUN_0033bc25((uint)puVar1[3] >> 9);
    FUN_0033c0d7(in_ECX + 0x24,local_24,(puVar1[3] + 1) % 500 + local_14 * 500,iVar2);
    FUN_0033bbd6(local_20 + -1);
  }
  FUN_0033c0d7(in_ECX + 0x24,local_24,1,&local_5);
  if ((local_5 != selector_byte) || (selector_byte != *(char *)(in_ECX + 0x83c))) {
    *puVar1 = 0;
    local_c = 0x80004005;
  }
  return local_c;
}
