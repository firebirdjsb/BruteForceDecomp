/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DE1095AB40A4109BA9EDB833D6D9A7943D50C0A0233C7422839EA4CF9DA448F9
 * Entry: 0x0029b570, Ghidra index: 9426, label: FUN_0029b570
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0029b570(void)

{
  undefined4 extraout_ECX;
  undefined4 *unaff_EBX;
  int unaff_ESI;
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(unaff_ESI + 4);
  do {
    switch(uVar1) {
    case 0x28:
    case 0x7b:
    case 0x11c:
      FUN_00299cd0();
      uVar1 = 0;
      break;
    default:
      return;
    case 0x2e:
      uVar1 = FUN_00296110();
      *(undefined4 *)(unaff_ESI + 4) = uVar1;
      FUN_00299cd0();
      *unaff_EBX = 2;
      uVar1 = FUN_0029a3b0();
      goto LAB_0029b643;
    case 0x3a:
      uVar1 = FUN_00296110();
      *(undefined4 *)(unaff_ESI + 4) = uVar1;
      FUN_00299cd0();
      uVar1 = FUN_0029a3b0(extraout_ECX,1);
      FUN_00299580(0x14,uVar1);
      uVar1 = 1;
      break;
    case 0x5b:
      uVar1 = FUN_00296110();
      *(undefined4 *)(unaff_ESI + 4) = uVar1;
      FUN_00299cd0();
      FUN_0029ae00();
      if (*(int *)(unaff_ESI + 4) != 0x5d) {
        FUN_0029a130();
      }
      uVar1 = FUN_00296110();
      *(undefined4 *)(unaff_ESI + 4) = uVar1;
      *unaff_EBX = 3;
      goto LAB_0029b646;
    }
    *unaff_EBX = 4;
    uVar1 = FUN_0029b770(uVar1);
LAB_0029b643:
    unaff_EBX[1] = uVar1;
LAB_0029b646:
    uVar1 = *(undefined4 *)(unaff_ESI + 4);
  } while( true );
}
