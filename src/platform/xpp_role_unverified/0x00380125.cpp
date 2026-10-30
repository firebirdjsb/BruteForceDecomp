/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B24CE01C045FA3C776F7251D83901607A59AFF7EEC99591F508760BF943274EE
 * Entry: 0x00380125, Ghidra index: 13526, label: FUN_00380125
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00380125(void)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  byte *in_EDX;
  
  *(undefined4 *)((int)in_ECX + 0x5a) = 0;
  iVar3 = *in_ECX;
  puVar1 = (undefined1 *)((int)in_ECX + 0x52);
  *puVar1 = 0x20;
  *(undefined1 *)((int)in_ECX + 0x53) = 0x82;
  iVar2 = FUN_00381379(puVar1);
  if (-1 < iVar2) {
    *(byte *)((int)in_ECX + 0xa2) = *(byte *)((int)in_ECX + 0xa2) | 2;
    *(undefined4 *)((int)in_ECX + 0x5a) = 0;
    *puVar1 = 0x20;
    *(undefined1 *)((int)in_ECX + 0x53) = 2;
    *(undefined1 *)((int)in_ECX + 0x67) = *(undefined1 *)(iVar3 + 8);
    *(undefined1 *)(in_ECX + 0x1a) = 3;
    *(byte *)((int)in_ECX + 0x69) = in_EDX[1];
    *(undefined2 *)((int)in_ECX + 0x6e) = 0x20;
    iVar2 = FUN_00381379(puVar1);
    if (-1 < iVar2) {
      in_ECX[3] = *(int *)((int)in_ECX + 0x62);
      if (((*in_EDX & 2) != 0) && (*(char *)(iVar3 + 9) != '\0')) {
        *(undefined4 *)((int)in_ECX + 0x5a) = 0;
        *puVar1 = 0x20;
        *(undefined1 *)((int)in_ECX + 0x53) = 2;
        *(undefined1 *)((int)in_ECX + 0x67) = *(undefined1 *)(iVar3 + 9);
        *(undefined1 *)(in_ECX + 0x1a) = 3;
        *(byte *)((int)in_ECX + 0x69) = in_EDX[2];
        *(undefined2 *)((int)in_ECX + 0x6e) = 0x20;
        iVar3 = FUN_00381379(puVar1);
        if (-1 < iVar3) {
          in_ECX[4] = *(int *)((int)in_ECX + 0x62);
        }
      }
    }
  }
  return;
}
