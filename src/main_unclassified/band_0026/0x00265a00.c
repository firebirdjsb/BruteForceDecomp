/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7788D0D630378D390D5EE1F1EB41CEDF5B12F4CCCF226724909AAAB4B3DE53F7
 * Entry: 0x00265a00, Ghidra index: 8729, label: FUN_00265a00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00265a00(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  int unaff_ESI;
  
  uVar1 = *(uint *)(in_ECX + 0x10);
  *(uint *)(unaff_ESI + 0x128) = uVar1;
  _strncpy((char *)(unaff_ESI + 6),*(char **)(in_ECX + 0xc),0x104);
  *(undefined4 *)(unaff_ESI + 0x110) = 0;
  *(undefined4 *)(unaff_ESI + 0x114) = 0;
  *(undefined4 *)(unaff_ESI + 0x118) = 0;
  *(undefined4 *)(unaff_ESI + 0x11c) = 0;
  *(undefined4 *)(unaff_ESI + 0x120) = 0;
  *(undefined1 *)(unaff_ESI + 5) = 0;
  *(undefined4 *)(unaff_ESI + 0x134) = 0;
  iVar2 = FUN_002f2b3f((char *)(unaff_ESI + 6),uVar1 & 0xc0000000,1,0,~uVar1 & 1 | 2,0,0);
  *(int *)(unaff_ESI + 0x10c) = iVar2;
  if (iVar2 == -1) {
    return 0x80004005;
  }
  *(undefined4 *)(unaff_ESI + 0x124) = 0;
  if ((*(byte *)(unaff_ESI + 0x128) & 1) == 0) {
    uVar3 = XAPILIB__GetFileSize(iVar2,0);
    *(undefined4 *)(unaff_ESI + 0x124) = uVar3;
  }
  return 0;
}
