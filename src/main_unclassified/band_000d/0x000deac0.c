/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FA51893BE90EB847BC3D0A7A93ABDE080902AE488B372B2A0D675B77A8B8665D
 * Entry: 0x000deac0, Ghidra index: 2722, label: FUN_000deac0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_000deac0(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_ESI;
  
  switch(*(undefined4 *)(*(int *)(unaff_ESI + 0xc) + 4)) {
  case 0:
  case 2:
  case 9:
  case 0xf:
  case 0x13:
  case 0x14:
  case 0x1a:
  case 0x1f:
    iVar1 = FUN_002ea01d(0x80);
    if (iVar1 != 0) {
      uVar2 = FUN_00173770();
      return uVar2;
    }
    break;
  case 3:
    iVar1 = FUN_002ea01d(0x98);
    if (iVar1 != 0) {
      uVar2 = FUN_00171740();
      return uVar2;
    }
    break;
  case 4:
    iVar1 = FUN_002ea01d(0xa8);
    if (iVar1 != 0) {
      uVar2 = FUN_00173c20();
      return uVar2;
    }
    break;
  case 0xc:
  case 0x10:
    iVar1 = FUN_002ea01d(0x90);
    if (iVar1 != 0) {
      uVar2 = FUN_00172f10();
      return uVar2;
    }
    break;
  case 0x11:
    iVar1 = FUN_002ea01d(0x80);
    if (iVar1 != 0) {
      uVar2 = FUN_00172840();
      return uVar2;
    }
  }
  return 0;
}
