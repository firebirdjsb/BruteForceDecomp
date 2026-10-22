/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CC4AACE5447261BB4753542183977F03A9A9BDB20D57330FB12F23DF3E64DBD8
 * Entry: 0x002058c0, Ghidra index: 7289, label: FUN_002058c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002058c0(undefined4 param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int in_ECX;
  
  if ((~*(byte *)(in_ECX + 0x3d) & 1) != 0) {
    FUN_001ff0f0(param_1);
    FUN_001ff000();
    return;
  }
  cVar1 = FUN_001feb60();
  do {
    if (cVar1 == '\0') {
      return;
    }
    switch(uRam00000008) {
    case 4:
      *(undefined1 *)(in_ECX + 0x98) = 0;
      goto LAB_00205952;
    default:
      FUN_001ff0f0(param_1);
      FUN_001ff000();
      goto LAB_00205a05;
    case 0x1e:
      *(undefined4 *)(in_ECX + 0xa0) = 0;
      break;
    case 0x1f:
      *(undefined4 *)(in_ECX + 0xa0) = 1;
      *(undefined1 *)(in_ECX + 0x98) = 1;
      goto LAB_00205952;
    case 0x20:
      *(undefined4 *)(in_ECX + 0xa0) = 2;
      break;
    case 0x21:
      *(undefined4 *)(in_ECX + 0xa0) = 3;
      break;
    case 0x22:
      *(undefined4 *)(in_ECX + 0xa0) = 4;
      break;
    case 0x23:
      *(undefined4 *)(in_ECX + 0xa0) = 5;
    }
    *(undefined1 *)(in_ECX + 0x98) = 1;
LAB_00205952:
    if (((*(char *)(in_ECX + 0x99) != '\0') && (*(char *)(in_ECX + 0x98) == '\x01')) &&
       (piVar2 = (int *)FUN_001fb020(), piVar2 != (int *)0x0)) {
      uVar3 = (**(code **)(*piVar2 + 0x40))();
      FUN_0003d730(in_ECX + 100,uVar3);
    }
    FUN_001feac0();
LAB_00205a05:
    cVar1 = FUN_001feb60();
  } while( true );
}
