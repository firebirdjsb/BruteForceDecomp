/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EF96BB3668E843F95EA6BE725178324DACC62835ACA0EDC825D3DA94412633CE
 * Entry: 0x000c9920, Ghidra index: 2494, label: FUN_000c9920
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern int FUN_002eaa70(short *param_1);
extern void FUN_000c9890(int param_1);
extern int FUN_000876a0(int param_1,uint param_2);

undefined4 FUN_000c9920(void)

{
  byte in_AL;
  undefined2 uVar1;
  undefined4 uVar2;
  char in_CL;
  int unaff_ESI;
  int unaff_EDI;
  
  if (unaff_EDI == 0) {
    *(undefined1 *)(unaff_ESI + 0x3c) = 1;
    *(byte *)(unaff_ESI + 0x3b) = (in_AL & 1) << 2 | *(byte *)(unaff_ESI + 0x3b) & 0xf3;
    uVar2 = FUN_001e97c0();
    *(undefined4 *)(unaff_ESI + 0x20) = uVar2;
    *(undefined2 *)(unaff_ESI + 0x36) = 0;
    *(undefined2 *)(unaff_ESI + 0x34) = 0;
    *(undefined2 *)(unaff_ESI + 0x30) = 0;
    *(undefined2 *)(unaff_ESI + 0x32) = 0;
    return 1;
  }
  *(char *)(unaff_ESI + 0x3c) = in_CL;
  *(byte *)(unaff_ESI + 0x3b) = (in_AL & 1 | 2) << 2 | *(byte *)(unaff_ESI + 0x3b) & 0xfb;
  if (in_CL != '\0') {
    *(int *)(unaff_ESI + 0x20) = unaff_EDI;
    uVar1 = FUN_002eaa70();
    *(undefined2 *)(unaff_ESI + 0x36) = uVar1;
    *(undefined2 *)(unaff_ESI + 0x34) = uVar1;
    FUN_000c9890(unaff_ESI);
    return 1;
  }
  uVar2 = FUN_002eaa70();
  FUN_000876a0(unaff_ESI + 4,uVar2);
  uVar1 = (undefined2)*(undefined4 *)(unaff_ESI + 0x18);
  *(undefined2 *)(unaff_ESI + 0x36) = uVar1;
  *(undefined2 *)(unaff_ESI + 0x34) = uVar1;
  FUN_000c9890(unaff_ESI);
  return 1;
}
